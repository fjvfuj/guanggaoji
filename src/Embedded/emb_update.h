#ifndef EMB_UPDATE_H
#define EMB_UPDATE_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_update_check(emb_update_info_t *info);
emb_result_t emb_update_start(void);
emb_result_t emb_update_cancel(void);
emb_result_t emb_update_get_status(emb_update_status_t *status);

#ifdef __cplusplus
}
#endif

#endif
