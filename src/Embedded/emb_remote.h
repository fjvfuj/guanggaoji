#ifndef EMB_REMOTE_H
#define EMB_REMOTE_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_remote_start(void);
emb_result_t emb_remote_stop(void);
emb_result_t emb_remote_force_refresh(void);
emb_result_t emb_remote_get_status(emb_remote_status_t *status);

#ifdef __cplusplus
}
#endif

#endif
