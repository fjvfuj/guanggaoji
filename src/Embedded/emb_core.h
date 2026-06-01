#ifndef EMB_CORE_H
#define EMB_CORE_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_core_init(void);
emb_result_t emb_core_deinit(void);
const char *emb_core_version(void);

#ifdef __cplusplus
}
#endif

#endif
