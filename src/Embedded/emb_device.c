#include "emb_device.h"

#include <stdio.h>
#include <string.h>

emb_result_t emb_device_get_info(emb_device_info_t *info)
{
    if (info == NULL) return EMB_ERR_INVALID_PARAM;

    memset(info, 0, sizeof(*info));
    snprintf(info->product, sizeof(info->product), "%s", "H137");
    snprintf(info->board, sizeof(info->board), "%s", "evb1");
    snprintf(info->chip, sizeof(info->chip), "%s", "h137");
    snprintf(info->software_version, sizeof(info->software_version), "%s", EMB_VERSION);

    return EMB_OK;
}
