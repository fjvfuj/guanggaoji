/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_4(lv_ui *ui)
{
    //Write codes screen_4
    ui->screen_4 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_4, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4, lv_color_hex(0xeef7fb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_left_image_hint
    ui->screen_4_screen_4_left_image_hint = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_left_image_hint_label = lv_label_create(ui->screen_4_screen_4_left_image_hint);
    lv_label_set_text(ui->screen_4_screen_4_left_image_hint_label, "");
    lv_label_set_long_mode(ui->screen_4_screen_4_left_image_hint_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_left_image_hint_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_left_image_hint, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_left_image_hint_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_left_image_hint, 0, 0);
    lv_obj_set_size(ui->screen_4_screen_4_left_image_hint, 980, 1080);

    //Write style for screen_4_screen_4_left_image_hint, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_left_image_hint, 95, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_left_image_hint, lv_color_hex(0xd9d0c8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_left_image_hint, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_left_image_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_left_image_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_left_image_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_left_image_hint, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_left_image_hint, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_left_image_hint, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_left_image_hint, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_bg_placeholder
    ui->screen_4_screen_4_bg_placeholder = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_bg_placeholder_label = lv_label_create(ui->screen_4_screen_4_bg_placeholder);
    lv_label_set_text(ui->screen_4_screen_4_bg_placeholder_label, "");
    lv_label_set_long_mode(ui->screen_4_screen_4_bg_placeholder_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_bg_placeholder_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_bg_placeholder, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_bg_placeholder_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_bg_placeholder, 0, 0);
    lv_obj_set_size(ui->screen_4_screen_4_bg_placeholder, 1920, 1080);

    //Write style for screen_4_screen_4_bg_placeholder, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_bg_placeholder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_bg_placeholder, lv_color_hex(0xeef7fb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_bg_placeholder, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_bg_placeholder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_bg_placeholder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_bg_placeholder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_bg_placeholder, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_bg_placeholder, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_bg_placeholder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_bg_placeholder, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_control_bar
    ui->screen_4_screen_4_control_bar = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_control_bar_label = lv_label_create(ui->screen_4_screen_4_control_bar);
    lv_label_set_text(ui->screen_4_screen_4_control_bar_label, "");
    lv_label_set_long_mode(ui->screen_4_screen_4_control_bar_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_control_bar_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_control_bar, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_control_bar_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_control_bar, 723, 963);
    lv_obj_set_size(ui->screen_4_screen_4_control_bar, 472, 78);

    //Write style for screen_4_screen_4_control_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_control_bar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_control_bar, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_control_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_control_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_control_bar, 39, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_control_bar, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_4_screen_4_control_bar, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_4_screen_4_control_bar, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_4_screen_4_control_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_4_screen_4_control_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_4_screen_4_control_bar, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_control_bar, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_control_bar, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_control_bar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_control_bar, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_progress_panel
    ui->screen_4_screen_4_progress_panel = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_progress_panel_label = lv_label_create(ui->screen_4_screen_4_progress_panel);
    lv_label_set_text(ui->screen_4_screen_4_progress_panel_label, "");
    lv_label_set_long_mode(ui->screen_4_screen_4_progress_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_progress_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_progress_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_progress_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_progress_panel, 302, 866);
    lv_obj_set_size(ui->screen_4_screen_4_progress_panel, 1314, 79);

    //Write style for screen_4_screen_4_progress_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_progress_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_progress_panel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_progress_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_progress_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_progress_panel, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_progress_panel, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_4_screen_4_progress_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_4_screen_4_progress_panel, 32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_4_screen_4_progress_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_4_screen_4_progress_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_4_screen_4_progress_panel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_progress_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_progress_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_progress_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_progress_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_frost_overlay
    ui->screen_4_screen_4_frost_overlay = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_frost_overlay_label = lv_label_create(ui->screen_4_screen_4_frost_overlay);
    lv_label_set_text(ui->screen_4_screen_4_frost_overlay_label, "");
    lv_label_set_long_mode(ui->screen_4_screen_4_frost_overlay_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_frost_overlay_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_frost_overlay, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_frost_overlay_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_frost_overlay, 0, 0);
    lv_obj_set_size(ui->screen_4_screen_4_frost_overlay, 1920, 1080);

    //Write style for screen_4_screen_4_frost_overlay, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_frost_overlay, 135, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_frost_overlay, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_frost_overlay, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_frost_overlay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_frost_overlay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_frost_overlay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_frost_overlay, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_frost_overlay, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_frost_overlay, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_frost_overlay, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_volume
    ui->screen_4_screen_4_ctrl_volume = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_volume_label = lv_label_create(ui->screen_4_screen_4_ctrl_volume);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_volume_label, "VOL");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_volume_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_volume_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_volume, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_volume_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_volume, 1135, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_volume, 52, 52);

    //Write style for screen_4_screen_4_ctrl_volume, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_volume, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_volume, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_volume, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_volume, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_volume, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_volume, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_volume, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_volume, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_full
    ui->screen_4_screen_4_ctrl_full = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_full_label = lv_label_create(ui->screen_4_screen_4_ctrl_full);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_full_label, "FULL");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_full_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_full_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_full, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_full_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_full, 1070, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_full, 52, 52);

    //Write style for screen_4_screen_4_ctrl_full, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_full, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_full, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_full, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_full, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_full, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_full, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_full, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_full, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_full, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_full, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_next
    ui->screen_4_screen_4_ctrl_next = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_next_label = lv_label_create(ui->screen_4_screen_4_ctrl_next);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_next_label, "NEXT");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_next_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_next_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_next, 1005, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_next, 52, 52);

    //Write style for screen_4_screen_4_ctrl_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_next, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_next, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_next, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_prev
    ui->screen_4_screen_4_ctrl_prev = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_prev_label = lv_label_create(ui->screen_4_screen_4_ctrl_prev);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_prev_label, "PREV");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_prev_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_prev_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_prev, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_prev_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_prev, 940, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_prev, 52, 52);

    //Write style for screen_4_screen_4_ctrl_prev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_prev, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_prev, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_prev, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_prev, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_stop
    ui->screen_4_screen_4_ctrl_stop = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_stop_label = lv_label_create(ui->screen_4_screen_4_ctrl_stop);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_stop_label, "STOP");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_stop_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_stop_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_stop, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_stop_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_stop, 875, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_stop, 52, 52);

    //Write style for screen_4_screen_4_ctrl_stop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_stop, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_stop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_stop, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_stop, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_stop, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_stop, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_play
    ui->screen_4_screen_4_ctrl_play = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_play_label = lv_label_create(ui->screen_4_screen_4_ctrl_play);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_play_label, "PLAY");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_play_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_play_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_play, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_play_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_play, 811, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_play, 52, 52);

    //Write style for screen_4_screen_4_ctrl_play, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_play, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_play, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_play, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_play, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_play, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_play, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_play, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_play, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_ctrl_list
    ui->screen_4_screen_4_ctrl_list = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_ctrl_list_label = lv_label_create(ui->screen_4_screen_4_ctrl_list);
    lv_label_set_text(ui->screen_4_screen_4_ctrl_list_label, "LIST");
    lv_label_set_long_mode(ui->screen_4_screen_4_ctrl_list_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_ctrl_list_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_ctrl_list, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_ctrl_list_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_ctrl_list, 748, 975);
    lv_obj_set_size(ui->screen_4_screen_4_ctrl_list, 52, 52);

    //Write style for screen_4_screen_4_ctrl_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_ctrl_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_ctrl_list, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_ctrl_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_ctrl_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_ctrl_list, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_ctrl_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_ctrl_list, lv_color_hex(0x415574), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_ctrl_list, &lv_font_SourceHanSerifSC_Regular_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_ctrl_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_ctrl_list, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_progress_time
    ui->screen_4_screen_4_progress_time = lv_label_create(ui->screen_4);
    lv_label_set_text(ui->screen_4_screen_4_progress_time, "00:02:18 / 00:06:04");
    lv_label_set_long_mode(ui->screen_4_screen_4_progress_time, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_4_screen_4_progress_time, 1385, 907);
    lv_obj_set_size(ui->screen_4_screen_4_progress_time, 203, 28);

    //Write style for screen_4_screen_4_progress_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_progress_time, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_progress_time, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_progress_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_progress_time, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_progress_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_time_top
    ui->screen_4_screen_4_time_top = lv_label_create(ui->screen_4);
    lv_label_set_text(ui->screen_4_screen_4_time_top, "00:02:18");
    lv_label_set_long_mode(ui->screen_4_screen_4_time_top, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_4_screen_4_time_top, 1780, 38);
    lv_obj_set_size(ui->screen_4_screen_4_time_top, 105, 34);

    //Write style for screen_4_screen_4_time_top, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_time_top, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_time_top, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_time_top, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_time_top, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_time_top, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_page_pill
    ui->screen_4_screen_4_page_pill = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_page_pill_label = lv_label_create(ui->screen_4_screen_4_page_pill);
    lv_label_set_text(ui->screen_4_screen_4_page_pill_label, "视频");
    lv_label_set_long_mode(ui->screen_4_screen_4_page_pill_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_page_pill_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_page_pill, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_page_pill_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_page_pill, 890, 25);
    lv_obj_set_size(ui->screen_4_screen_4_page_pill, 142, 53);

    //Write style for screen_4_screen_4_page_pill, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_page_pill, lv_color_hex(0xf1f0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_page_pill, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_page_pill, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_4_screen_4_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_4_screen_4_page_pill, lv_color_hex(0xbdc4ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_4_screen_4_page_pill, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_page_pill, 27, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_page_pill, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_4_screen_4_page_pill, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_4_screen_4_page_pill, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_4_screen_4_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_4_screen_4_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_4_screen_4_page_pill, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_page_pill, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_page_pill, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_page_pill, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_screen_4_home_btn
    ui->screen_4_screen_4_home_btn = lv_btn_create(ui->screen_4);
    ui->screen_4_screen_4_home_btn_label = lv_label_create(ui->screen_4_screen_4_home_btn);
    lv_label_set_text(ui->screen_4_screen_4_home_btn_label, "首页");
    lv_label_set_long_mode(ui->screen_4_screen_4_home_btn_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_4_screen_4_home_btn_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_4_screen_4_home_btn, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_4_screen_4_home_btn_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_4_screen_4_home_btn, 37, 25);
    lv_obj_set_size(ui->screen_4_screen_4_home_btn, 119, 55);

    //Write style for screen_4_screen_4_home_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_screen_4_home_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_screen_4_home_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_screen_4_home_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_4_screen_4_home_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_screen_4_home_btn, 29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_screen_4_home_btn, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_4_screen_4_home_btn, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_4_screen_4_home_btn, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_4_screen_4_home_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_4_screen_4_home_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_4_screen_4_home_btn, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_4_screen_4_home_btn, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_4_screen_4_home_btn, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_4_screen_4_home_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_4_screen_4_home_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_4_bar_1
    ui->screen_4_bar_1 = lv_bar_create(ui->screen_4);
    lv_obj_set_style_anim_time(ui->screen_4_bar_1, 1000, 0);
    lv_bar_set_mode(ui->screen_4_bar_1, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_4_bar_1, 0, 100);
    lv_bar_set_value(ui->screen_4_bar_1, 50, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_4_bar_1, 323, 880);
    lv_obj_set_size(ui->screen_4_bar_1, 1286, 20);

    //Write style for screen_4_bar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_bar_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_bar_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_4_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_4_bar_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_4_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_4_bar_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_4_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_4_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //The custom code of screen_4.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_4);

}
