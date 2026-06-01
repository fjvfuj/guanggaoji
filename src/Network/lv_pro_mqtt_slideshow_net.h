#ifndef LV_PRO_MQTT_SLIDESHOW_NET_H
#define LV_PRO_MQTT_SLIDESHOW_NET_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Bring eth interface up and start BusyBox udhcpc in background.
 * This function is safe to call repeatedly; it avoids starting duplicate udhcpc
 * when the pid file points to a running process.
 */
int mqtt_slideshow_net_start_eth_dhcp(const char *iface);

/* Read /sys/class/net/<iface>/carrier. Returns 1 link up, 0 link down/unknown. */
int mqtt_slideshow_net_is_link_up(const char *iface);

/* Check whether iface has an IPv4 address. */
int mqtt_slideshow_net_has_ipv4(const char *iface);

/* Check whether /proc/net/route has a default route for iface. */
int mqtt_slideshow_net_has_default_route(const char *iface);

/* Wait until iface has IPv4 + default route. timeout_sec < 0 means wait forever. */
int mqtt_slideshow_net_wait_ready(const char *iface, int timeout_sec);

#ifdef __cplusplus
}
#endif

#endif /* LV_PRO_MQTT_SLIDESHOW_NET_H */
