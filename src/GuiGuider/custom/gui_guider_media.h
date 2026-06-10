#ifndef GUI_GUIDER_MEDIA_H
#define GUI_GUIDER_MEDIA_H

#include "GuiGuider/generated/gui_guider.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void gui_guider_media_init(lv_ui *ui);
void gui_guider_media_poll(void);
bool gui_guider_media_handle_photo_control(lv_obj_t *obj);

#ifdef __cplusplus
}
#endif

#endif
