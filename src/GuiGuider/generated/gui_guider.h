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
	lv_obj_t *screen_cont_1;
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
	lv_obj_t *screen_time_city;
	lv_obj_t *screen_hero_subtitle;
	lv_obj_t *screen_hero_title;
	lv_obj_t *screen_top_brand_text;
	lv_obj_t *screen_top_logo_icon_text;
	lv_obj_t *screen_hero_badge;
	lv_obj_t *screen_hero_badge_label;
	lv_obj_t *screen_hero_status_wifi;
	lv_obj_t *screen_hero_status_wifi_label;
	lv_obj_t *screen_hero_status_hdmi;
	lv_obj_t *screen_hero_status_hdmi_label;
	lv_obj_t *screen_top_page_pill;
	lv_obj_t *screen_top_page_pill_label;
	lv_obj_t *screen_top_logo_icon_bg;
	lv_obj_t *screen_top_logo_icon_bg_label;
	lv_obj_t *screen_setting_value;
	lv_obj_t *screen_digital_clock_1;
	lv_obj_t *screen_time_date;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_img_2;
	lv_obj_t *screen_img_3;
	lv_obj_t *screen_img_4;
	lv_obj_t *screen_img_5;
	lv_obj_t *screen_img_6;
	lv_obj_t *screen_img_7;
	lv_obj_t *screen_img_8;
	lv_obj_t *screen_img_9;
	lv_obj_t *screen_img_10;
	lv_obj_t *screen_img_11;
	lv_obj_t *screen_img_12;
	lv_obj_t *screen_img_13;
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *screen_1_btn_7;
	lv_obj_t *screen_1_btn_7_label;
	lv_obj_t *screen_1_screen_1_usb_card;
	lv_obj_t *screen_1_screen_1_usb_card_label;
	lv_obj_t *screen_1_screen_1_hdmi_card;
	lv_obj_t *screen_1_screen_1_hdmi_card_label;
	lv_obj_t *screen_1_screen_1_preview_panel;
	lv_obj_t *screen_1_screen_1_preview_panel_label;
	lv_obj_t *screen_1_screen_1_top_brand_bg;
	lv_obj_t *screen_1_screen_1_top_brand_bg_label;
	lv_obj_t *screen_1_screen_1_usb_subtitle;
	lv_obj_t *screen_1_screen_1_usb_title;
	lv_obj_t *screen_1_screen_1_usb_icon;
	lv_obj_t *screen_1_screen_1_usb_icon_bg;
	lv_obj_t *screen_1_screen_1_usb_icon_bg_label;
	lv_obj_t *screen_1_screen_1_hdmi_check;
	lv_obj_t *screen_1_screen_1_hdmi_subtitle;
	lv_obj_t *screen_1_screen_1_hdmi_title;
	lv_obj_t *screen_1_screen_1_hdmi_icon;
	lv_obj_t *screen_1_screen_1_preview_card;
	lv_obj_t *screen_1_screen_1_preview_card_label;
	lv_obj_t *screen_1_screen_1_brand_text;
	lv_obj_t *screen_1_screen_1_logo_text;
	lv_obj_t *screen_1_screen_1_logo_bg;
	lv_obj_t *screen_1_screen_1_logo_bg_label;
	lv_obj_t *screen_1_btn_1;
	lv_obj_t *screen_1_btn_1_label;
	lv_obj_t *screen_1_label_2;
	lv_obj_t *screen_1_label_3;
	lv_obj_t *screen_1_img_1;
	lv_obj_t *screen_1_screen_1_preview_title;
	lv_obj_t *screen_1_btn_6;
	lv_obj_t *screen_1_btn_6_label;
	lv_obj_t *screen_1_img_2;
	lv_obj_t *screen_1_img_12;
	lv_obj_t *screen_1_img_11;
	lv_obj_t *screen_1_img_10;
	lv_obj_t *screen_1_img_20;
	lv_obj_t *screen_1_img_19;
	lv_obj_t *screen_1_img_18;
	lv_obj_t *screen_1_img_17;
	lv_obj_t *screen_1_img_16;
	lv_obj_t *screen_1_img_15;
	lv_obj_t *screen_1_img_14;
	lv_obj_t *screen_1_img_13;
	lv_obj_t *screen_2;
	bool screen_2_del;
	lv_obj_t *screen_2_btn_7;
	lv_obj_t *screen_2_btn_7_label;
	lv_obj_t *screen_2_btn_4;
	lv_obj_t *screen_2_btn_4_label;
	lv_obj_t *screen_2_screen_2_p2p_card;
	lv_obj_t *screen_2_screen_2_p2p_card_label;
	lv_obj_t *screen_2_screen_2_pc_card;
	lv_obj_t *screen_2_screen_2_pc_card_label;
	lv_obj_t *screen_2_screen_2_phone_card;
	lv_obj_t *screen_2_screen_2_phone_card_label;
	lv_obj_t *screen_2_screen_2_p2p_arrow;
	lv_obj_t *screen_2_screen_2_p2p_chip_3;
	lv_obj_t *screen_2_screen_2_p2p_chip_3_label;
	lv_obj_t *screen_2_screen_2_p2p_chip_2;
	lv_obj_t *screen_2_screen_2_p2p_chip_2_label;
	lv_obj_t *screen_2_screen_2_p2p_chip_1;
	lv_obj_t *screen_2_screen_2_p2p_chip_1_label;
	lv_obj_t *screen_2_screen_2_p2p_desc;
	lv_obj_t *screen_2_screen_2_p2p_title;
	lv_obj_t *screen_2_screen_2_p2p_icon;
	lv_obj_t *screen_2_screen_2_p2p_icon_bg;
	lv_obj_t *screen_2_screen_2_p2p_icon_bg_label;
	lv_obj_t *screen_2_screen_2_pc_arrow;
	lv_obj_t *screen_2_screen_2_pc_chip_3;
	lv_obj_t *screen_2_screen_2_pc_chip_3_label;
	lv_obj_t *screen_2_screen_2_pc_chip_2;
	lv_obj_t *screen_2_screen_2_pc_chip_2_label;
	lv_obj_t *screen_2_screen_2_pc_chip_1;
	lv_obj_t *screen_2_screen_2_pc_chip_1_label;
	lv_obj_t *screen_2_screen_2_pc_desc;
	lv_obj_t *screen_2_screen_2_pc_title;
	lv_obj_t *screen_2_screen_2_pc_icon;
	lv_obj_t *screen_2_screen_2_pc_icon_bg;
	lv_obj_t *screen_2_screen_2_pc_icon_bg_label;
	lv_obj_t *screen_2_screen_2_phone_arrow;
	lv_obj_t *screen_2_screen_2_phone_chip_3;
	lv_obj_t *screen_2_screen_2_phone_chip_3_label;
	lv_obj_t *screen_2_screen_2_phone_chip_2;
	lv_obj_t *screen_2_screen_2_phone_chip_2_label;
	lv_obj_t *screen_2_screen_2_phone_chip_1;
	lv_obj_t *screen_2_screen_2_phone_chip_1_label;
	lv_obj_t *screen_2_screen_2_phone_desc;
	lv_obj_t *screen_2_screen_2_phone_title;
	lv_obj_t *screen_2_screen_2_phone_icon;
	lv_obj_t *screen_2_screen_2_phone_icon_bg;
	lv_obj_t *screen_2_screen_2_phone_icon_bg_label;
	lv_obj_t *screen_2_screen_2_headline;
	lv_obj_t *screen_2_screen_2_section_title;
	lv_obj_t *screen_2_label_4;
	lv_obj_t *screen_2_btn_5;
	lv_obj_t *screen_2_btn_5_label;
	lv_obj_t *screen_2_label_3;
	lv_obj_t *screen_2_label_2;
	lv_obj_t *screen_2_btn_6;
	lv_obj_t *screen_2_btn_6_label;
	lv_obj_t *screen_2_img_10;
	lv_obj_t *screen_2_img_9;
	lv_obj_t *screen_2_img_8;
	lv_obj_t *screen_2_img_18;
	lv_obj_t *screen_2_img_17;
	lv_obj_t *screen_2_img_16;
	lv_obj_t *screen_2_img_15;
	lv_obj_t *screen_2_img_14;
	lv_obj_t *screen_2_img_13;
	lv_obj_t *screen_2_img_12;
	lv_obj_t *screen_2_img_11;
	lv_obj_t *screen_3;
	bool screen_3_del;
	lv_obj_t *screen_3_screen_3_bg_placeholder;
	lv_obj_t *screen_3_screen_3_bg_placeholder_label;
	lv_obj_t *screen_3_screen_3_control_bar;
	lv_obj_t *screen_3_screen_3_control_bar_label;
	lv_obj_t *screen_3_screen_3_ctrl_zoom_out;
	lv_obj_t *screen_3_screen_3_ctrl_zoom_out_label;
	lv_obj_t *screen_3_screen_3_ctrl_zoom_in;
	lv_obj_t *screen_3_screen_3_ctrl_zoom_in_label;
	lv_obj_t *screen_3_screen_3_ctrl_next;
	lv_obj_t *screen_3_screen_3_ctrl_next_label;
	lv_obj_t *screen_3_screen_3_ctrl_prev;
	lv_obj_t *screen_3_screen_3_ctrl_prev_label;
	lv_obj_t *screen_3_screen_3_subtitle;
	lv_obj_t *screen_3_screen_3_title;
	lv_obj_t *screen_3_screen_3_count;
	lv_obj_t *screen_3_screen_3_page_pill;
	lv_obj_t *screen_3_screen_3_page_pill_label;
	lv_obj_t *screen_3_screen_3_home_btn;
	lv_obj_t *screen_3_screen_3_home_btn_label;
	lv_obj_t *screen_3_screen_3_cursor_mark;
	lv_obj_t *screen_3_screen_3_ctrl_pause;
	lv_obj_t *screen_3_screen_3_ctrl_pause_label;
	lv_obj_t *screen_3_screen_3_ctrl_stop;
	lv_obj_t *screen_3_screen_3_ctrl_stop_label;
	lv_obj_t *screen_3_screen_3_ctrl_music;
	lv_obj_t *screen_3_screen_3_ctrl_music_label;
	lv_obj_t *screen_4;
	bool screen_4_del;
	lv_obj_t *screen_4_screen_4_left_image_hint;
	lv_obj_t *screen_4_screen_4_left_image_hint_label;
	lv_obj_t *screen_4_screen_4_bg_placeholder;
	lv_obj_t *screen_4_screen_4_bg_placeholder_label;
	lv_obj_t *screen_4_screen_4_progress_panel;
	lv_obj_t *screen_4_screen_4_progress_panel_label;
	lv_obj_t *screen_4_screen_4_progress_time;
	lv_obj_t *screen_4_screen_4_time_top;
	lv_obj_t *screen_4_screen_4_page_pill;
	lv_obj_t *screen_4_screen_4_page_pill_label;
	lv_obj_t *screen_4_screen_4_home_btn;
	lv_obj_t *screen_4_screen_4_home_btn_label;
	lv_obj_t *screen_4_bar_1;
	lv_obj_t *screen_4_btn_8;
	lv_obj_t *screen_4_btn_8_label;
	lv_obj_t *screen_4_btn_7;
	lv_obj_t *screen_4_btn_7_label;
	lv_obj_t *screen_4_btn_6;
	lv_obj_t *screen_4_btn_6_label;
	lv_obj_t *screen_4_btn_5;
	lv_obj_t *screen_4_btn_5_label;
	lv_obj_t *screen_4_btn_4;
	lv_obj_t *screen_4_btn_4_label;
	lv_obj_t *screen_4_btn_3;
	lv_obj_t *screen_4_btn_3_label;
	lv_obj_t *screen_4_btn_2;
	lv_obj_t *screen_4_btn_2_label;
	lv_obj_t *screen_4_btn_1;
	lv_obj_t *screen_4_btn_1_label;
	lv_obj_t *screen_5;
	bool screen_5_del;
	lv_obj_t *screen_5_btn_6;
	lv_obj_t *screen_5_btn_6_label;
	lv_obj_t *screen_5_btn_4;
	lv_obj_t *screen_5_btn_4_label;
	lv_obj_t *screen_5_screen_5_right_panel;
	lv_obj_t *screen_5_screen_5_right_panel_label;
	lv_obj_t *screen_5_screen_5_left_panel;
	lv_obj_t *screen_5_screen_5_left_panel_label;
	lv_obj_t *screen_5_screen_5_step_2;
	lv_obj_t *screen_5_screen_5_step_1;
	lv_obj_t *screen_5_screen_5_qr_card;
	lv_obj_t *screen_5_screen_5_qr_card_label;
	lv_obj_t *screen_5_screen_5_qr_title;
	lv_obj_t *screen_5_screen_5_p2p_btn;
	lv_obj_t *screen_5_screen_5_p2p_btn_label;
	lv_obj_t *screen_5_screen_5_network_desc;
	lv_obj_t *screen_5_screen_5_network_name;
	lv_obj_t *screen_5_screen_5_current_label;
	lv_obj_t *screen_5_screen_5_wifi_icon_text;
	lv_obj_t *screen_5_screen_5_wifi_icon_bg;
	lv_obj_t *screen_5_screen_5_wifi_icon_bg_label;
	lv_obj_t *screen_5_screen_5_phone_icon;
	lv_obj_t *screen_5_screen_5_right_divider;
	lv_obj_t *screen_5_screen_5_right_divider_label;
	lv_obj_t *screen_5_screen_5_right_title;
	lv_obj_t *screen_5_screen_5_page_pill;
	lv_obj_t *screen_5_screen_5_page_pill_label;
	lv_obj_t *screen_5_qrcode_1;
	lv_obj_t *screen_5_label_4;
	lv_obj_t *screen_5_btn_5;
	lv_obj_t *screen_5_btn_5_label;
	lv_obj_t *screen_5_label_3;
	lv_obj_t *screen_5_label_2;
	lv_obj_t *screen_5_img_10;
	lv_obj_t *screen_5_img_9;
	lv_obj_t *screen_5_img_8;
	lv_obj_t *screen_5_img_18;
	lv_obj_t *screen_5_img_17;
	lv_obj_t *screen_5_img_16;
	lv_obj_t *screen_5_img_15;
	lv_obj_t *screen_5_img_14;
	lv_obj_t *screen_5_img_13;
	lv_obj_t *screen_5_img_12;
	lv_obj_t *screen_5_img_11;
	lv_obj_t *screen_6;
	bool screen_6_del;
	lv_obj_t *screen_6_btn_6;
	lv_obj_t *screen_6_btn_6_label;
	lv_obj_t *screen_6_btn_4;
	lv_obj_t *screen_6_btn_4_label;
	lv_obj_t *screen_6_screen_6_right_panel;
	lv_obj_t *screen_6_screen_6_right_panel_label;
	lv_obj_t *screen_6_screen_6_row_info_bg;
	lv_obj_t *screen_6_screen_6_row_info_bg_label;
	lv_obj_t *screen_6_screen_6_row_upgrade_bg;
	lv_obj_t *screen_6_screen_6_row_upgrade_bg_label;
	lv_obj_t *screen_6_screen_6_row_language_bg;
	lv_obj_t *screen_6_screen_6_row_language_bg_label;
	lv_obj_t *screen_6_screen_6_row_scale_bg;
	lv_obj_t *screen_6_screen_6_row_scale_bg_label;
	lv_obj_t *screen_6_screen_6_row_brightness_bg;
	lv_obj_t *screen_6_screen_6_row_brightness_bg_label;
	lv_obj_t *screen_6_screen_6_row_volume_bg;
	lv_obj_t *screen_6_screen_6_row_volume_bg_label;
	lv_obj_t *screen_6_screen_6_left_panel;
	lv_obj_t *screen_6_screen_6_left_panel_label;
	lv_obj_t *screen_6_screen_6_row_info_arrow;
	lv_obj_t *screen_6_screen_6_row_info_value;
	lv_obj_t *screen_6_screen_6_row_info_title;
	lv_obj_t *screen_6_screen_6_row_info_icon;
	lv_obj_t *screen_6_screen_6_row_info_icon_bg;
	lv_obj_t *screen_6_screen_6_row_info_icon_bg_label;
	lv_obj_t *screen_6_screen_6_row_upgrade_arrow;
	lv_obj_t *screen_6_screen_6_row_upgrade_value;
	lv_obj_t *screen_6_screen_6_row_upgrade_title;
	lv_obj_t *screen_6_screen_6_row_upgrade_icon;
	lv_obj_t *screen_6_screen_6_row_upgrade_icon_bg;
	lv_obj_t *screen_6_screen_6_row_upgrade_icon_bg_label;
	lv_obj_t *screen_6_screen_6_row_language_arrow;
	lv_obj_t *screen_6_screen_6_row_language_value;
	lv_obj_t *screen_6_screen_6_row_language_title;
	lv_obj_t *screen_6_screen_6_row_language_icon;
	lv_obj_t *screen_6_screen_6_row_language_icon_bg;
	lv_obj_t *screen_6_screen_6_row_language_icon_bg_label;
	lv_obj_t *screen_6_screen_6_row_scale_arrow;
	lv_obj_t *screen_6_screen_6_row_scale_value;
	lv_obj_t *screen_6_screen_6_row_scale_title;
	lv_obj_t *screen_6_screen_6_row_scale_icon;
	lv_obj_t *screen_6_screen_6_row_scale_icon_bg;
	lv_obj_t *screen_6_screen_6_row_scale_icon_bg_label;
	lv_obj_t *screen_6_screen_6_row_brightness_arrow;
	lv_obj_t *screen_6_screen_6_row_brightness_value;
	lv_obj_t *screen_6_screen_6_row_brightness_title;
	lv_obj_t *screen_6_screen_6_row_brightness_icon;
	lv_obj_t *screen_6_screen_6_row_brightness_icon_bg;
	lv_obj_t *screen_6_screen_6_row_brightness_icon_bg_label;
	lv_obj_t *screen_6_screen_6_row_volume_arrow;
	lv_obj_t *screen_6_screen_6_row_volume_value;
	lv_obj_t *screen_6_screen_6_row_volume_title;
	lv_obj_t *screen_6_screen_6_row_volume_icon;
	lv_obj_t *screen_6_screen_6_left_desc;
	lv_obj_t *screen_6_screen_6_left_title;
	lv_obj_t *screen_6_screen_6_left_icon_text;
	lv_obj_t *screen_6_screen_6_left_icon_bg;
	lv_obj_t *screen_6_screen_6_left_icon_bg_label;
	lv_obj_t *screen_6_screen_6_page_pill;
	lv_obj_t *screen_6_screen_6_page_pill_label;
	lv_obj_t *screen_6_screen_6_row_volume_icon_bg;
	lv_obj_t *screen_6_screen_6_row_volume_icon_bg_label;
	lv_obj_t *screen_6_btn_5;
	lv_obj_t *screen_6_btn_5_label;
	lv_obj_t *screen_6_label_3;
	lv_obj_t *screen_6_label_2;
	lv_obj_t *screen_6_img_10;
	lv_obj_t *screen_6_img_9;
	lv_obj_t *screen_6_img_8;
	lv_obj_t *screen_6_img_18;
	lv_obj_t *screen_6_img_17;
	lv_obj_t *screen_6_img_16;
	lv_obj_t *screen_6_img_15;
	lv_obj_t *screen_6_img_14;
	lv_obj_t *screen_6_img_13;
	lv_obj_t *screen_6_img_12;
	lv_obj_t *screen_6_img_11;
	lv_obj_t *screen_6_img_19;
	lv_obj_t *screen_7;
	bool screen_7_del;
	lv_obj_t *screen_7_btn_6;
	lv_obj_t *screen_7_btn_6_label;
	lv_obj_t *screen_7_btn_5;
	lv_obj_t *screen_7_btn_5_label;
	lv_obj_t *screen_7_screen_7_main_panel;
	lv_obj_t *screen_7_screen_7_main_panel_label;
	lv_obj_t *screen_7_screen_7_sync_btn;
	lv_obj_t *screen_7_screen_7_sync_btn_label;
	lv_obj_t *screen_7_screen_7_sync_desc;
	lv_obj_t *screen_7_screen_7_time_value;
	lv_obj_t *screen_7_screen_7_card_title;
	lv_obj_t *screen_7_screen_7_clock_card;
	lv_obj_t *screen_7_screen_7_clock_card_label;
	lv_obj_t *screen_7_screen_7_page_pill;
	lv_obj_t *screen_7_screen_7_page_pill_label;
	lv_obj_t *screen_7_screen_7_logo_text;
	lv_obj_t *screen_7_btn_4;
	lv_obj_t *screen_7_btn_4_label;
	lv_obj_t *screen_7_label_2;
	lv_obj_t *screen_7_digital_clock_1;
	lv_obj_t *screen_7_label_3;
	lv_obj_t *screen_7_label_4;
	lv_obj_t *screen_7_img_10;
	lv_obj_t *screen_7_img_9;
	lv_obj_t *screen_7_img_8;
	lv_obj_t *screen_7_img_18;
	lv_obj_t *screen_7_img_17;
	lv_obj_t *screen_7_img_16;
	lv_obj_t *screen_7_img_15;
	lv_obj_t *screen_7_img_14;
	lv_obj_t *screen_7_img_13;
	lv_obj_t *screen_7_img_12;
	lv_obj_t *screen_7_img_11;
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
void setup_scr_screen_1(lv_ui *ui);
void setup_scr_screen_2(lv_ui *ui);
void setup_scr_screen_3(lv_ui *ui);
void setup_scr_screen_4(lv_ui *ui);
void setup_scr_screen_5(lv_ui *ui);
void setup_scr_screen_6(lv_ui *ui);
void setup_scr_screen_7(lv_ui *ui);

