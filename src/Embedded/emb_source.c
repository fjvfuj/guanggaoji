#include "emb_source.h"

#include <string.h>

static emb_source_status_t emb_source_status = {
    .current = EMB_SOURCE_NONE,
};

emb_result_t emb_source_get_status(emb_source_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(status, &emb_source_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_source_set(emb_source_t source)
{
    if (source < EMB_SOURCE_NONE || source > EMB_SOURCE_TF) return EMB_ERR_INVALID_PARAM;
    emb_source_status.current = source;
    return EMB_OK;
}
