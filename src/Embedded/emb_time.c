#include "emb_time.h"

#include <stdio.h>
#include <string.h>

emb_result_t emb_time_get(emb_time_info_t *info)
{
    if (info == NULL) return EMB_ERR_INVALID_PARAM;
    memset(info, 0, sizeof(*info));
    snprintf(info->timezone, sizeof(info->timezone), "%s", "Asia/Shanghai");
    return EMB_OK;
}

emb_result_t emb_time_sync_ntp(void)
{
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_time_set_timezone(const char *timezone)
{
    if (timezone == NULL || timezone[0] == '\0') return EMB_ERR_INVALID_PARAM;
    return EMB_ERR_UNSUPPORTED;
}
