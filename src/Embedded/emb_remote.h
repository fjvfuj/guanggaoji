#ifndef EMB_REMOTE_H
#define EMB_REMOTE_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define EMB_REMOTE_MQTT_IMAGE_DIR "/usr/share/lv_projector/mqtt_images"
#define EMB_REMOTE_MQTT_VIDEO_DIR "/usr/share/lv_projector/mqtt_videos"
#define EMB_REMOTE_DEFAULT_IMAGE_DIR "/usr/share/lv_projector/default_media/images"
#define EMB_REMOTE_DEFAULT_VIDEO_DIR "/usr/share/lv_projector/default_media/videos"

emb_result_t emb_remote_start(void);
emb_result_t emb_remote_stop(void);
emb_result_t emb_remote_force_refresh(void);
emb_result_t emb_remote_get_status(emb_remote_status_t *status);
emb_result_t emb_remote_select_photo_dir(char *out_dir, size_t out_size);
const char *emb_remote_get_default_image_dir(void);
const char *emb_remote_get_default_video_dir(void);
const char *emb_remote_get_mqtt_image_dir(void);
const char *emb_remote_get_mqtt_video_dir(void);

#ifdef __cplusplus
}
#endif

#endif
