本补丁只修改 MQTT 图片保存目录。

修改文件：
- lv_pro_mqtt_slideshow_config.h

修改内容：
- IMAGE_DIR 从 /root/mqtt_images/ 改为 /usr/share/lv_projector/mqtt_images/
- STATE_FILE 从 /root/mqtt_images/slideshow_state.txt 改为 /usr/share/lv_projector/mqtt_images/slideshow_state.txt

板子上需要先建目录：
mkdir -p /usr/share/lv_projector/mqtt_images
sync

替换此头文件后，需要重新编译并替换 /usr/bin/lv_projector。

重启后日志里图片路径应该变成：
A:/usr/share/lv_projector/mqtt_images/mqtt_xxx_00.jpg
