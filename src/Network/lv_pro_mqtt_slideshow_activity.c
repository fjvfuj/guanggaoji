#include "lv_pro_mqtt_slideshow_activity.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>

#include "lv_pro_mqtt_slideshow_config.h"
#include "lv_pro_mqtt_slideshow_store.h"
#include "lv_pro_mqtt_slideshow_http.h"
#include "lv_pro_mqtt_slideshow_worker.h"
#include "lv_pro_mqtt_slideshow_mqtt.h"
#include "lv_pro_mqtt_slideshow_factory_sn.h"

lv_obj_t *mqtt_slideshow_activity = NULL;
lv_obj_t *mqtt_slideshow_img = NULL;
lv_group_t *mqtt_slideshow_group = NULL;

static lv_timer_t *s_slideshow_timer = NULL;
static lv_timer_t *s_boot_reload_timer = NULL;
static int s_current_image_index = 0;
static bool s_inited = false;
static bool s_started = false;
static bool s_factory_lock = false;
static lv_obj_t *s_factory_sn_label = NULL;
static char s_runtime_image_linux_path[256] = {0};
static int s_runtime_copy_seq = 0;

static void slideshow_timer_cb(lv_timer_t *timer);
static void boot_reload_timer_cb(lv_timer_t *timer);
static void ui_reload_async_cb(void *arg);
static int copy_file_for_lvgl_runtime(const char *src_path, char *out_lvgl_path, int out_size);
static const char *image_ext_from_path(const char *path);
static void show_factory_sn_lock_screen(const char *sn, const char *source);

static void signal_handler(int sig)
{
    const char *sig_name = "Unknown";

    switch (sig) {
        case SIGSEGV: sig_name = "SIGSEGV"; break;
        case SIGABRT: sig_name = "SIGABRT"; break;
        case SIGFPE:  sig_name = "SIGFPE";  break;
        case SIGILL:  sig_name = "SIGILL";  break;
        case SIGBUS:  sig_name = "SIGBUS";  break;
        default: break;
    }

    fprintf(stderr, "\n[FATAL] MQTT slideshow crashed: signal=%d %s\n", sig, sig_name);
    fflush(stderr);
    _exit(sig);
}

static void reset_lvgl_img_cache(void)
{
#if LV_USE_IMG
    lv_img_cache_set_size(0);
    lv_img_cache_set_size(LV_IMG_CACHE_DEF_SIZE);
#endif
}

static void clear_image_obj_src(void)
{
    if (mqtt_slideshow_img != NULL) {
        lv_img_set_src(mqtt_slideshow_img, NULL);
    }
    reset_lvgl_img_cache();
}
static void show_factory_sn_lock_screen(const char *sn, const char *source)
{
    char text[512];

    s_factory_lock = true;
    clear_image_obj_src();

    if (mqtt_slideshow_img != NULL) {
        lv_obj_add_flag(mqtt_slideshow_img, LV_OBJ_FLAG_HIDDEN);
    }

    if (mqtt_slideshow_activity == NULL) return;

    lv_obj_set_style_bg_color(mqtt_slideshow_activity, lv_color_black(), 0);
    lv_obj_set_style_bg_opa(mqtt_slideshow_activity, LV_OPA_COVER, 0);

    s_factory_sn_label = lv_label_create(mqtt_slideshow_activity);
    lv_label_set_long_mode(s_factory_sn_label, LV_LABEL_LONG_WRAP);
    lv_obj_set_width(s_factory_sn_label, LV_HOR_RES - 40);

    snprintf(text, sizeof(text),
             "FACTORY SN MODE\n\n"
             "SN:\n%s\n\n"
             "Source:\n%s\n\n"
             "Input this SN on PC.\n"
             "After recording, reboot device.",
             sn ? sn : "",
             source ? source : "");

    lv_label_set_text(s_factory_sn_label, text);
    lv_obj_set_style_text_color(s_factory_sn_label, lv_color_white(), 0);
    lv_obj_set_style_text_align(s_factory_sn_label, LV_TEXT_ALIGN_CENTER, 0);

#if defined(LV_FONT_MONTSERRAT_28) && LV_FONT_MONTSERRAT_28
    lv_obj_set_style_text_font(s_factory_sn_label, &lv_font_montserrat_28, 0);
#elif defined(LV_FONT_MONTSERRAT_24) && LV_FONT_MONTSERRAT_24
    lv_obj_set_style_text_font(s_factory_sn_label, &lv_font_montserrat_24, 0);
#elif defined(LV_FONT_MONTSERRAT_20) && LV_FONT_MONTSERRAT_20
    lv_obj_set_style_text_font(s_factory_sn_label, &lv_font_montserrat_20, 0);
#endif

    lv_obj_center(s_factory_sn_label);

    MQTT_SLIDESHOW_LOG("Factory SN lock screen shown sn=%s source=%s",
                       sn ? sn : "", source ? source : "");
}


