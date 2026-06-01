#ifndef EMB_STORAGE_H
#define EMB_STORAGE_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_storage_is_usb_inserted(int *inserted);
emb_result_t emb_storage_is_tf_inserted(int *inserted);
emb_result_t emb_storage_scan_media(emb_media_type_t type, emb_media_file_t *files,
                                    int max_count, int *out_count);

#ifdef __cplusplus
}
#endif

#endif
