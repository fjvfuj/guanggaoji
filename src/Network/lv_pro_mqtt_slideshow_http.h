#ifndef LV_PRO_MQTT_SLIDESHOW_HTTP_H
#define LV_PRO_MQTT_SLIDESHOW_HTTP_H

#include "lv_pro_mqtt_slideshow_config.h"

#ifdef __cplusplus
extern "C" {
#endif

int mqtt_slideshow_http_init(void);
void mqtt_slideshow_http_deinit(void);

int mqtt_slideshow_http_collect_image_urls(const char *template_payload,
                                           char urls[][MQTT_SLIDESHOW_MAX_URL_LEN],
                                           int *url_count);

int mqtt_slideshow_http_download_file(const char *url, const char *filename);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_HTTP_H */