static const char *image_ext_from_path(const char *path)
{
    const char *dot;

    if (path == NULL) return ".jpg";

    dot = strrchr(path, '.');
    if (dot == NULL) return ".jpg";

    if (strcasecmp(dot, ".jpg") == 0 || strcasecmp(dot, ".jpeg") == 0 ||
        strcasecmp(dot, ".png") == 0 || strcasecmp(dot, ".bmp") == 0) {
        return dot;
    }

    return ".jpg";
}

static int copy_file_for_lvgl_runtime(const char *src_path, char *out_lvgl_path, int out_size)
{
    FILE *in;
    FILE *out;
    char linux_path[256];
    char tmp_path[256];
    char old_path[256];
    char buf[8192];
    size_t n;
    const char *real_src;
    const char *ext;
    long total = 0;
    int seq;

    if (src_path == NULL || out_lvgl_path == NULL || out_size <= 1) {
        return -1;
    }

    real_src = src_path;
    if (strncmp(real_src, "A:", 2) == 0) {
        real_src += 2;
    }

    ext = image_ext_from_path(real_src);

    /* 每次复制到唯一 /tmp 文件名，避免 LVGL decoder/cache 按固定路径复用旧图。 */
    seq = ++s_runtime_copy_seq;
    snprintf(linux_path, sizeof(linux_path), "/tmp/mqtt_slideshow_current_%d%s", seq, ext);
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", linux_path);

    in = fopen(real_src, "rb");
    if (in == NULL) {
        MQTT_SLIDESHOW_ERR("runtime copy open src failed: %s", real_src);
        return -1;
    }

    out = fopen(tmp_path, "wb");
    if (out == NULL) {
        fclose(in);
        MQTT_SLIDESHOW_ERR("runtime copy open dst failed: %s", tmp_path);
        return -1;
    }

    while ((n = fread(buf, 1, sizeof(buf), in)) > 0) {
        if (fwrite(buf, 1, n, out) != n) {
            fclose(in);
            fclose(out);
            unlink(tmp_path);
            MQTT_SLIDESHOW_ERR("runtime copy write failed: %s", tmp_path);
            return -1;
        }
        total += (long)n;
    }

    if (ferror(in)) {
        fclose(in);
        fclose(out);
        unlink(tmp_path);
        MQTT_SLIDESHOW_ERR("runtime copy read failed: %s", real_src);
        return -1;
    }

    fflush(out);
    fsync(fileno(out));
    fclose(out);
    fclose(in);

    if (total <= 0) {
        unlink(tmp_path);
        MQTT_SLIDESHOW_ERR("runtime copy empty image: %s", real_src);
        return -1;
    }

    if (rename(tmp_path, linux_path) != 0) {
        unlink(tmp_path);
        MQTT_SLIDESHOW_ERR("runtime copy rename failed: %s -> %s", tmp_path, linux_path);
        return -1;
    }

    old_path[0] = '\0';
    if (s_runtime_image_linux_path[0] != '\0') {
        snprintf(old_path, sizeof(old_path), "%s", s_runtime_image_linux_path);
    }
    snprintf(s_runtime_image_linux_path, sizeof(s_runtime_image_linux_path), "%s", linux_path);

    /* 这里必须带 A:，否则 LVGL 文件系统识别不到。 */
    snprintf(out_lvgl_path, out_size, "A:%s", linux_path);

    if (old_path[0] != '\0' && strcmp(old_path, linux_path) != 0) {
        unlink(old_path);
    }

    MQTT_SLIDESHOW_LOG("runtime copy ok: src=%s dst=%s size=%ld", real_src, linux_path, total);
    return 0;
}
static void show_image_by_index(int index, bool save_index)
{
    mqtt_slideshow_image_list_t list;

    if (mqtt_slideshow_img == NULL) return;

    if (mqtt_slideshow_store_get_active(&list) <= 0 || list.count <= 0) {
        clear_image_obj_src();
        s_current_image_index = 0;
        return;
    }

    if (index < 0 || index >= list.count) index = 0;
    s_current_image_index = index;

    /*
     * 关键：先 set NULL，再清缓存。
     * 开机阶段直接显示 /usr/share/... 某些板子会解码/刷新异常，
     * 所以每次显示前复制到 /tmp 运行态图片，再用 A:/tmp/... 给 LVGL 显示。
     */
    clear_image_obj_src();

    {
        char runtime_lvgl_path[256];

        if (copy_file_for_lvgl_runtime(list.items[s_current_image_index].path,
                                       runtime_lvgl_path,
                                       sizeof(runtime_lvgl_path)) == 0) {
            lv_img_set_src(mqtt_slideshow_img, runtime_lvgl_path);
            lv_obj_clear_flag(mqtt_slideshow_img, LV_OBJ_FLAG_HIDDEN);
            lv_obj_center(mqtt_slideshow_img);
            lv_obj_move_foreground(mqtt_slideshow_img);
            lv_obj_invalidate(mqtt_slideshow_img);

            MQTT_SLIDESHOW_LOG("Showing runtime image %d/%d: %s -> %s obj=%dx%d",
                               s_current_image_index + 1,
                               list.count,
                               list.items[s_current_image_index].path,
                               runtime_lvgl_path,
                               (int)lv_obj_get_width(mqtt_slideshow_img),
                               (int)lv_obj_get_height(mqtt_slideshow_img));
        } else {
            /* fallback 也必须保留原来的 A: 路径。 */
            lv_img_set_src(mqtt_slideshow_img, list.items[s_current_image_index].path);
            lv_obj_clear_flag(mqtt_slideshow_img, LV_OBJ_FLAG_HIDDEN);
            lv_obj_center(mqtt_slideshow_img);
            lv_obj_move_foreground(mqtt_slideshow_img);
            lv_obj_invalidate(mqtt_slideshow_img);

            MQTT_SLIDESHOW_LOG("Showing image fallback %d/%d: %s",
                               s_current_image_index + 1,
                               list.count,
                               list.items[s_current_image_index].path);
        }
    }

    if (save_index) {
        mqtt_slideshow_store_save_index(s_current_image_index);
    }
}

