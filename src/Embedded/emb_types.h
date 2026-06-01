#ifndef EMB_TYPES_H
#define EMB_TYPES_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define EMB_VERSION "0.1.0"

typedef enum {
    EMB_OK = 0,
    EMB_ERR_INVALID_PARAM = -1,
    EMB_ERR_NOT_READY = -2,
    EMB_ERR_TIMEOUT = -3,
    EMB_ERR_NOT_FOUND = -4,
    EMB_ERR_BUSY = -5,
    EMB_ERR_FAILED = -6,
    EMB_ERR_UNSUPPORTED = -7
} emb_result_t;

typedef enum {
    EMB_EVENT_NONE = 0,
    EMB_EVENT_NET_CHANGED,
    EMB_EVENT_WIFI_SCAN_DONE,
    EMB_EVENT_P2P_CHANGED,
    EMB_EVENT_CAST_CHANGED,
    EMB_EVENT_SOURCE_CHANGED,
    EMB_EVENT_STORAGE_CHANGED,
    EMB_EVENT_PHOTO_CHANGED,
    EMB_EVENT_VIDEO_CHANGED,
    EMB_EVENT_AUDIO_CHANGED,
    EMB_EVENT_BRIGHTNESS_CHANGED,
    EMB_EVENT_TIME_CHANGED,
    EMB_EVENT_WEATHER_UPDATED,
    EMB_EVENT_UPDATE_PROGRESS,
    EMB_EVENT_REMOTE_CHANGED,
    EMB_EVENT_ERROR
} emb_event_t;

typedef enum {
    EMB_KEY_UP = 0,
    EMB_KEY_DOWN,
    EMB_KEY_LEFT,
    EMB_KEY_RIGHT,
    EMB_KEY_OK,
    EMB_KEY_BACK,
    EMB_KEY_MENU,
    EMB_KEY_VOLUME_UP,
    EMB_KEY_VOLUME_DOWN,
    EMB_KEY_POWER
} emb_key_t;

typedef enum {
    EMB_NET_NONE = 0,
    EMB_NET_ETHERNET,
    EMB_NET_WIFI,
    EMB_NET_P2P
} emb_net_type_t;

typedef enum {
    EMB_SOURCE_NONE = 0,
    EMB_SOURCE_HDMI,
    EMB_SOURCE_USB,
    EMB_SOURCE_TF
} emb_source_t;

typedef enum {
    EMB_MEDIA_PHOTO = 0,
    EMB_MEDIA_VIDEO,
    EMB_MEDIA_MUSIC,
    EMB_MEDIA_ALL
} emb_media_type_t;

typedef enum {
    EMB_CAST_NONE = 0,
    EMB_CAST_PHONE,
    EMB_CAST_PC,
    EMB_CAST_MIRACAST,
    EMB_CAST_AIRPLAY,
    EMB_CAST_DLNA,
    EMB_CAST_USB
} emb_cast_mode_t;

typedef enum {
    EMB_SCALE_FULL = 0,
    EMB_SCALE_KEEP_RATIO
} emb_scale_mode_t;

typedef struct {
    char product[64];
    char board[64];
    char chip[64];
    char software_version[64];
    char build_time[64];
    char device_sn[128];
    char mac_eth[32];
    char mac_wifi[32];
} emb_device_info_t;

typedef struct {
    int volume;
    int muted;
    int output_mode;
} emb_audio_status_t;

typedef struct {
    int width;
    int height;
    int brightness;
    emb_scale_mode_t scale_mode;
} emb_display_status_t;

typedef struct {
    emb_source_t current;
    int hdmi_connected;
    int usb_inserted;
    int tf_inserted;
    char hdmi_resolution[32];
} emb_source_status_t;

typedef struct {
    char path[256];
    char name[128];
    emb_media_type_t type;
    long long size;
} emb_media_file_t;

typedef struct {
    int total;
    int index;
    int playing;
    int interval_ms;
    char current_path[256];
    char current_name[128];
} emb_photo_status_t;

typedef struct {
    int total;
    int index;
    int playing;
    int duration_ms;
    int position_ms;
    int volume;
    char current_path[256];
    char current_name[128];
    char error[128];
} emb_video_status_t;

typedef struct {
    emb_net_type_t type;
    int connected;
    char iface[16];
    char ssid[64];
    char ip[32];
    char gateway[32];
    char mac[32];
    int signal;
    int internet_ok;
    int server_ok;
} emb_network_status_t;

typedef struct {
    int running;
    int connected;
    emb_cast_mode_t mode;
    char device_name[64];
    char peer_name[64];
    char error[128];
} emb_cast_status_t;

typedef struct {
    int mqtt_connected;
    int template_ready;
    int downloading;
    int download_percent;
    char last_error[128];
} emb_remote_status_t;

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int weekday;
    int ntp_synced;
    int rtc_ok;
    char timezone[32];
} emb_time_info_t;

typedef struct {
    char city[64];
    char weather[64];
    int temperature;
    int temp_low;
    int temp_high;
    int humidity;
    char update_time[32];
    int from_cache;
} emb_weather_info_t;

typedef struct {
    char current_version[64];
    char latest_version[64];
    int has_update;
    char release_note[256];
} emb_update_info_t;

typedef struct {
    int running;
    int percent;
    char stage[64];
    char error[128];
} emb_update_status_t;

#ifdef __cplusplus
}
#endif

#endif
