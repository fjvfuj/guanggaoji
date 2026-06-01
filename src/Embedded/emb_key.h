#ifndef EMB_KEY_H
#define EMB_KEY_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*emb_key_cb_t)(emb_key_t key, int pressed);

emb_result_t emb_key_register_callback(emb_key_cb_t cb);
emb_result_t emb_key_emit(emb_key_t key, int pressed);

#ifdef __cplusplus
}
#endif

#endif
