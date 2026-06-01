#include "emb_core.h"

static int emb_core_initialized;

emb_result_t emb_core_init(void)
{
    emb_core_initialized = 1;
    return EMB_OK;
}

emb_result_t emb_core_deinit(void)
{
    emb_core_initialized = 0;
    return EMB_OK;
}

const char *emb_core_version(void)
{
    (void)emb_core_initialized;
    return EMB_VERSION;
}