static void boot_load_local_images(void)
{
    mqtt_slideshow_image_list_t list;
    int index;

    memset(&list, 0, sizeof(list));

    if (mqtt_slideshow_store_scan_local(&list) <= 0 || list.count <= 0) {
        MQTT_SLIDESHOW_LOG("Boot: no local images, waiting for MQTT");
        return;
    }

    mqtt_slideshow_store_replace_active(&list);

    index = mqtt_slideshow_store_load_index();
    if (index < 0 || index >= list.count) index = 0;

    show_image_by_index(index, false);
    MQTT_SLIDESHOW_LOG("Boot: resumed local image %d/%d", index + 1, list.count);
}

static void request_ui_reload_from_worker(void)
{
    /* 这个函数由 worker 线程调用，只投递到 LVGL 线程，不直接操作 LVGL 对象。 */
    lv_async_call(ui_reload_async_cb, NULL);
}

static void ui_reload_async_cb(void *arg)
{
    (void)arg;

    MQTT_SLIDESHOW_LOG("UI reload async begin");

    show_image_by_index(0, true);

    /* 通知 worker：LVGL 已经先 set NULL 并切到新图，可以清理非 active 图片。 */
    mqtt_slideshow_worker_notify_ui_switched();

    MQTT_SLIDESHOW_LOG("UI reload async done");
}

