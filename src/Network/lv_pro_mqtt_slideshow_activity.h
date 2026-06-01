#ifndef LV_PRO_MQTT_SLIDESHOW_ACTIVITY_H
#define LV_PRO_MQTT_SLIDESHOW_ACTIVITY_H

#include "lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

extern lv_obj_t *mqtt_slideshow_activity;
extern lv_obj_t *mqtt_slideshow_img;
extern lv_group_t *mqtt_slideshow_group;

void lv_pro_mqtt_slideshow_ui_init(void);
void lv_pro_mqtt_slideshow_start(void);
void lv_pro_mqtt_slideshow_stop(void);
void lv_pro_mqtt_slideshow_exit(void);

/* 可选：外部页面想手动切换到下一张时使用 */
void lv_pro_mqtt_slideshow_show_next(void);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_ACTIVITY_H */
