#include "emb_network.h"

#include <string.h>

emb_result_t emb_network_get_status(emb_network_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;

    memset(status, 0, sizeof(*status));
    status->type = EMB_NET_NONE;
    return EMB_OK;
}

emb_result_t emb_network_check_server(const char *host, int port, int timeout_ms)
{
    if (host == NULL || host[0] == '\0' || port <= 0 || timeout_ms < 0) {
        return EMB_ERR_INVALID_PARAM;
    }

    return EMB_ERR_UNSUPPORTED;
}
