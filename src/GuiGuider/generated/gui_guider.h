/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_hero_panel_bg;
	lv_obj_t *screen_hero_panel_bg_label;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_status_strip_bg;
	lv_obj_t *screen_status_strip_bg_label;
	lv_obj_t *screen_source_card_bg;
	lv_obj_t *screen_source_card_bg_label;
	lv_obj_t *screen_bottom_nav_bg;
	lv_obj_t *screen_bottom_nav_bg_label;
	lv_obj_t *screen_setting_card_bg;
	lv_obj_t *screen_setting_card_bg_label;
	lv_obj_t *screen_network_card_bg;
	lv_obj_t *screen_network_card_bg_label;
	lv_obj_t *screen_cast_card_bg;
	lv_obj_t *screen_cast_card_bg_label;
	lv_obj_t *screen_time_card_bg;
	lv_obj_t *screen_time_card_bg_label;
	lv_obj_t *screen_setting_title;
	lv_obj_t *screen_setting_mark;
	lv_obj_t *screen_network_value;
	lv_obj_t *screen_network_title;
	lv_obj_t *screen_network_mark;
	lv_obj_t *screen_cast_value;
	lv_obj_t *screen_cast_title;
	lv_obj_t *screen_cast_mark;
	lv_obj_t *screen_source_value;
	lv_obj_t *screen_source_title;
	lv_obj_t *screen_source_mark;
	lv_obj_t *screen_time_date;
	lv_obj_t *screen_time_city;
	lv_obj_t *screen_hero_subtitle;
	lv_obj_t *screen_hero_title;
	lv_obj_t *screen_top_brand_text;
	lv_obj_t *screen_top_logo_icon_text;
	lv_obj_t *screen_nav_setting;
	lv_obj_t *screen_nav_setting_label;
	lv_obj_t *screen_nav_network;
	lv_obj_t *screen_nav_network_label;
	lv_obj_t *screen_nav_clock;
	lv_obj_t *screen_nav_clock_label;
	lv_obj_t *screen_nav_video;
	lv_obj_t *screen_nav_video_label;
	lv_obj_t *screen_nav_photo;
	lv_obj_t *screen_nav_photo_label;
	lv_obj_t *screen_nav_cast;
	lv_obj_t *screen_nav_cast_label;
	lv_obj_t *screen_nav_input;
	lv_obj_t *screen_nav_input_label;
	lv_obj_t *screen_nav_home;
	lv_obj_t *screen_nav_home_label;
	lv_obj_t *screen_hero_badge;
	lv_obj_t *screen_hero_badge_label;
	lv_obj_t *screen_hero_status_wifi;
	lv_obj_t *screen_hero_status_wifi_label;
	lv_obj_t *screen_hero_status_hdmi;
	lv_obj_t *screen_hero_status_hdmi_label;
	lv_obj_t *screen_top_action_wifi;
	lv_obj_t *screen_top_action_wifi_label;
	lv_obj_t *screen_top_action_cast;
	lv_obj_t *screen_top_action_cast_label;
	lv_obj_t *screen_top_action_input;
	lv_obj_t *screen_top_action_input_label;
	lv_obj_t *screen_time_value;
	lv_obj_t *screen_top_page_pill;
	lv_obj_t *screen_top_page_pill_label;
	lv_obj_t *screen_top_logo_icon_bg;
	lv_obj_t *screen_top_logo_icon_bg_label;
	lv_obj_t *screen_setting_value;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_screen(lv_ui *ui);

LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_22)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_19)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_24)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_21)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_18)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_52)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_44)


#ifdef __cplusplus
}
#endif
#endif
