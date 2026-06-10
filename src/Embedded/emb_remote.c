#include "emb_remote.h"

#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

static emb_remote_status_t emb_remote_status;
static char emb_remote_last_photo_dir[256];

static int is_supported_image_name(const char *name)
{
    const char *ext;

    if (name == NULL || name[0] == '\0') return 0;
    if (name[0] == '.') return 0;

    ext = strrchr(name, '.');
    if (ext == NULL) return 0;

    return strcasecmp(ext, ".jpg") == 0 ||
           strcasecmp(ext, ".jpeg") == 0 ||
           strcasecmp(ext, ".png") == 0 ||
           strcasecmp(ext, ".bmp") == 0;
}

static int dir_has_supported_image(const char *dir)
{
    DIR *dp;
    struct dirent *entry;
    int checked = 0;

    if (dir == NULL || dir[0] == '\0') return 0;

    dp = opendir(dir);
    if (dp == NULL) return 0;

    while ((entry = readdir(dp)) != NULL && checked < 512) {
        checked++;
        if (is_supported_image_name(entry->d_name)) {
            closedir(dp);
            return 1;
        }
    }

    closedir(dp);
    return 0;
}

emb_result_t emb_remote_start(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_remote_stop(void)
{
    memset(&emb_remote_status, 0, sizeof(emb_remote_status));
    return EMB_OK;
}

emb_result_t emb_remote_force_refresh(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_remote_get_status(emb_remote_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_remote_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_remote_select_photo_dir(char *out_dir, size_t out_size)
{
    const char *selected = NULL;

    if (out_dir == NULL || out_size == 0) return EMB_ERR_INVALID_PARAM;

    if (dir_has_supported_image(EMB_REMOTE_MQTT_IMAGE_DIR)) {
        selected = EMB_REMOTE_MQTT_IMAGE_DIR;
        emb_remote_status.template_ready = 1;
    } else if (dir_has_supported_image(EMB_REMOTE_SD_IMAGE_DIR)) {
        selected = EMB_REMOTE_SD_IMAGE_DIR;
        emb_remote_status.template_ready = 0;
    } else if (dir_has_supported_image(EMB_REMOTE_DEFAULT_IMAGE_DIR)) {
        selected = EMB_REMOTE_DEFAULT_IMAGE_DIR;
        emb_remote_status.template_ready = 0;
    } else {
        out_dir[0] = '\0';
        emb_remote_status.template_ready = 0;
        snprintf(emb_remote_status.last_error, sizeof(emb_remote_status.last_error),
                 "no local photo media");
        return EMB_ERR_NOT_FOUND;
    }

    snprintf(out_dir, out_size, "%s", selected);
    emb_remote_status.last_error[0] = '\0';

    if (strcmp(selected, emb_remote_last_photo_dir) != 0) {
        snprintf(emb_remote_last_photo_dir, sizeof(emb_remote_last_photo_dir), "%s", selected);
        printf("[Embedded] photo media source: %s\n", selected);
    }

    return EMB_OK;
}

const char *emb_remote_get_default_image_dir(void)
{
    return EMB_REMOTE_DEFAULT_IMAGE_DIR;
}

const char *emb_remote_get_default_video_dir(void)
{
    return EMB_REMOTE_DEFAULT_VIDEO_DIR;
}

const char *emb_remote_get_mqtt_image_dir(void)
{
    return EMB_REMOTE_MQTT_IMAGE_DIR;
}

const char *emb_remote_get_mqtt_video_dir(void)
{
    return EMB_REMOTE_MQTT_VIDEO_DIR;
}

const char *emb_remote_get_sd_image_dir(void)
{
    return EMB_REMOTE_SD_IMAGE_DIR;
}

const char *emb_remote_get_sd_video_dir(void)
{
    return EMB_REMOTE_SD_VIDEO_DIR;
}