static void slideshow_timer_cb(lv_timer_t *timer)
{
    mqtt_slideshow_image_list_t list;
    int next;

    (void)timer;

    if (!s_started) return;

    if (mqtt_slideshow_store_get_active(&list) <= 0 || list.count <= 0) return;

    next = s_current_image_index + 1;
    if (next >= list.count) next = 0;

    show_image_by_index(next, true);
}

static void boot_reload_timer_cb(lv_timer_t *timer)
{
    (void)timer;

    if (s_boot_reload_timer != NULL) {
        lv_timer_del(s_boot_reload_timer);
        s_boot_reload_timer = NULL;
    }

    if (s_factory_lock) {
        return;
    }

    if (mqtt_slideshow_store_count() <= 0) {
        MQTT_SLIDESHOW_LOG("Boot delayed local image reload skipped: no active image");
        return;
    }

    MQTT_SLIDESHOW_LOG("Boot delayed local image reload");

    show_image_by_index(s_current_image_index, false);

    if (mqtt_slideshow_img != NULL) {
        lv_obj_clear_flag(mqtt_slideshow_img, LV_OBJ_FLAG_HIDDEN);
        lv_obj_invalidate(mqtt_slideshow_img);
    }

    if (mqtt_slideshow_activity != NULL) {
        lv_obj_invalidate(mqtt_slideshow_activity);
    }
}

void lv_pro_mqtt_slideshow_show_next(void)
{
    mqtt_slideshow_image_list_t list;
    int next;

    if (mqtt_slideshow_store_get_active(&list) <= 0 || list.count <= 0) return;

    next = s_current_image_index + 1;
    if (next >= list.count) next = 0;

    show_image_by_index(next, true);
}

void lv_pro_mqtt_slideshow_ui_init(void)
{
    if (s_inited) return;

    setvbuf(stdout, NULL, _IOLBF, 0);
    setvbuf(stderr, NULL, _IOLBF, 0);

    signal(SIGSEGV, signal_handler);
    signal(SIGABRT, signal_handler);
    signal(SIGFPE,  signal_handler);
    signal(SIGILL,  signal_handler);
    signal(SIGBUS,  signal_handler);

    if (mqtt_slideshow_store_init() != 0) {
        MQTT_SLIDESHOW_ERR("store init failed");
    }

    if (mqtt_slideshow_http_init() != 0) {
        MQTT_SLIDESHOW_ERR("http init failed");
    }

    mqtt_slideshow_activity = lv_obj_create(lv_scr_act());
    lv_obj_set_size(mqtt_slideshow_activity, LV_HOR_RES, LV_VER_RES);
    lv_obj_set_style_bg_color(mqtt_slideshow_activity, lv_color_white(), 0);
    lv_obj_clear_flag(mqtt_slideshow_activity, LV_OBJ_FLAG_SCROLLABLE);

    mqtt_slideshow_img = lv_img_create(mqtt_slideshow_activity);
    lv_obj_center(mqtt_slideshow_img);
    lv_obj_set_style_img_recolor_opa(mqtt_slideshow_img, 0, 0);

    mqtt_slideshow_group = lv_group_create();

    {
        char factory_sn[64];
        char factory_source[256];

        if (mqtt_slideshow_factory_sn_take(factory_sn, sizeof(factory_sn),
                                           factory_source, sizeof(factory_source)) == 0) {
            show_factory_sn_lock_screen(factory_sn, factory_source);
            s_inited = true;
            MQTT_SLIDESHOW_LOG("UI initialized in factory SN lock mode");
            return;
        }
    }

    boot_load_local_images();

    s_slideshow_timer = lv_timer_create(slideshow_timer_cb, MQTT_SLIDESHOW_INTERVAL_MS, NULL);
    if (s_slideshow_timer != NULL) {
        lv_timer_pause(s_slideshow_timer);
    }

    s_inited = true;
    MQTT_SLIDESHOW_LOG("UI initialized");
}

