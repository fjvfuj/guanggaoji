#include "lv_pro_mqtt_slideshow_worker.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/time.h>
#include <ctype.h>

#include "lv_pro_mqtt_slideshow_config.h"
#include "lv_pro_mqtt_slideshow_http.h"
#include "lv_pro_mqtt_slideshow_store.h"

static pthread_t s_worker_thread;
static pthread_mutex_t s_worker_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t s_worker_cond = PTHREAD_COND_INITIALIZER;
static pthread_cond_t s_ui_switched_cond = PTHREAD_COND_INITIALIZER;

static bool s_worker_running = false;
static bool s_worker_started = false;
static bool s_has_pending = false;
static bool s_ui_switched = false;
static char s_pending_template[MQTT_SLIDESHOW_MAX_TEMPLATE_PAYLOAD];
static mqtt_slideshow_worker_ui_notify_cb_t s_ui_notify_cb = NULL;

static long long now_ms(void)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (long long)tv.tv_sec * 1000LL + (long long)tv.tv_usec / 1000LL;
}

static const char *safe_ext_from_url(const char *url)
{
    const char *q;
    const char *slash;
    const char *dot;
    static char ext[8];
    size_t n;

    if (url == NULL) return ".jpg";

    q = strchr(url, '?');
    slash = strrchr(url, '/');
    dot = strrchr(slash ? slash : url, '.');

    if (dot == NULL) return ".jpg";
    if (q != NULL && dot > q) return ".jpg";

    n = q ? (size_t)(q - dot) : strlen(dot);
    if (n < 4 || n >= sizeof(ext)) return ".jpg";

    snprintf(ext, sizeof(ext), "%.*s", (int)n, dot);

    for (n = 0; ext[n]; n++) ext[n] = (char)tolower((unsigned char)ext[n]);

    if (strcmp(ext, ".jpg") == 0 || strcmp(ext, ".png") == 0 ||
        strcmp(ext, ".bmp") == 0 || strcmp(ext, ".jpeg") == 0) {
        return ext;
    }

    return ".jpg";
}

static int download_images_to_store(const char urls[][MQTT_SLIDESHOW_MAX_URL_LEN], int url_count)
{
    mqtt_slideshow_image_list_t list;
    long long base;
    int i;

    memset(&list, 0, sizeof(list));
    base = now_ms();

    for (i = 0; i < url_count && list.count < MQTT_SLIDESHOW_MAX_IMAGES; i++) {
        char filename[MQTT_SLIDESHOW_MAX_URL_LEN];
        const char *ext = safe_ext_from_url(urls[i]);

        snprintf(filename, sizeof(filename), "%smqtt_%lld_%02d%s", IMAGE_DIR, base, i, ext);

        MQTT_SLIDESHOW_LOG("Downloading image %d/%d: %s", i + 1, url_count, urls[i]);

        if (mqtt_slideshow_http_download_file(urls[i], filename) == 0) {
            snprintf(list.items[list.count].path,
                     sizeof(list.items[list.count].path),
                     "A:%s", filename);
            list.count++;
        }
    }

    if (list.count <= 0) {
        MQTT_SLIDESHOW_ERR("all image downloads failed");
        return -1;
    }

    mqtt_slideshow_store_replace_active(&list);
    mqtt_slideshow_store_save_index(0);

    MQTT_SLIDESHOW_LOG("New active images committed, count=%d", list.count);
    return 0;
}

static void wait_ui_switched_or_timeout(void)
{
    struct timespec ts;

    clock_gettime(CLOCK_REALTIME, &ts);
    ts.tv_sec += MQTT_SLIDESHOW_WORKER_WAIT_UI_SWITCH_MS / 1000;
    ts.tv_nsec += (long)(MQTT_SLIDESHOW_WORKER_WAIT_UI_SWITCH_MS % 1000) * 1000000L;
    if (ts.tv_nsec >= 1000000000L) {
        ts.tv_sec++;
        ts.tv_nsec -= 1000000000L;
    }

    pthread_mutex_lock(&s_worker_lock);
    while (s_worker_running && !s_ui_switched) {
        if (pthread_cond_timedwait(&s_ui_switched_cond, &s_worker_lock, &ts) != 0) break;
    }
    s_ui_switched = false;
    pthread_mutex_unlock(&s_worker_lock);
}

