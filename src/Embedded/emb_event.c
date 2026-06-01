#include "emb_event.h"

#define EMB_EVENT_MAX_CALLBACKS 8

static emb_event_cb_t emb_event_callbacks[EMB_EVENT_MAX_CALLBACKS];

emb_result_t emb_event_register(emb_event_cb_t cb)
{
    int i;

    if (cb == NULL) return EMB_ERR_INVALID_PARAM;

    for (i = 0; i < EMB_EVENT_MAX_CALLBACKS; i++) {
        if (emb_event_callbacks[i] == cb) return EMB_OK;
    }

    for (i = 0; i < EMB_EVENT_MAX_CALLBACKS; i++) {
        if (emb_event_callbacks[i] == NULL) {
            emb_event_callbacks[i] = cb;
            return EMB_OK;
        }
    }

    return EMB_ERR_BUSY;
}

emb_result_t emb_event_unregister(emb_event_cb_t cb)
{
    int i;

    if (cb == NULL) return EMB_ERR_INVALID_PARAM;

    for (i = 0; i < EMB_EVENT_MAX_CALLBACKS; i++) {
        if (emb_event_callbacks[i] == cb) {
            emb_event_callbacks[i] = NULL;
            return EMB_OK;
        }
    }

    return EMB_ERR_NOT_FOUND;
}

emb_result_t emb_event_emit(emb_event_t event, void *data)
{
    int i;

    for (i = 0; i < EMB_EVENT_MAX_CALLBACKS; i++) {
        if (emb_event_callbacks[i] != NULL) {
            emb_event_callbacks[i](event, data);
        }
    }

    return EMB_OK;
}
