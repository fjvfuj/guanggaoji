#ifndef LV_PRO_MQTT_SLIDESHOW_WORKER_H
#define LV_PRO_MQTT_SLIDESHOW_WORKER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*mqtt_slideshow_worker_ui_notify_cb_t)(void);

int mqtt_slideshow_worker_start(mqtt_slideshow_worker_ui_notify_cb_t ui_notify_cb);
void mqtt_slideshow_worker_stop(void);

/* MQTT 回调只调用这个函数：复制 payload + 唤醒 worker，不做 HTTP，不碰 LVGL。 */
int mqtt_slideshow_worker_post_template(const char *template_payload);

/* LVGL 异步刷新完成后调用，用来通知 worker 可以清理旧图片文件。 */
void mqtt_slideshow_worker_notify_ui_switched(void);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_WORKER_H */
