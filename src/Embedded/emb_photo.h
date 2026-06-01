#ifndef EMB_PHOTO_H
#define EMB_PHOTO_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_photo_load_dir(const char *dir);
emb_result_t emb_photo_play(void);
emb_result_t emb_photo_pause(void);
emb_result_t emb_photo_stop(void);
emb_result_t emb_photo_next(void);
emb_result_t emb_photo_prev(void);
emb_result_t emb_photo_set_interval(int interval_ms);
emb_result_t emb_photo_get_status(emb_photo_status_t *status);

#ifdef __cplusplus
}
#endif

#endif