LV_IMG_DECLARE(_shuru1_alpha_62x69);
LV_IMG_DECLARE(_touping_alpha_70x58);
LV_IMG_DECLARE(_shouye1_alpha_93x73);
LV_IMG_DECLARE(_shuru1_alpha_91x72);
LV_IMG_DECLARE(_touping_alpha_91x73);
LV_IMG_DECLARE(_tupian_alpha_89x73);
LV_IMG_DECLARE(_shiping_alpha_89x72);
LV_IMG_DECLARE(_shezhi_alpha_85x70);
LV_IMG_DECLARE(_wangluo_alpha_87x70);
LV_IMG_DECLARE(_shuru1_alpha_111x59);
LV_IMG_DECLARE(_touping_alpha_105x55);
LV_IMG_DECLARE(_wangluo_alpha_110x55);
LV_IMG_DECLARE(_shizhong_alpha_94x73);
LV_IMG_DECLARE(_diannao_alpha_155x119);
LV_IMG_DECLARE(_diannao1_alpha_48x39);
LV_IMG_DECLARE(_wangluo_alpha_110x55);
LV_IMG_DECLARE(_touping_alpha_105x55);
LV_IMG_DECLARE(_shuru1_alpha_111x59);
LV_IMG_DECLARE(_shouye1_alpha_93x73);
LV_IMG_DECLARE(_shuru1_alpha_91x72);
LV_IMG_DECLARE(_touping_alpha_91x73);
LV_IMG_DECLARE(_tupian_alpha_89x73);
LV_IMG_DECLARE(_shiping_alpha_89x72);
LV_IMG_DECLARE(_shizhong_alpha_94x73);
LV_IMG_DECLARE(_wangluo_alpha_87x70);
LV_IMG_DECLARE(_shezhi_alpha_85x70);
LV_IMG_DECLARE(_wangluo_alpha_110x55);
LV_IMG_DECLARE(_touping_alpha_105x55);
LV_IMG_DECLARE(_shuru1_alpha_111x59);
LV_IMG_DECLARE(_shouye1_alpha_93x73);
LV_IMG_DECLARE(_shuru1_alpha_91x72);
LV_IMG_DECLARE(_touping_alpha_91x73);
LV_IMG_DECLARE(_tupian_alpha_89x73);
LV_IMG_DECLARE(_shiping_alpha_89x72);
LV_IMG_DECLARE(_shizhong_alpha_94x73);
LV_IMG_DECLARE(_wangluo_alpha_87x70);
LV_IMG_DECLARE(_shezhi_alpha_85x70);
LV_IMG_DECLARE(_wangluo_alpha_110x55);
LV_IMG_DECLARE(_touping_alpha_105x55);
LV_IMG_DECLARE(_shuru1_alpha_111x59);
LV_IMG_DECLARE(_shouye1_alpha_93x73);
LV_IMG_DECLARE(_shuru1_alpha_91x72);
LV_IMG_DECLARE(_touping_alpha_91x73);
LV_IMG_DECLARE(_tupian_alpha_89x73);
LV_IMG_DECLARE(_shiping_alpha_89x72);
LV_IMG_DECLARE(_shizhong_alpha_94x73);
LV_IMG_DECLARE(_wangluo_alpha_87x70);
LV_IMG_DECLARE(_shezhi_alpha_85x70);
LV_IMG_DECLARE(_wangluo_alpha_110x55);
LV_IMG_DECLARE(_touping_alpha_105x55);
LV_IMG_DECLARE(_shuru1_alpha_111x59);
LV_IMG_DECLARE(_shouye1_alpha_93x73);
LV_IMG_DECLARE(_shuru1_alpha_91x72);
LV_IMG_DECLARE(_touping_alpha_91x73);
LV_IMG_DECLARE(_tupian_alpha_89x73);
LV_IMG_DECLARE(_shiping_alpha_89x72);
LV_IMG_DECLARE(_shizhong_alpha_94x73);
LV_IMG_DECLARE(_wangluo_alpha_87x70);
LV_IMG_DECLARE(_shezhi_alpha_85x70);
LV_IMG_DECLARE(_liangdu_alpha_47x43);

