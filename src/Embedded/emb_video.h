#ifndef EMB_VIDEO_H
#define EMB_VIDEO_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_video_load_dir(const char *dir);
emb_result_t emb_video_play(const char *path);
emb_result_t emb_video_pause(void);
emb_result_t emb_video_resume(void);
emb_result_t emb_video_stop(void);
emb_result_t emb_video_next(void);
emb_result_t emb_video_prev(void);
emb_result_t emb_video_seek(int position_ms);
emb_result_t emb_video_get_status(emb_video_status_t *status);

#ifdef __cplusplus
}
#endif

#endif
