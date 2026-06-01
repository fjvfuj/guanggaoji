#include "emb_photo.h"
#include "emb_event.h"

#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define EMB_PHOTO_MAX_LOCAL_FILES 256

static emb_photo_status_t emb_photo_status = {
    .interval_ms = 3000,
};

static char emb_photo_dir[256];
static char emb_photo_names[EMB_PHOTO_MAX_LOCAL_FILES][128];

static int emb_photo_is_supported(const char *name)
{
    const char *ext;

    if (name == NULL) return 0;
    ext = strrchr(name, '.');
    if (ext == NULL) return 0;
    ext++;

    return strcasecmp(ext, "jpg") == 0 || strcasecmp(ext, "jpeg") == 0 ||
           strcasecmp(ext, "png") == 0 || strcasecmp(ext, "bmp") == 0;
}

static void emb_photo_update_current(void)
{
    if (emb_photo_status.total <= 0 ||
        emb_photo_status.index < 0 ||
        emb_photo_status.index >= emb_photo_status.total) {
        emb_photo_status.current_path[0] = '\0';
        emb_photo_status.current_name[0] = '\0';
        return;
    }

    snprintf(emb_photo_status.current_name, sizeof(emb_photo_status.current_name),
             "%s", emb_photo_names[emb_photo_status.index]);
    snprintf(emb_photo_status.current_path, sizeof(emb_photo_status.current_path),
             "%s/%s", emb_photo_dir, emb_photo_names[emb_photo_status.index]);
}

emb_result_t emb_photo_load_dir(const char *dir)
{
    DIR *dp;
    struct dirent *entry;
    int checked = 0;

    if (dir == NULL || dir[0] == '\0') return EMB_ERR_INVALID_PARAM;

    dp = opendir(dir);
    if (dp == NULL) return EMB_ERR_NOT_FOUND;

    snprintf(emb_photo_dir, sizeof(emb_photo_dir), "%s", dir);
    emb_photo_status.total = 0;
    emb_photo_status.index = 0;
    emb_photo_status.playing = 0;
    emb_photo_status.current_path[0] = '\0';
    emb_photo_status.current_name[0] = '\0';

    while ((entry = readdir(dp)) != NULL &&
           emb_photo_status.total < EMB_PHOTO_MAX_LOCAL_FILES &&
           checked < 512) {
        checked++;

        if (entry->d_name[0] == '.') continue;
        if (!emb_photo_is_supported(entry->d_name)) continue;

        snprintf(emb_photo_names[emb_photo_status.total],
                 sizeof(emb_photo_names[emb_photo_status.total]),
                 "%s", entry->d_name);
        emb_photo_status.total++;
    }

    closedir(dp);
    emb_photo_update_current();
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);

    return emb_photo_status.total > 0 ? EMB_OK : EMB_ERR_NOT_FOUND;
}

emb_result_t emb_photo_play(void)
{
    if (emb_photo_status.total <= 0) return EMB_ERR_NOT_READY;
    emb_photo_status.playing = 1;
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);
    return EMB_OK;
}

emb_result_t emb_photo_pause(void)
{
    emb_photo_status.playing = 0;
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);
    return EMB_OK;
}

emb_result_t emb_photo_stop(void)
{
    emb_photo_status.playing = 0;
    emb_photo_status.index = 0;
    emb_photo_update_current();
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);
    return EMB_OK;
}

emb_result_t emb_photo_next(void)
{
    if (emb_photo_status.total <= 0) return EMB_ERR_NOT_READY;
    emb_photo_status.index = (emb_photo_status.index + 1) % emb_photo_status.total;
    emb_photo_update_current();
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);
    return EMB_OK;
}

emb_result_t emb_photo_prev(void)
{
    if (emb_photo_status.total <= 0) return EMB_ERR_NOT_READY;
    emb_photo_status.index =
        (emb_photo_status.index + emb_photo_status.total - 1) % emb_photo_status.total;
    emb_photo_update_current();
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);
    return EMB_OK;
}

emb_result_t emb_photo_set_interval(int interval_ms)
{
    if (interval_ms <= 0) return EMB_ERR_INVALID_PARAM;
    emb_photo_status.interval_ms = interval_ms;
    emb_event_emit(EMB_EVENT_PHOTO_CHANGED, &emb_photo_status);
    return EMB_OK;
}

emb_result_t emb_photo_get_status(emb_photo_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_photo_status, sizeof(*status));
    return EMB_OK;
}
