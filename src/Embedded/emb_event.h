#ifndef EMB_EVENT_H
#define EMB_EVENT_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*emb_event_cb_t)(emb_event_t event, void *data);

emb_result_t emb_event_register(emb_event_cb_t cb);
emb_result_t emb_event_unregister(emb_event_cb_t cb);
emb_result_t emb_event_emit(emb_event_t event, void *data);

#ifdef __cplusplus
}
#endif

#endif
