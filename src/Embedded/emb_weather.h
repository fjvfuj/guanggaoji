#ifndef EMB_WEATHER_H
#define EMB_WEATHER_H

#include "emb_types.h"

#ifdef __cplusplus
extern "C" {
#endif

emb_result_t emb_weather_update(const char *city);
emb_result_t emb_weather_get(emb_weather_info_t *info);

#ifdef __cplusplus
}
#endif

#endif
