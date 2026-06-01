#ifndef EMB_DISPLAY_H
#define EMB_DISPLAY_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_display_get_status(emb_display_status_t *status);
emb_result_t emb_display_set_brightness(int brightness);
emb_result_t emb_display_set_scale_mode(emb_scale_mode_t mode);

#ifdef __cplusplus
}
#endif

#endif
