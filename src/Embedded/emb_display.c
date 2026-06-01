#include "emb_display.h"

#include <string.h>

static emb_display_status_t emb_display_status = {
    .width = 0,
    .height = 0,
    .brightness = 100,
    .scale_mode = EMB_SCALE_FULL,
};

emb_result_t emb_display_get_status(emb_display_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_display_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_display_set_brightness(int brightness)
{
    if (brightness < 0 || brightness > 100) return EMB_ERR_INVALID_PARAM;
    emb_display_status.brightness = brightness;
    return EMB_OK;
}

emb_result_t emb_display_set_scale_mode(emb_scale_mode_t mode)
{
    if (mode != EMB_SCALE_FULL && mode != EMB_SCALE_KEEP_RATIO) {
        return EMB_ERR_INVALID_PARAM;
    }
    emb_display_status.scale_mode = mode;
    return EMB_OK;
}
