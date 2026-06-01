#ifndef EMB_CAST_H
#define EMB_CAST_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_cast_start(emb_cast_mode_t mode);
emb_result_t emb_cast_stop(void);
emb_result_t emb_cast_get_status(emb_cast_status_t *status);

#ifdef __cplusplus
}
#endif

#endif