LV_IMG_DECLARE(_home_bg_mountain_174x54);
LV_IMG_DECLARE(_wangluo_alpha_110x55);
LV_IMG_DECLARE(_touping_alpha_105x55);
LV_IMG_DECLARE(_shuru1_alpha_111x59);
LV_IMG_DECLARE(_shouye1_alpha_93x73);
LV_IMG_DECLARE(_shuru1_alpha_91x72);
LV_IMG_DECLARE(_touping_alpha_91x73);
LV_IMG_DECLARE(_tupian_alpha_89x73);
LV_IMG_DECLARE(_shiping_alpha_89x72);
LV_IMG_DECLARE(_shizhong_alpha_94x73);
LV_IMG_DECLARE(_wangluo_alpha_87x70);
LV_IMG_DECLARE(_shezhi_alpha_85x70);

LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_22)
LV_FONT_DECLARE(lv_font_montserratMedium_22)
LV_FONT_DECLARE(lv_font_montserratMedium_19)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_42)
LV_FONT_DECLARE(lv_font_FontAwesome5_21)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_40)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_24)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_52)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_18)
LV_FONT_DECLARE(lv_font_LiberationSans_45)
LV_FONT_DECLARE(lv_font_montserratMedium_18)
LV_FONT_DECLARE(lv_font_montserratMedium_28)
LV_FONT_DECLARE(lv_font_montserratMedium_25)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_30)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_17)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_33)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_34)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_31)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_28)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_27)
LV_FONT_DECLARE(lv_font_montserratMedium_32)
LV_FONT_DECLARE(lv_font_montserratMedium_24)
LV_FONT_DECLARE(lv_font_montserratMedium_33)
LV_FONT_DECLARE(lv_font_montserratMedium_17)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_38)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_23)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_21)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_26)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_36)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_55)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_19)
LV_FONT_DECLARE(lv_font_montserratMedium_118)
LV_FONT_DECLARE(lv_font_Acme_Regular_205)
LV_FONT_DECLARE(lv_font_Acme_Regular_24)
LV_FONT_DECLARE(lv_font_montserratMedium_21)


#ifdef __cplusplus
}
#endif
#endif
