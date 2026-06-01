#include "emb_audio.h"
#include "emb_event.h"

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "../Layer/volume/volume.h"
#include "../System/audio/audio_api.h"

static emb_audio_status_t emb_audio_status = {
    .volume = 50,
    .muted = 0,
    .output_mode = 0,
};

emb_result_t emb_audio_get_status(emb_audio_status_t *status)
{
    bool muted = false;
    int volume = 0;
    long ui_volume;

    if (status == NULL) return EMB_ERR_INVALID_PARAM;

    if (audio_get_volume(&volume) == 0 && volume >= 0 && volume <= 100) {
        emb_audio_status.volume = volume;
    } else {
        ui_volume = lv_get_volume();
        if (ui_volume >= 0 && ui_volume <= 100) {
            emb_audio_status.volume = (int)ui_volume;
        }
    }

    if (audio_get_mute(&muted) == 0) {
        emb_audio_status.muted = muted ? 1 : 0;
    } else {
        emb_audio_status.muted = is_volume_mute() ? 1 : 0;
    }

    memcpy(status, &emb_audio_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_audio_set_volume(int volume)
{
    if (volume < 0 || volume > 100) return EMB_ERR_INVALID_PARAM;

    if (audio_set_volume(volume) != 0) {
        return EMB_ERR_FAILED;
    }

    emb_audio_status.volume = volume;
    lv_set_volume((uint8_t)volume);
    emb_event_emit(EMB_EVENT_AUDIO_CHANGED, &emb_audio_status);
    return EMB_OK;
}

emb_result_t emb_audio_set_mute(int muted)
{
    bool target = muted ? true : false;

    if (audio_set_mute(target) != 0) {
        return EMB_ERR_FAILED;
    }

    emb_audio_status.muted = target ? 1 : 0;
    lv_set_mute(target);
    emb_event_emit(EMB_EVENT_AUDIO_CHANGED, &emb_audio_status);
    return EMB_OK;
}

emb_result_t emb_audio_set_output_mode(int mode)
{
    if (audio_set_output_device(mode) != 0) {
        return EMB_ERR_FAILED;
    }

    emb_audio_status.output_mode = mode;
    emb_event_emit(EMB_EVENT_AUDIO_CHANGED, &emb_audio_status);
    return EMB_OK;
}