void lv_pro_mqtt_slideshow_start(void)
{
    if (!s_inited) {
        lv_pro_mqtt_slideshow_ui_init();
    }

    if (s_factory_lock) {
        MQTT_SLIDESHOW_LOG("Factory SN lock mode: skip worker/mqtt/slideshow. Please reboot after recording SN.");
        return;
    }

    if (s_started) return;

    if (mqtt_slideshow_worker_start(request_ui_reload_from_worker) != 0) {
        MQTT_SLIDESHOW_ERR("worker start failed");
        return;
    }

    if (mqtt_slideshow_mqtt_start() != 0) {
        MQTT_SLIDESHOW_ERR("mqtt start failed");
        mqtt_slideshow_worker_stop();
        return;
    }

    s_started = true;

    if (s_slideshow_timer != NULL) {
        lv_timer_resume(s_slideshow_timer);
    }

    /*
     * Boot-time local image reload.
     * Some boards create the UI before the first real LVGL refresh cycle.
     * Reload once after the main LVGL loop starts, matching the MQTT async reload path.
     */
    if (s_boot_reload_timer == NULL && mqtt_slideshow_store_count() > 0) {
        s_boot_reload_timer = lv_timer_create(boot_reload_timer_cb, 800, NULL);
        if (s_boot_reload_timer == NULL) {
            MQTT_SLIDESHOW_ERR("create boot reload timer failed");
        }
    }

    MQTT_SLIDESHOW_LOG("Slideshow started");
}

void lv_pro_mqtt_slideshow_stop(void)
{
    if (!s_started) return;

    s_started = false;

    if (s_slideshow_timer != NULL) {
        lv_timer_pause(s_slideshow_timer);
    }

    if (s_boot_reload_timer != NULL) {
        lv_timer_del(s_boot_reload_timer);
        s_boot_reload_timer = NULL;
    }

    mqtt_slideshow_mqtt_stop();
    mqtt_slideshow_worker_stop();

    MQTT_SLIDESHOW_LOG("Slideshow stopped");
}

void lv_pro_mqtt_slideshow_exit(void)
{
    lv_pro_mqtt_slideshow_stop();

    if (s_slideshow_timer != NULL) {
        lv_timer_del(s_slideshow_timer);
        s_slideshow_timer = NULL;
    }

    if (s_boot_reload_timer != NULL) {
        lv_timer_del(s_boot_reload_timer);
        s_boot_reload_timer = NULL;
    }

    clear_image_obj_src();

    if (s_runtime_image_linux_path[0] != '\0') {
        unlink(s_runtime_image_linux_path);
        s_runtime_image_linux_path[0] = '\0';
    }

    if (mqtt_slideshow_activity != NULL) {
        lv_obj_del(mqtt_slideshow_activity);
        mqtt_slideshow_activity = NULL;
        mqtt_slideshow_img = NULL;
    }

    if (mqtt_slideshow_group != NULL) {
        lv_group_del(mqtt_slideshow_group);
        mqtt_slideshow_group = NULL;
    }

    mqtt_slideshow_store_deinit();
    mqtt_slideshow_http_deinit();

    s_inited = false;
    s_factory_lock = false;
    s_factory_sn_label = NULL;
    MQTT_SLIDESHOW_LOG("Slideshow exited");
}
