#include "emb_key.h"

static emb_key_cb_t emb_key_callback;

emb_result_t emb_key_register_callback(emb_key_cb_t cb)
{
    emb_key_callback = cb;
    return EMB_OK;
}

emb_result_t emb_key_emit(emb_key_t key, int pressed)
{
    if (emb_key_callback == NULL) return EMB_ERR_NOT_READY;
    emb_key_callback(key, pressed);
    return EMB_OK;
}
