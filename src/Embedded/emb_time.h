#ifndef EMB_TIME_H
#define EMB_TIME_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_time_get(emb_time_info_t *info);
emb_result_t emb_time_sync_ntp(void);
emb_result_t emb_time_set_timezone(const char *timezone);

#ifdef __cplusplus
}
#endif

#endif
