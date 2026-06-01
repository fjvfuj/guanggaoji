#include "emb_update.h"

#include <string.h>

static emb_update_status_t emb_update_status;

emb_result_t emb_update_check(emb_update_info_t *info)
{
    if (info == NULL) return EMB_ERR_INVALID_PARAM;
    memset(info, 0, sizeof(*info));
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_update_start(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_update_cancel(void)
{
    memset(&emb_update_status, 0, sizeof(emb_update_status));
    return EMB_OK;
}

emb_result_t emb_update_get_status(emb_update_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_update_status, sizeof(*status));
    return EMB_OK;
}
