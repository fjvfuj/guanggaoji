#ifndef LV_PRO_MQTT_SLIDESHOW_CONFIG_H
#define LV_PRO_MQTT_SLIDESHOW_CONFIG_H

/*
 * MQTT slideshow configuration.
 * If you do not want account info in code, move these macros to Makefile -Dxxx.
 */

#ifndef MQTT_NET_AUTO_DHCP
#define MQTT_NET_AUTO_DHCP 1
#endif

#ifndef MQTT_NET_IFACE
#define MQTT_NET_IFACE "eth0"
#endif

#ifndef MQTT_NET_WAIT_READY_SECONDS
#define MQTT_NET_WAIT_READY_SECONDS -1
#endif


#ifndef MQTT_BROKER_TCP
#define MQTT_BROKER_TCP "tcp://112.74.32.81:1883"
#endif

#ifndef MQTT_USERNAME
#define MQTT_USERNAME "djy@2025"
#endif

#ifndef MQTT_PASSWORD
#define MQTT_PASSWORD "djy@2025mqtt"
#endif

#ifndef MQTT_DEFAULT_DEVICE_SN
#define MQTT_DEFAULT_DEVICE_SN "58000c6e040148e23cb"
#endif

/* Production SN file: one line only, e.g. 58000c6e040148e23cb */
#ifndef MQTT_DEVICE_SN_FILE
#define MQTT_DEVICE_SN_FILE "/usr/share/lv_projector/device_sn"
#endif

#ifndef MQTT_DEVICE_SN_FILE_FALLBACK1
#define MQTT_DEVICE_SN_FILE_FALLBACK1 "/data/device_sn"
#endif

#ifndef MQTT_DEVICE_SN_FILE_FALLBACK2
#define MQTT_DEVICE_SN_FILE_FALLBACK2 "/etc/device_sn"
#endif

#ifndef MQTT_CLIENT_ID_TEMPLATE
#define MQTT_CLIENT_ID_TEMPLATE "dev_%s"
#endif

#ifndef MQTT_SUBSCRIBE_QOS
#define MQTT_SUBSCRIBE_QOS 0
#endif

#ifndef MQTT_TOPIC_PREFIX
#define MQTT_TOPIC_PREFIX "update_device_template"
#endif

#ifndef MQTT_HEARTBEAT_TOPIC
#define MQTT_HEARTBEAT_TOPIC "device_heartbeat"
#endif

#ifndef MQTT_HEARTBEAT_QOS
#define MQTT_HEARTBEAT_QOS 1
#endif

#ifndef MQTT_LOG_ERROR_TOPIC
#define MQTT_LOG_ERROR_TOPIC "log_error"
#endif

#ifndef MQTT_LOG_ERROR_QOS
#define MQTT_LOG_ERROR_QOS 1
#endif

#ifndef HTTP_TEMPLATE_URL
#define HTTP_TEMPLATE_URL "http://112.74.32.81:30008/template/%s"
#endif

#ifndef IMAGE_DIR
#define IMAGE_DIR "/usr/share/lv_projector/mqtt_images/"
#endif

#ifndef MQTT_VIDEO_DIR
#define MQTT_VIDEO_DIR "/usr/share/lv_projector/mqtt_videos/"
#endif

#ifndef DEFAULT_MEDIA_IMAGE_DIR
#define DEFAULT_MEDIA_IMAGE_DIR "/usr/share/lv_projector/default_media/images/"
#endif

#ifndef DEFAULT_MEDIA_VIDEO_DIR
#define DEFAULT_MEDIA_VIDEO_DIR "/usr/share/lv_projector/default_media/videos/"
#endif

#ifndef STATE_FILE
#define STATE_FILE "/usr/share/lv_projector/mqtt_images/slideshow_state.txt"
#endif


/*
 * Factory SN mode.
 * Search order:
 *   1. /tmp/USB0/factory_sn/sn_list.txt
 *   2. /tmp/USB1/factory_sn/sn_list.txt
 *   3. /mnt/SDCARD/factory_sn/sn_list.txt
 *   4. /usr/share/factory_sn/sn_list.txt
 * If a SN is taken, slideshow/MQTT are skipped and the SN is shown on screen.
 */
