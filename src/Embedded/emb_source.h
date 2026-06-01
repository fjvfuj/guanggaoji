#ifndef EMB_SOURCE_H
#define EMB_SOURCE_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_source_get_status(emb_source_status_t *status);
emb_result_t emb_source_set(emb_source_t source);

#ifdef __cplusplus
}
#endif

#endif
