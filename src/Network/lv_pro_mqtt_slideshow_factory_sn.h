#ifndef LV_PRO_MQTT_SLIDESHOW_FACTORY_SN_H
#define LV_PRO_MQTT_SLIDESHOW_FACTORY_SN_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Factory SN mode:
 * - Search sn_list.txt from USB/SD first, then local fallback.
 * - Read the first valid SN.
 * - Immediately rewrite sn_list.txt without that SN.
 * - No used_sn.log is generated.
 *
 * Return 0: SN taken and marked used.
 * Return <0: no valid SN or failed to take SN.
 */
int mqtt_slideshow_factory_sn_take(char *out_sn, int out_size,
                                   char *out_source, int source_size);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_FACTORY_SN_H */
