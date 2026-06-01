#include "emb_weather.h"

#include <string.h>

static emb_weather_info_t emb_weather_info = {
    .temperature = -100,
    .temp_low = -100,
    .temp_high = -100,
    .humidity = -1,
    .from_cache = 0,
};

emb_result_t emb_weather_update(const char *city)
{
    if (city == NULL || city[0] == '\0') return EMB_ERR_INVALID_PARAM;
    return EMB_ERR_UNSUPPORTED;
}

emb_result_t emb_weather_get(emb_weather_info_t *info)
{
    if (info == NULL) return EMB_ERR_INVALID_PARAM;
    memcpy(info, &emb_weather_info, sizeof(*info));
    return EMB_OK;
}
