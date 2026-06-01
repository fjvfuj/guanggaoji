#ifndef EMB_AUDIO_H
#define EMB_AUDIO_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_audio_get_status(emb_audio_status_t *status);
emb_result_t emb_audio_set_volume(int volume);
emb_result_t emb_audio_set_mute(int muted);
emb_result_t emb_audio_set_output_mode(int mode);

#ifdef __cplusplus
}
#endif

#endif
