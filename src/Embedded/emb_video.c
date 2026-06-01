#include "emb_video.h"

#include <string.h>

static emb_video_status_t emb_video_status;

emb_result_t emb_video_load_dir(const char *dir)
{
    if (dir == NULL || dir[0] == '\0') return EMB_ERR_INVALID_PARAM;
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_video_play(const char *path)
{
    if (path == NULL || path[0] == '\0') return EMB_ERR_INVALID_PARAM;
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_video_pause(void)
{
    emb_video_status.playing = 0;
    return EMB_OK;
}

emb_result_t emb_video_resume(void)
{
    emb_video_status.playing = 1;
    return EMB_OK;
}

emb_result_t emb_video_stop(void)
{
    emb_video_status.playing = 0;
    emb_video_status.position_ms = 0;
    return EMB_OK;
}

emb_result_t emb_video_next(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_video_prev(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_video_seek(int position_ms)
{
    if (position_ms < 0) return EMB_ERR_INVALID_PARAM;
    emb_video_status.position_ms = position_ms;
    return EMB_OK;
}

emb_result_t emb_video_get_status(emb_video_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_video_status, sizeof(*status));
    return EMB_OK;
}
