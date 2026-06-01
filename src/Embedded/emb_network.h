#ifndef EMB_NETWORK_H
#define EMB_NETWORK_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_network_get_status(emb_network_status_t *status);
emb_result_t emb_network_check_server(const char *host, int port, int timeout_ms);

#ifdef __cplusplus
}
#endif

#endif
