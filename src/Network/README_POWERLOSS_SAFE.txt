Power-loss safe MQTT image patch

Replace these files in src/Network/:
1. lv_pro_mqtt_slideshow_http.c
2. lv_pro_mqtt_slideshow_store.c
3. lv_pro_mqtt_slideshow_activity.c

Main changes:
- Download image to <final>.tmp first.
- fflush + fsync temp image immediately after curl download.
- Reject zero-size/bad temp file.
- Atomic rename <final>.tmp -> <final> only after temp is fully flushed.
- fsync parent directory after rename to make directory entry persistent.
- Remove stale *.tmp files at startup/scan/cleanup.
- Skip and delete zero-size/bad image files during local scan.
- fsync slideshow_state.txt after writing index.
- Display path still uses A: prefix.
- Runtime display always copies persistent image to /tmp unique file, then LVGL reads A:/tmp/...

After replacing, rebuild and deploy lv_projector.
Recommended first boot cleanup on board:
rm -f /usr/share/lv_projector/mqtt_images/*.tmp
sync
