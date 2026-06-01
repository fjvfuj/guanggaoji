#include "emb_display.h"
#include "emb_event.h"

#include "../include/sys_param.h"
#include "lvgl/lvgl.h"

#include <string.h>

static emb_display_status_t emb_display_status = {
    .width = 0,
    .height = 0,
    .brightness = 100,
    .scale_mode = EMB_SCALE_FULL,
};

emb_result_t emb_display_get_status(emb_display_status_t *status)
{
    int width;
    int height;
    int brightness;

    if (status == NULL) return EMB_ERR_INVALID_PARAM;

    width = lv_get_sys_param(P_DISPLAY_W);
    height = lv_get_sys_param(P_DISPLAY_H);
    brightness = lv_get_sys_param(P_BRIGHTNESS);

    if (width <= 0) width = LV_HOR_RES;
    if (height <= 0) height = LV_VER_RES;
    if (brightness < 0 || brightness > 100) brightness = emb_display_status.brightness;

    emb_display_status.width = width;
    emb_display_status.height = height;
    emb_display_status.brightness = brightness;

    memcpy(status, &emb_display_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_display_set_brightness(int brightness)
{
    if (brightness < 0 || brightness > 100) return EMB_ERR_INVALID_PARAM;
    emb_display_status.brightness = brightness;
    lv_set_sys_param(P_BRIGHTNESS, brightness);
    emb_event_emit(EMB_EVENT_BRIGHTNESS_CHANGED, &emb_display_status);
    return EMB_OK;
}

emb_result_t emb_display_set_scale_mode(emb_scale_mode_t mode)
{
    if (mode != EMB_SCALE_FULL && mode != EMB_SCALE_KEEP_RATIO) {
        return EMB_ERR_INVALID_PARAM;
    }
    emb_display_status.scale_mode = mode;
    emb_event_emit(EMB_EVENT_BRIGHTNESS_CHANGED, &emb_display_status);
    return EMB_OK;
}
