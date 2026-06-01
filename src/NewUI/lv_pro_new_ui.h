#ifndef LV_PRO_NEW_UI_H
#define LV_PRO_NEW_UI_H

#include "lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    LV_PRO_NEW_PAGE_HOME = 0,
    LV_PRO_NEW_PAGE_INPUT,
    LV_PRO_NEW_PAGE_CAST,
    LV_PRO_NEW_PAGE_PHOTO,
    LV_PRO_NEW_PAGE_VIDEO,
    LV_PRO_NEW_PAGE_CLOCK,
    LV_PRO_NEW_PAGE_WIFI,
    LV_PRO_NEW_PAGE_SETTING,
    LV_PRO_NEW_PAGE_COUNT
} lv_pro_new_page_t;

extern lv_obj_t *lv_pro_new_ui_activity;

void lv_pro_new_ui_init(void);
void lv_pro_new_ui_show_page(lv_pro_new_page_t page);
lv_pro_new_page_t lv_pro_new_ui_get_page(void);

#ifdef __cplusplus
}
#endif

#endif
