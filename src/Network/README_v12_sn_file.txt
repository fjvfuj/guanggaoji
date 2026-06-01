V12 changes:
- Device SN is now read from /usr/share/lv_projector/device_sn first.
- Fallback paths: /data/device_sn, /etc/device_sn.
- Environment variables snum/SN are kept only as debug fallback.
- Final fallback remains MQTT_DEFAULT_DEVICE_SN.

Production write command:
  echo 58000c6e040148e23cb >/usr/share/lv_projector/device_sn;sync

Startup log should include:
  device_sn source=file path=/usr/share/lv_projector/device_sn value=58000c6e040148e23cb
