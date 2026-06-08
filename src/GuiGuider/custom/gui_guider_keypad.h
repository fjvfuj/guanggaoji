#ifndef GUI_GUIDER_KEYPAD_H
#define GUI_GUIDER_KEYPAD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "GuiGuider/generated/gui_guider.h"

void gui_guider_keypad_init(lv_ui *ui, lv_indev_t *indev);
void gui_guider_keypad_poll(void);

#ifdef __cplusplus
}
#endif

#endif
