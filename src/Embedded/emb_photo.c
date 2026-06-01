#include "emb_photo.h"

#include <string.h>

static emb_photo_status_t emb_photo_status = {
    .interval_ms = 3000,
};

emb_result_t emb_photo_load_dir(const char *dir)
{
    if (dir == NULL || dir[0] == '\0') return EMB_ERR_INVALID_PARAM;
    emb_photo_status.total = 0;
    emb_photo_status.index = 0;
    emb_photo_status.playing = 0;
    emb_photo_status.current_path[0] = '\0';
    emb_photo_status.current_name[0] = '\0';
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_photo_play(void)
{
    emb_photo_status.playing = 1;
    return EMB_OK;
}

emb_result_t emb_photo_pause(void)
{
    emb_photo_status.playing = 0;
    return EMB_OK;
}

emb_result_t emb_photo_stop(void)
{
    emb_photo_status.playing = 0;
    emb_photo_status.index = 0;
    return EMB_OK;
}

emb_result_t emb_photo_next(void)
{
    if (emb_photo_status.total <= 0) return EMB_ERR_NOT_READY;
    emb_photo_status.index = (emb_photo_status.index + 1) % emb_photo_status.total;
    return EMB_OK;
}

emb_result_t emb_photo_prev(void)
{
    if (emb_photo_status.total <= 0) return EMB_ERR_NOT_READY;
    emb_photo_status.index =
        (emb_photo_status.index + emb_photo_status.total - 1) % emb_photo_status.total;
    return EMB_OK;
}

emb_result_t emb_photo_set_interval(int interval_ms)
{
    if (interval_ms <= 0) return EMB_ERR_INVALID_PARAM;
    emb_photo_status.interval_ms = interval_ms;
    return EMB_OK;
}

emb_result_t emb_photo_get_status(emb_photo_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_photo_status, sizeof(*status));
    return EMB_OK;
}
