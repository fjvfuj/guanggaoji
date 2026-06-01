#ifndef LV_PRO_MQTT_SLIDESHOW_MQTT_H
#define LV_PRO_MQTT_SLIDESHOW_MQTT_H

#ifdef __cplusplus
extern "C" {
#endif

int mqtt_slideshow_mqtt_start(void);
void mqtt_slideshow_mqtt_stop(void);
int mqtt_slideshow_mqtt_is_running(void);
const char *mqtt_slideshow_mqtt_device_sn(void);
int mqtt_slideshow_mqtt_publish_error_log(const char *error_msg);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_MQTT_H */
