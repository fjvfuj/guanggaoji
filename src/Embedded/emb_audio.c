#include "emb_audio.h"

#include <string.h>

static emb_audio_status_t emb_audio_status = {
    .volume = 50,
    .muted = 0,
    .output_mode = 0,
};

emb_result_t emb_audio_get_status(emb_audio_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_audio_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_audio_set_volume(int volume)
{
    if (volume < 0 || volume > 100) return EMB_ERR_INVALID_PARAM;
    emb_audio_status.volume = volume;
    return EMB_OK;
}

emb_result_t emb_audio_set_mute(int muted)
{
    emb_audio_status.muted = muted ? 1 : 0;
    return EMB_OK;
}

emb_result_t emb_audio_set_output_mode(int mode)
{
    emb_audio_status.output_mode = mode;
    return EMB_OK;
}
