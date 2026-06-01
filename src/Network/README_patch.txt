MQTT Slideshow refactor package with auto eth0 DHCP

Replace old single lv_pro_mqtt_slideshow_activity.c/.h with these files:

1. lv_pro_mqtt_slideshow_activity.c/.h
   - Only LVGL UI, timer, lv_async_call refresh.
   - Never does MQTT or HTTP work directly.

2. lv_pro_mqtt_slideshow_net.c/.h
   - Brings eth0 up by code.
   - Starts BusyBox udhcpc in background by code.
   - Avoids duplicate udhcpc by pid file /var/run/udhcpc.eth0.pid.
   - Checks link carrier, IPv4 address, and default route.

3. lv_pro_mqtt_slideshow_mqtt.c/.h
   - Only MQTT connection/subscription/heartbeat.
   - Starts/monitors network before connecting broker.
   - on_connect only subscribes; it never downloads templates.
   - on_message only copies payload and posts worker job.
   - client_id includes pid to avoid accidental duplicate client_id kicking during tests.

4. lv_pro_mqtt_slideshow_worker.c/.h
   - Single worker thread.
   - Receives latest template payload.
   - If new payload arrives while downloading, latest payload overwrites pending job.
   - Worker downloads images, commits active image list, then asks LVGL to refresh by callback.

5. lv_pro_mqtt_slideshow_http.c/.h
   - Fetches template JSON from HTTP_TEMPLATE_URL.
   - Parses data.options.image[].url.
   - Downloads image files with .tmp then rename, so half files are not used.

6. lv_pro_mqtt_slideshow_store.c/.h
   - Owns active image list and /root/mqtt_images/ scanning/cleanup.
   - Keeps state file slideshow_state.txt.

7. lv_pro_mqtt_slideshow_config.h
   - All broker/topic/http/path/timing macros.
   - MQTT_NET_AUTO_DHCP enables code-based network startup.
   - MQTT_NET_IFACE defaults to eth0.

Makefile source list example:

SRCS += lv_pro_mqtt_slideshow_activity.c \
        lv_pro_mqtt_slideshow_mqtt.c \
        lv_pro_mqtt_slideshow_net.c \
        lv_pro_mqtt_slideshow_worker.c \
        lv_pro_mqtt_slideshow_http.c \
        lv_pro_mqtt_slideshow_store.c

LDLIBS += -lmosquitto -lcurl -lpthread

Expected boot behavior:
- UI scans local images and starts local slideshow immediately.
- MQTT thread executes equivalent of:
  ip link set eth0 up
  udhcpc -i eth0 -b -q -p /var/run/udhcpc.eth0.pid
- MQTT waits until eth0 has IPv4 and default route.
- Then it connects to broker 120.27.199.92:1883.
- Subscribe topic: update_device_template/<snum>
- snum is read from getenv("snum"), then getenv("SN"), otherwise 88888888.
- MQTT payload example: 92,93,94,95,109,110
- API URL generated as: http://112.74.32.81:30008/template/<id>
- UI always does lv_img_set_src(img, NULL) before setting a new image.

Important:
- If the process is not root, ip/udhcpc may fail.
- If BusyBox udhcpc has no default.script, DHCP may get a lease but not configure route. This package searches common script paths and passes -s when found.
- If your system uses a custom udhcpc script path, set it by editing find_udhcpc_script() in lv_pro_mqtt_slideshow_net.c.

V2 fix:
- udhcpc is now spawned detached instead of waited by MQTT thread.
- Removed -q from udhcpc arguments; DHCP client can stay alive to renew lease.
- MQTT thread now continues to wait route/IP and then connects broker after DHCP lease.

v4 patch:
- MQTT no longer exits or blocks forever when local ipv4/default-route detection is unreliable.
- DHCP is started detached, then mosquitto_connect is attempted as the real network test.
- Added errno logging for mosquitto_connect failures.
- IPv4 detection changed to ioctl(SIOCGIFADDR), which is more reliable on embedded Linux than getifaddrs in some builds.
- Added mosquitto_threaded_set() for safer publish calls across threads.
