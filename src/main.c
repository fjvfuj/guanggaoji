#include "lvgl/lvgl.h"
#include "lv_drivers/display/sunxifb.h"
#include "lv_drivers/indev/evdev.h"
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <ucontext.h>
#include <dlfcn.h>
#include <pthread.h>
#include "GuiGuider/generated/gui_guider.h"
#include "GuiGuider/generated/events_init.h"
#include "GuiGuider/custom/gui_guider_keypad.h"

lv_indev_t *evdev_indev;
lv_indev_drv_t indev_drv;
lv_ui guider_ui;

// LVGL mutex for thread safety (declared extern, defined in lv_pro_res.c)
extern pthread_mutex_t lvgl_mutex;

static void keypad_int()
{
    evdev_init();
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_KEYPAD;
    indev_drv.read_cb = evdev_read_ex;
    evdev_indev = lv_indev_drv_register(&indev_drv);
}

void print_stack(ucontext_t *uc) {
    if (!uc) {
        printf("No valid context provided.\n");
        return;
    }

    // Extract program counter (PC) and stack pointer (SP) from context
    void *pc = (void *)uc->uc_mcontext.__gregs[REG_PC];
    void *sp = (void *)uc->uc_mcontext.__gregs[REG_SP];

    printf("Program counter: %p\n", pc);
    printf("Stack pointer: %p\n", sp);

    // Traverse the stack and print addresses
    void **stack = (void **)sp;
    for (int i = 0; i < 10 && stack; i++) {
        Dl_info info;
        void *addr = stack[i];

        // Resolve symbol and library info
        if (dladdr(addr, &info)) {
            printf("Frame[%d]: Address: %p, Symbol: %s, Library: %s, Offset: %p\n",
                    i,
                    addr,
                    info.dli_sname ? info.dli_sname : "Unknown",
                    info.dli_fname ? info.dli_fname : "Unknown",
                    (void *)((uintptr_t)addr - (uintptr_t)info.dli_fbase));
        } else {
            printf("Frame[%d]: Address: %p, Unknown symbol\n", i, addr);
        }
    }
}


void signal_handler(int sig, siginfo_t *si, void *arg) {
    ucontext_t *uc = (ucontext_t *)arg;
    printf("Caught signal %d\n", sig);
    print_stack(uc);
    exit(1);
}

static void install_sig_handler(void)
{
    struct sigaction sa;
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = signal_handler;
    sigemptyset(&sa.sa_mask);

    int signals[] = {
        SIGBUS,
        SIGFPE,
        SIGHUP,
        SIGILL,
        SIGINT,
        SIGIOT,
        SIGPIPE,
        SIGQUIT,
        SIGSEGV,
        SIGSYS,
        SIGTERM,
        SIGTRAP,
        SIGUSR1,
        SIGUSR2
    };
    size_t num_signals = sizeof(signals) / sizeof(signals[0]);

    for (size_t i = 0; i < num_signals; i++) {
        if (sigaction(signals[i], &sa, NULL) == -1) {
            printf("Failed to register handler for signal %d\n", signals[i]);
            exit(EXIT_FAILURE);
        }
    }
}

int main(int argc, char *argv[]) {
    lv_disp_drv_t disp_drv;
    lv_disp_draw_buf_t disp_buf;
    uint32_t rotated = LV_DISP_ROT_NONE;

    install_sig_handler();

    lv_disp_drv_init(&disp_drv);

    /* Default to native landscape. Keep argv override for board bring-up tests. */
#ifndef USE_SUNXIFB_G2D_ROTATE
    if (rotated != LV_DISP_ROT_NONE)
        disp_drv.sw_rotate = 1;
#endif

    if (argc >= 2 && atoi(argv[1]) >= 0 && atoi(argv[1]) <= 4) {
        rotated = atoi(argv[1]);
#ifndef USE_SUNXIFB_G2D_ROTATE
        if (rotated != LV_DISP_ROT_NONE)
            disp_drv.sw_rotate = 1;
        else
            disp_drv.sw_rotate = 0;
#endif
    }

    printf("[Main] LVGL GUI-Guider UI Starting...\n");

    /*LVGL init*/
    lv_init();

    /*Linux frame buffer device init*/
    sunxifb_init(rotated);

    /*A buffer for LVGL to draw the screen's content*/
    static uint32_t width, height;
    sunxifb_get_sizes(&width, &height);
    printf("[Main] Screen size: %dx%d\n", width, height);
    if (width != 1920 || height != 1080) {
        printf("[Main] Warning: expected 1920x1080 landscape, actual %dx%d\n", width, height);
    }
    // width = 1920;
    // height = 1080;
    static lv_color_t *buf;
#ifdef USE_SUNXIFB_DIRECT_MODE
    buf = (lv_color_t*) sunxifb_get_buf();
#else
    buf = (lv_color_t*) sunxifb_alloc(width * height * sizeof(lv_color_t),
            "new_ui");
#endif

    if (buf == NULL) {
        sunxifb_exit();
        printf("[Main] Failed to allocate draw buffer\n");
        return 1;
    }

    /*Initialize a descriptor for the buffer*/
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, width * height);

    /*Initialize and register a display driver*/
    disp_drv.draw_buf = &disp_buf;
    disp_drv.flush_cb = sunxifb_flush;
    disp_drv.hor_res = width;
    disp_drv.ver_res = height;
    disp_drv.rotated = rotated;
    disp_drv.screen_transp = 0;
#ifdef USE_SUNXIFB_DIRECT_MODE
    disp_drv.direct_mode = 1;
    disp_drv.full_refresh = 1;
#endif
    lv_disp_drv_register(&disp_drv);

    // Initialize input device
    keypad_int();

    // Initialize the GUI-Guider home UI only; do not start network slideshow here.
    setup_ui(&guider_ui);
    gui_guider_keypad_init(&guider_ui, evdev_indev);
    events_init(&guider_ui);

    printf("[Main] Entering main loop...\n");

    /*Handle LVGL tasks (tickless mode)*/
    while (1) {
        pthread_mutex_lock(&lvgl_mutex);
        lv_task_handler();
        gui_guider_keypad_poll();
        pthread_mutex_unlock(&lvgl_mutex);
        usleep(10000); // 10ms
    }

    // Cleanup (unreachable in normal operation)
    sunxifb_exit();
    return 0;
}

/*Set in lv_conf.h as `LV_TICK_CUSTOM_SYS_TIME_EXPR`*/
uint32_t custom_tick_get(void) {
    static uint64_t start_ms = 0;
    if (start_ms == 0) {
        struct timeval tv_start;
        gettimeofday(&tv_start, NULL);
        start_ms = ((uint64_t) tv_start.tv_sec * 1000000
                + (uint64_t) tv_start.tv_usec) / 1000;
    }

    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    uint64_t now_ms;
    now_ms = ((uint64_t) tv_now.tv_sec * 1000000 + (uint64_t) tv_now.tv_usec)
            / 1000;

    uint32_t time_ms = now_ms - start_ms;
    return time_ms;
}
