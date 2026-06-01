#include "emb_storage.h"

emb_result_t emb_storage_is_usb_inserted(int *inserted)
{
    if (inserted == NULL) return EMB_ERR_INVALID_PARAM;
    *inserted = 0;
    return EMB_OK;
}

emb_result_t emb_storage_is_tf_inserted(int *inserted)
{
    if (inserted == NULL) return EMB_ERR_INVALID_PARAM;
    *inserted = 0;
    return EMB_OK;
}

emb_result_t emb_storage_scan_media(emb_media_type_t type, emb_media_file_t *files,
                                    int max_count, int *out_count)
{
    if (out_count == NULL || max_count < 0) return EMB_ERR_INVALID_PARAM;
    (void)type;
    (void)files;
    *out_count = 0;
    return EMB_OK;
}
