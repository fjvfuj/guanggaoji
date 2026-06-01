#ifndef LV_PRO_MQTT_SLIDESHOW_STORE_H
#define LV_PRO_MQTT_SLIDESHOW_STORE_H

#include <stdbool.h>
#include "lv_pro_mqtt_slideshow_config.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char path[MQTT_SLIDESHOW_MAX_URL_LEN];  /* LVGL path, e.g. A:/root/mqtt_images/xxx.jpg */
} mqtt_slideshow_image_t;

typedef struct {
    mqtt_slideshow_image_t items[MQTT_SLIDESHOW_MAX_IMAGES];
    int count;
} mqtt_slideshow_image_list_t;

int mqtt_slideshow_store_init(void);
void mqtt_slideshow_store_deinit(void);

int mqtt_slideshow_store_scan_local(mqtt_slideshow_image_list_t *out);
int mqtt_slideshow_store_replace_active(const mqtt_slideshow_image_list_t *list);
int mqtt_slideshow_store_get_active(mqtt_slideshow_image_list_t *out);
int mqtt_slideshow_store_count(void);

int mqtt_slideshow_store_load_index(void);
void mqtt_slideshow_store_save_index(int index);

bool mqtt_slideshow_store_is_valid_image_name(const char *name);
void mqtt_slideshow_store_cleanup_inactive(void);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_STORE_H */