static void process_one_template(const char *payload)
{
    char urls[MQTT_SLIDESHOW_MAX_IMAGES][MQTT_SLIDESHOW_MAX_URL_LEN];
    int url_count = 0;

    if (payload == NULL || payload[0] == '\0') return;

    MQTT_SLIDESHOW_LOG("Worker processing template payload: %s", payload);

    if (mqtt_slideshow_http_collect_image_urls(payload, urls, &url_count) != 0) {
        MQTT_SLIDESHOW_ERR("collect image urls failed, payload=%s", payload);
        return;
    }

    pthread_mutex_lock(&s_worker_lock);
    s_ui_switched = false;
    pthread_mutex_unlock(&s_worker_lock);

    if (download_images_to_store((const char (*)[MQTT_SLIDESHOW_MAX_URL_LEN])urls, url_count) != 0) {
        return;
    }

    if (s_ui_notify_cb != NULL) {
        s_ui_notify_cb();
    }

    wait_ui_switched_or_timeout();
    mqtt_slideshow_store_cleanup_inactive();
}

static void *worker_thread_main(void *arg)
{
    (void)arg;

    while (1) {
        char payload[MQTT_SLIDESHOW_MAX_TEMPLATE_PAYLOAD];

        pthread_mutex_lock(&s_worker_lock);
        while (s_worker_running && !s_has_pending) {
            pthread_cond_wait(&s_worker_cond, &s_worker_lock);
        }

        if (!s_worker_running) {
            pthread_mutex_unlock(&s_worker_lock);
            break;
        }

        snprintf(payload, sizeof(payload), "%s", s_pending_template);
        s_has_pending = false;
        pthread_mutex_unlock(&s_worker_lock);

        process_one_template(payload);
    }

    return NULL;
}

int mqtt_slideshow_worker_start(mqtt_slideshow_worker_ui_notify_cb_t ui_notify_cb)
{
    if (s_worker_started) return 0;

    s_ui_notify_cb = ui_notify_cb;
    s_worker_running = true;
    s_has_pending = false;
    s_ui_switched = false;
    s_pending_template[0] = '\0';

    if (pthread_create(&s_worker_thread, NULL, worker_thread_main, NULL) != 0) {
        s_worker_running = false;
        return -1;
    }

    s_worker_started = true;
    return 0;
}

void mqtt_slideshow_worker_stop(void)
{
    if (!s_worker_started) return;

    pthread_mutex_lock(&s_worker_lock);
    s_worker_running = false;
    s_has_pending = false;
    pthread_cond_broadcast(&s_worker_cond);
    pthread_cond_broadcast(&s_ui_switched_cond);
    pthread_mutex_unlock(&s_worker_lock);

    pthread_join(s_worker_thread, NULL);
    s_worker_started = false;
}

int mqtt_slideshow_worker_post_template(const char *template_payload)
{
    if (template_payload == NULL || template_payload[0] == '\0') return -1;

    pthread_mutex_lock(&s_worker_lock);
    if (!s_worker_running) {
        pthread_mutex_unlock(&s_worker_lock);
        return -2;
    }

    snprintf(s_pending_template, sizeof(s_pending_template), "%s", template_payload);
    s_has_pending = true;
    pthread_cond_signal(&s_worker_cond);
    pthread_mutex_unlock(&s_worker_lock);

    return 0;
}

void mqtt_slideshow_worker_notify_ui_switched(void)
{
    pthread_mutex_lock(&s_worker_lock);
    s_ui_switched = true;
    pthread_cond_broadcast(&s_ui_switched_cond);
    pthread_mutex_unlock(&s_worker_lock);
}
