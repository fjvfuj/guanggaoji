#include "emb_cast.h"

#include <string.h>

static emb_cast_status_t emb_cast_status = {
    .mode = EMB_CAST_NONE,
};

emb_result_t emb_cast_start(emb_cast_mode_t mode)
{
    if (mode <= EMB_CAST_NONE || mode > EMB_CAST_USB) return EMB_ERR_INVALID_PARAM;
    emb_cast_status.mode = mode;
    emb_cast_status.running = 0;
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_cast_stop(void)
{
    memset(&emb_cast_status, 0, sizeof(emb_cast_status));
    emb_cast_status.mode = EMB_CAST_NONE;
    return EMB_OK;
}

emb_result_t emb_cast_get_status(emb_cast_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_cast_status, sizeof(*status));
    return EMB_OK;
}
