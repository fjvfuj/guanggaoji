#include "emb_remote.h"

#include <string.h>

static emb_remote_status_t emb_remote_status;

emb_result_t emb_remote_start(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_remote_stop(void)
{
    memset(&emb_remote_status, 0, sizeof(emb_remote_status));
    return EMB_OK;
}

emb_result_t emb_remote_force_refresh(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_remote_get_status(emb_remote_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_remote_status, sizeof(*status));
    return EMB_OK;
}
