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



void setup_scr_screen_3(lv_ui *ui)
{
    //Write codes screen_3
    ui->screen_3 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_3, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3, lv_color_hex(0xeef7fb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_bg_placeholder
    ui->screen_3_screen_3_bg_placeholder = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_bg_placeholder_label = lv_label_create(ui->screen_3_screen_3_bg_placeholder);
    lv_label_set_text(ui->screen_3_screen_3_bg_placeholder_label, "");
    lv_label_set_long_mode(ui->screen_3_screen_3_bg_placeholder_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_bg_placeholder_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_bg_placeholder, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_bg_placeholder_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_bg_placeholder, 0, 0);
    lv_obj_set_size(ui->screen_3_screen_3_bg_placeholder, 1920, 1080);

    //Write style for screen_3_screen_3_bg_placeholder, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_bg_placeholder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_bg_placeholder, lv_color_hex(0xeef7fb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_bg_placeholder, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_bg_placeholder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_bg_placeholder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_bg_placeholder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_bg_placeholder, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_bg_placeholder, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_bg_placeholder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_bg_placeholder, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_control_bar
    ui->screen_3_screen_3_control_bar = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_control_bar_label = lv_label_create(ui->screen_3_screen_3_control_bar);
    lv_label_set_text(ui->screen_3_screen_3_control_bar_label, "");
    lv_label_set_long_mode(ui->screen_3_screen_3_control_bar_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_control_bar_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_control_bar, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_control_bar_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_control_bar, 660, 959);
    lv_obj_set_size(ui->screen_3_screen_3_control_bar, 631, 78);

    //Write style for screen_3_screen_3_control_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_control_bar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_control_bar, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_control_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_control_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_control_bar, 39, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_control_bar, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_3_screen_3_control_bar, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_3_screen_3_control_bar, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_3_screen_3_control_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_3_screen_3_control_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_3_screen_3_control_bar, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_control_bar, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_control_bar, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_control_bar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_control_bar, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_zoom_out
    ui->screen_3_screen_3_ctrl_zoom_out = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_zoom_out_label = lv_label_create(ui->screen_3_screen_3_ctrl_zoom_out);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_zoom_out_label, "-");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_zoom_out_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_zoom_out_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_zoom_out, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_zoom_out_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_zoom_out, 1143, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_zoom_out, 52, 52);

    //Write style for screen_3_screen_3_ctrl_zoom_out, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_zoom_out, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_zoom_out, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_zoom_out, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_zoom_out, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_zoom_out, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_zoom_out, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_zoom_out, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_zoom_out, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_zoom_out, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_zoom_out, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_zoom_in
    ui->screen_3_screen_3_ctrl_zoom_in = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_zoom_in_label = lv_label_create(ui->screen_3_screen_3_ctrl_zoom_in);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_zoom_in_label, "+");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_zoom_in_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_zoom_in_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_zoom_in, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_zoom_in_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_zoom_in, 1078, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_zoom_in, 52, 52);

    //Write style for screen_3_screen_3_ctrl_zoom_in, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_zoom_in, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_zoom_in, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_zoom_in, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_zoom_in, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_zoom_in, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_zoom_in, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_zoom_in, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_zoom_in, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_zoom_in, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_zoom_in, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_effect
    ui->screen_3_screen_3_ctrl_effect = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_effect_label = lv_label_create(ui->screen_3_screen_3_ctrl_effect);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_effect_label, "FX");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_effect_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_effect_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_effect, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_effect_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_effect, 1013, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_effect, 52, 52);

    //Write style for screen_3_screen_3_ctrl_effect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_effect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_effect, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_effect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_effect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_effect, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_effect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_effect, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_effect, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_effect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_effect, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_next
    ui->screen_3_screen_3_ctrl_next = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_next_label = lv_label_create(ui->screen_3_screen_3_ctrl_next);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_next_label, "NEXT");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_next_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_next_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_next, 948, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_next, 52, 52);

    //Write style for screen_3_screen_3_ctrl_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_next, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_next, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_next, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_prev
    ui->screen_3_screen_3_ctrl_prev = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_prev_label = lv_label_create(ui->screen_3_screen_3_ctrl_prev);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_prev_label, "PREV");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_prev_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_prev_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_prev, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_prev_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_prev, 883, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_prev, 52, 52);

    //Write style for screen_3_screen_3_ctrl_prev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_prev, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_prev, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_prev, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_prev, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_subtitle
    ui->screen_3_screen_3_subtitle = lv_label_create(ui->screen_3);
    lv_label_set_text(ui->screen_3_screen_3_subtitle, "轮播中 - 无特效 - 背景音乐 开启");
    lv_label_set_long_mode(ui->screen_3_screen_3_subtitle, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_3_screen_3_subtitle, 50, 188);
    lv_obj_set_size(ui->screen_3_screen_3_subtitle, 420, 34);

    //Write style for screen_3_screen_3_subtitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_subtitle, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_subtitle, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_subtitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_subtitle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_title
    ui->screen_3_screen_3_title = lv_label_create(ui->screen_3);
    lv_label_set_text(ui->screen_3_screen_3_title, "Mountain Dawn");
    lv_label_set_long_mode(ui->screen_3_screen_3_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_3_screen_3_title, 50, 135);
    lv_obj_set_size(ui->screen_3_screen_3_title, 300, 48);

    //Write style for screen_3_screen_3_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_title, lv_color_hex(0x242052), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_title, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_count
    ui->screen_3_screen_3_count = lv_label_create(ui->screen_3);
    lv_label_set_text(ui->screen_3_screen_3_count, "1 / 1");
    lv_label_set_long_mode(ui->screen_3_screen_3_count, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_3_screen_3_count, 1835, 43);
    lv_obj_set_size(ui->screen_3_screen_3_count, 55, 36);

    //Write style for screen_3_screen_3_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_count, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_count, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_count, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_page_pill
    ui->screen_3_screen_3_page_pill = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_page_pill_label = lv_label_create(ui->screen_3_screen_3_page_pill);
    lv_label_set_text(ui->screen_3_screen_3_page_pill_label, "图片");
    lv_label_set_long_mode(ui->screen_3_screen_3_page_pill_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_page_pill_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_page_pill, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_page_pill_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_page_pill, 922, 29);
    lv_obj_set_size(ui->screen_3_screen_3_page_pill, 148, 56);

    //Write style for screen_3_screen_3_page_pill, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_page_pill, lv_color_hex(0xf1f0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_page_pill, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_page_pill, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_3_screen_3_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_3_screen_3_page_pill, lv_color_hex(0xbdc4ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_3_screen_3_page_pill, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_page_pill, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_page_pill, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_3_screen_3_page_pill, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_3_screen_3_page_pill, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_3_screen_3_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_3_screen_3_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_3_screen_3_page_pill, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_page_pill, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_page_pill, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_page_pill, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_home_btn
    ui->screen_3_screen_3_home_btn = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_home_btn_label = lv_label_create(ui->screen_3_screen_3_home_btn);
    lv_label_set_text(ui->screen_3_screen_3_home_btn_label, "首页");
    lv_label_set_long_mode(ui->screen_3_screen_3_home_btn_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_home_btn_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_home_btn, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_home_btn_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_home_btn, 42, 29);
    lv_obj_set_size(ui->screen_3_screen_3_home_btn, 111, 56);

    //Write style for screen_3_screen_3_home_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_home_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_home_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_home_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_home_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_home_btn, 29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_home_btn, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_3_screen_3_home_btn, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_3_screen_3_home_btn, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_3_screen_3_home_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_3_screen_3_home_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_3_screen_3_home_btn, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_home_btn, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_home_btn, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_home_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_home_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_cursor_mark
    ui->screen_3_screen_3_cursor_mark = lv_label_create(ui->screen_3);
    lv_label_set_text(ui->screen_3_screen_3_cursor_mark, "|");
    lv_label_set_long_mode(ui->screen_3_screen_3_cursor_mark, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_3_screen_3_cursor_mark, 28, 28);
    lv_obj_set_size(ui->screen_3_screen_3_cursor_mark, 12, 30);

    //Write style for screen_3_screen_3_cursor_mark, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_cursor_mark, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_cursor_mark, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_cursor_mark, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_cursor_mark, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_cursor_mark, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_list
    ui->screen_3_screen_3_ctrl_list = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_list_label = lv_label_create(ui->screen_3_screen_3_ctrl_list);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_list_label, "LIST");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_list_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_list_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_list, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_list_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_list, 690, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_list, 52, 52);

    //Write style for screen_3_screen_3_ctrl_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_list, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_list, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_list, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_list, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_list, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_pause
    ui->screen_3_screen_3_ctrl_pause = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_pause_label = lv_label_create(ui->screen_3_screen_3_ctrl_pause);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_pause_label, "PAUSE");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_pause_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_pause_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_pause, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_pause_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_pause, 754, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_pause, 52, 52);

    //Write style for screen_3_screen_3_ctrl_pause, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_pause, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_pause, lv_color_hex(0xf0efff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_pause, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_pause, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_pause, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_pause, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_3_screen_3_ctrl_pause, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_3_screen_3_ctrl_pause, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_3_screen_3_ctrl_pause, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_3_screen_3_ctrl_pause, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_3_screen_3_ctrl_pause, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_pause, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_pause, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_pause, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_pause, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_stop
    ui->screen_3_screen_3_ctrl_stop = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_stop_label = lv_label_create(ui->screen_3_screen_3_ctrl_stop);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_stop_label, "STOP");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_stop_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_stop_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_stop, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_stop_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_stop, 818, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_stop, 52, 52);

    //Write style for screen_3_screen_3_ctrl_stop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_stop, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_stop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_stop, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_stop, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_stop, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_stop, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_screen_3_ctrl_music
    ui->screen_3_screen_3_ctrl_music = lv_btn_create(ui->screen_3);
    ui->screen_3_screen_3_ctrl_music_label = lv_label_create(ui->screen_3_screen_3_ctrl_music);
    lv_label_set_text(ui->screen_3_screen_3_ctrl_music_label, "M");
    lv_label_set_long_mode(ui->screen_3_screen_3_ctrl_music_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_3_screen_3_ctrl_music_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_screen_3_ctrl_music, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_screen_3_ctrl_music_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_screen_3_ctrl_music, 1208, 971);
    lv_obj_set_size(ui->screen_3_screen_3_ctrl_music, 52, 52);

    //Write style for screen_3_screen_3_ctrl_music, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_screen_3_ctrl_music, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_screen_3_ctrl_music, lv_color_hex(0xf0efff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_screen_3_ctrl_music, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_screen_3_ctrl_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_screen_3_ctrl_music, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_screen_3_ctrl_music, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_3_screen_3_ctrl_music, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_3_screen_3_ctrl_music, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_3_screen_3_ctrl_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_3_screen_3_ctrl_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_3_screen_3_ctrl_music, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_screen_3_ctrl_music, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_screen_3_ctrl_music, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_screen_3_ctrl_music, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_screen_3_ctrl_music, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_3.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_3);

}