#ifndef MQTT_FACTORY_SN_ENABLE
#define MQTT_FACTORY_SN_ENABLE 1
#endif

#ifndef MQTT_FACTORY_SN_USB0_FILE
#define MQTT_FACTORY_SN_USB0_FILE "/tmp/USB0/factory_sn/sn_list.txt"
#endif

#ifndef MQTT_FACTORY_SN_USB1_FILE
#define MQTT_FACTORY_SN_USB1_FILE "/tmp/USB1/factory_sn/sn_list.txt"
#endif

#ifndef MQTT_FACTORY_SN_SDCARD_FILE
#define MQTT_FACTORY_SN_SDCARD_FILE "/mnt/SDCARD/factory_sn/sn_list.txt"
#endif

#ifndef MQTT_FACTORY_SN_LOCAL_FILE
#define MQTT_FACTORY_SN_LOCAL_FILE "/usr/share/factory_sn/sn_list.txt"
#endif

/* SN taken from factory_sn/sn_list.txt is permanently bound here before the source line is deleted. */
#ifndef MQTT_FACTORY_SN_BIND_FILE
#define MQTT_FACTORY_SN_BIND_FILE MQTT_DEVICE_SN_FILE
#endif

#ifndef MQTT_FACTORY_SN_SCAN_WAIT_MS
#define MQTT_FACTORY_SN_SCAN_WAIT_MS 5000
#endif

#ifndef MQTT_FACTORY_SN_SCAN_INTERVAL_MS
#define MQTT_FACTORY_SN_SCAN_INTERVAL_MS 200
#endif

#ifndef LOG_FILE_PATH
#define LOG_FILE_PATH "/tmp/lv_projector.log"
#endif

#ifndef MAX_LOG_SIZE
#define MAX_LOG_SIZE 10240
#endif

#ifndef MQTT_SLIDESHOW_MAX_IMAGES
#define MQTT_SLIDESHOW_MAX_IMAGES 10
#endif

#ifndef MQTT_SLIDESHOW_MAX_TEMPLATE_PAYLOAD
#define MQTT_SLIDESHOW_MAX_TEMPLATE_PAYLOAD 256
#endif

#ifndef MQTT_SLIDESHOW_MAX_URL_LEN
#define MQTT_SLIDESHOW_MAX_URL_LEN 512
#endif

#ifndef MQTT_SLIDESHOW_INTERVAL_MS
#define MQTT_SLIDESHOW_INTERVAL_MS 3000
#endif

#ifndef MQTT_KEEPALIVE_SECONDS
#define MQTT_KEEPALIVE_SECONDS 30
#endif

#ifndef MQTT_APP_HEARTBEAT_SECONDS
#define MQTT_APP_HEARTBEAT_SECONDS 30
#endif

#ifndef MQTT_RECONNECT_MIN_SECONDS
#define MQTT_RECONNECT_MIN_SECONDS 1
#endif

#ifndef MQTT_RECONNECT_MAX_SECONDS
#define MQTT_RECONNECT_MAX_SECONDS 30
#endif

#ifndef HTTP_TEMPLATE_TIMEOUT_SECONDS
#define HTTP_TEMPLATE_TIMEOUT_SECONDS 10L
#endif

#ifndef HTTP_IMAGE_TIMEOUT_SECONDS
#define HTTP_IMAGE_TIMEOUT_SECONDS 20L
#endif

#ifndef MQTT_SLIDESHOW_WORKER_WAIT_UI_SWITCH_MS
#define MQTT_SLIDESHOW_WORKER_WAIT_UI_SWITCH_MS 5000
#endif

#define MQTT_SLIDESHOW_LOG(fmt, ...) \
    do { printf("[MQTT Slideshow] " fmt "\n", ##__VA_ARGS__); fflush(stdout); } while (0)

#define MQTT_SLIDESHOW_ERR(fmt, ...) \
    do { fprintf(stderr, "[MQTT Slideshow][ERR] " fmt "\n", ##__VA_ARGS__); fflush(stderr); } while (0)

#endif /* LV_PRO_MQTT_SLIDESHOW_CONFIG_H */
