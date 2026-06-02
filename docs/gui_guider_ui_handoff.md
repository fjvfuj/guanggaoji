# GUI-Guider / LVGL UI handoff

This project currently uses LVGL C code instead of directly editing a GUI-Guider project.

## Entry

- Startup entry: `src/main.c`
- Current UI entry: `lv_pro_new_ui_init()`
- UI source: `src/NewUI/lv_pro_new_ui.c`
- Layout tuning constants: `src/NewUI/lv_pro_new_ui_layout.h`

## Tuning First

For screen-position tuning, edit `src/NewUI/lv_pro_new_ui_layout.h` first:

- `UI_TOPBAR_H`: top area height
- `UI_PAGE_Y`: page content start Y
- `UI_PAGE_H`: page content height
- `UI_NAV_Y`: bottom navigation Y
- `UI_HERO_H`: home preview area height
- `UI_HOME_META_Y`: home status card Y
- `UI_MEDIA_DOCK_Y`: photo/video dock Y

These values are designed for a 1920x1080 screen.

## Do Not Change Yet

- Do not restore MQTT slideshow startup while tuning the UI shell.
- Do not change DTS/LCD/backlight parameters for UI layout tuning.
- Do not call old H135 entertainment UI modules from the new UI page code.

## Build

```bash
cd /home/ztb/projects/H137_ref/H137-screencast
source build/envsetup.sh
lunch 9
make package/subpackage/thirdparty/gui/lvgl-8/lv_projector/compile V=s
make -j8
pack
```

Output image:

```text
/home/ztb/projects/H137_ref/H137-screencast/out/h137_linux_evb1_uart0_nor.img
```
