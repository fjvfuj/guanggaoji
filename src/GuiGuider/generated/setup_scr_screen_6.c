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



void setup_scr_screen_6(lv_ui *ui)
{
    //Write codes screen_6
    ui->screen_6 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_6, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_6, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6, lv_color_hex(0xf5f7fb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_btn_6
    ui->screen_6_btn_6 = lv_btn_create(ui->screen_6);
    ui->screen_6_btn_6_label = lv_label_create(ui->screen_6_btn_6);
    lv_label_set_text(ui->screen_6_btn_6_label, "");
    lv_label_set_long_mode(ui->screen_6_btn_6_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_btn_6, 22, 973);
    lv_obj_set_size(ui->screen_6_btn_6, 1831, 76);

    //Write style for screen_6_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_btn_6, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_btn_6, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_btn_6, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_btn_4
    ui->screen_6_btn_4 = lv_btn_create(ui->screen_6);
    ui->screen_6_btn_4_label = lv_label_create(ui->screen_6_btn_4);
    lv_label_set_text(ui->screen_6_btn_4_label, "");
    lv_label_set_long_mode(ui->screen_6_btn_4_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_btn_4, 37, 60);
    lv_obj_set_size(ui->screen_6_btn_4, 187, 52);

    //Write style for screen_6_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_btn_4, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_btn_4, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_btn_4, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_btn_4, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_btn_4, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_btn_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_right_panel
    ui->screen_6_screen_6_right_panel = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_right_panel_label = lv_label_create(ui->screen_6_screen_6_right_panel);
    lv_label_set_text(ui->screen_6_screen_6_right_panel_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_right_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_right_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_right_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_right_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_right_panel, 518, 154);
    lv_obj_set_size(ui->screen_6_screen_6_right_panel, 1338, 759);

    //Write style for screen_6_screen_6_right_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_right_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_right_panel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_right_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_right_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_right_panel, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_right_panel, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_right_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_right_panel, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_right_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_right_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_right_panel, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_right_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_right_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_right_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_right_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_info_bg
    ui->screen_6_screen_6_row_info_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_info_bg_label = lv_label_create(ui->screen_6_screen_6_row_info_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_info_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_info_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_info_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_info_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_info_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_info_bg, 560, 778);
    lv_obj_set_size(ui->screen_6_screen_6_row_info_bg, 1260, 100);

    //Write style for screen_6_screen_6_row_info_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_info_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_info_bg, lv_color_hex(0xf8fafc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_info_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_info_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_info_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_info_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_info_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_info_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_info_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_info_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_info_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_info_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_info_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_info_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_info_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_upgrade_bg
    ui->screen_6_screen_6_row_upgrade_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_upgrade_bg_label = lv_label_create(ui->screen_6_screen_6_row_upgrade_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_upgrade_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_upgrade_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_upgrade_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_upgrade_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_upgrade_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_upgrade_bg, 560, 660);
    lv_obj_set_size(ui->screen_6_screen_6_row_upgrade_bg, 1260, 100);

    //Write style for screen_6_screen_6_row_upgrade_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_upgrade_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_upgrade_bg, lv_color_hex(0xf8fafc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_upgrade_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_upgrade_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_upgrade_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_upgrade_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_upgrade_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_upgrade_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_upgrade_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_upgrade_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_upgrade_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_upgrade_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_upgrade_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_upgrade_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_upgrade_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_language_bg
    ui->screen_6_screen_6_row_language_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_language_bg_label = lv_label_create(ui->screen_6_screen_6_row_language_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_language_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_language_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_language_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_language_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_language_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_language_bg, 560, 542);
    lv_obj_set_size(ui->screen_6_screen_6_row_language_bg, 1260, 100);

    //Write style for screen_6_screen_6_row_language_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_language_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_language_bg, lv_color_hex(0xf8fafc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_language_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_language_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_language_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_language_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_language_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_language_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_language_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_language_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_language_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_language_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_language_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_language_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_language_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_scale_bg
    ui->screen_6_screen_6_row_scale_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_scale_bg_label = lv_label_create(ui->screen_6_screen_6_row_scale_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_scale_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_scale_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_scale_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_scale_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_scale_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_scale_bg, 560, 424);
    lv_obj_set_size(ui->screen_6_screen_6_row_scale_bg, 1260, 100);

    //Write style for screen_6_screen_6_row_scale_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_scale_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_scale_bg, lv_color_hex(0xf8fafc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_scale_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_scale_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_scale_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_scale_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_scale_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_scale_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_scale_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_scale_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_scale_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_scale_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_scale_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_scale_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_scale_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_brightness_bg
    ui->screen_6_screen_6_row_brightness_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_brightness_bg_label = lv_label_create(ui->screen_6_screen_6_row_brightness_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_brightness_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_brightness_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_brightness_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_brightness_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_brightness_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_brightness_bg, 560, 306);
    lv_obj_set_size(ui->screen_6_screen_6_row_brightness_bg, 1260, 100);

    //Write style for screen_6_screen_6_row_brightness_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_brightness_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_brightness_bg, lv_color_hex(0xf8fafc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_brightness_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_brightness_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_brightness_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_brightness_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_brightness_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_brightness_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_brightness_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_brightness_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_brightness_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_brightness_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_brightness_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_brightness_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_brightness_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_volume_bg
    ui->screen_6_screen_6_row_volume_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_volume_bg_label = lv_label_create(ui->screen_6_screen_6_row_volume_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_volume_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_volume_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_volume_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_volume_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_volume_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_volume_bg, 560, 188);
    lv_obj_set_size(ui->screen_6_screen_6_row_volume_bg, 1260, 100);

    //Write style for screen_6_screen_6_row_volume_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_volume_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_volume_bg, lv_color_hex(0xf8fafc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_volume_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_volume_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_volume_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_volume_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_volume_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_volume_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_volume_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_volume_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_volume_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_volume_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_volume_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_volume_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_volume_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_left_panel
    ui->screen_6_screen_6_left_panel = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_left_panel_label = lv_label_create(ui->screen_6_screen_6_left_panel);
    lv_label_set_text(ui->screen_6_screen_6_left_panel_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_left_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_left_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_left_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_left_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_left_panel, 61, 154);
    lv_obj_set_size(ui->screen_6_screen_6_left_panel, 435, 759);

    //Write style for screen_6_screen_6_left_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_left_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_left_panel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_left_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_left_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_left_panel, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_left_panel, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_left_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_left_panel, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_left_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_left_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_left_panel, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_left_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_left_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_left_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_left_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_info_arrow
    ui->screen_6_screen_6_row_info_arrow = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_info_arrow, ">");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_info_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_info_arrow, 1760, 813);
    lv_obj_set_size(ui->screen_6_screen_6_row_info_arrow, 30, 35);

    //Write style for screen_6_screen_6_row_info_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_info_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_info_arrow, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_info_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_info_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_info_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_info_value
    ui->screen_6_screen_6_row_info_value = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_info_value, "V2.1.0");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_info_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_info_value, 1590, 814);
    lv_obj_set_size(ui->screen_6_screen_6_row_info_value, 150, 35);

    //Write style for screen_6_screen_6_row_info_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_info_value, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_info_value, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_info_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_info_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_info_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_info_title
    ui->screen_6_screen_6_row_info_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_info_title, "版本信息");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_info_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_info_title, 1060, 814);
    lv_obj_set_size(ui->screen_6_screen_6_row_info_title, 230, 35);

    //Write style for screen_6_screen_6_row_info_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_info_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_info_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_info_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_info_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_info_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_info_icon
    ui->screen_6_screen_6_row_info_icon = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_info_icon, "i");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_info_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_info_icon, 584, 816);
    lv_obj_set_size(ui->screen_6_screen_6_row_info_icon, 57, 28);

    //Write style for screen_6_screen_6_row_info_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_info_icon, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_info_icon, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_info_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_info_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_info_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_info_icon_bg
    ui->screen_6_screen_6_row_info_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_info_icon_bg_label = lv_label_create(ui->screen_6_screen_6_row_info_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_info_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_info_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_info_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_info_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_info_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_info_icon_bg, 584, 800);
    lv_obj_set_size(ui->screen_6_screen_6_row_info_icon_bg, 57, 57);

    //Write style for screen_6_screen_6_row_info_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_info_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_info_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_info_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_info_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_info_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_info_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_info_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_info_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_info_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_info_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_info_icon_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_info_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_info_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_info_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_info_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_upgrade_arrow
    ui->screen_6_screen_6_row_upgrade_arrow = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_upgrade_arrow, ">");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_upgrade_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_upgrade_arrow, 1760, 695);
    lv_obj_set_size(ui->screen_6_screen_6_row_upgrade_arrow, 30, 35);

    //Write style for screen_6_screen_6_row_upgrade_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_upgrade_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_upgrade_arrow, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_upgrade_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_upgrade_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_upgrade_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_upgrade_value
    ui->screen_6_screen_6_row_upgrade_value = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_upgrade_value, "已是最新版本");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_upgrade_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_upgrade_value, 1590, 696);
    lv_obj_set_size(ui->screen_6_screen_6_row_upgrade_value, 150, 35);

    //Write style for screen_6_screen_6_row_upgrade_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_upgrade_value, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_upgrade_value, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_upgrade_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_upgrade_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_upgrade_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_upgrade_title
    ui->screen_6_screen_6_row_upgrade_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_upgrade_title, "系统升级");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_upgrade_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_upgrade_title, 1060, 696);
    lv_obj_set_size(ui->screen_6_screen_6_row_upgrade_title, 230, 35);

    //Write style for screen_6_screen_6_row_upgrade_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_upgrade_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_upgrade_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_upgrade_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_upgrade_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_upgrade_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_upgrade_icon
    ui->screen_6_screen_6_row_upgrade_icon = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_upgrade_icon, "UP");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_upgrade_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_upgrade_icon, 584, 698);
    lv_obj_set_size(ui->screen_6_screen_6_row_upgrade_icon, 57, 28);

    //Write style for screen_6_screen_6_row_upgrade_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_upgrade_icon, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_upgrade_icon, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_upgrade_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_upgrade_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_upgrade_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_upgrade_icon_bg
    ui->screen_6_screen_6_row_upgrade_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_upgrade_icon_bg_label = lv_label_create(ui->screen_6_screen_6_row_upgrade_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_upgrade_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_upgrade_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_upgrade_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_upgrade_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_upgrade_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_upgrade_icon_bg, 584, 682);
    lv_obj_set_size(ui->screen_6_screen_6_row_upgrade_icon_bg, 57, 57);

    //Write style for screen_6_screen_6_row_upgrade_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_upgrade_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_upgrade_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_upgrade_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_upgrade_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_upgrade_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_upgrade_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_upgrade_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_upgrade_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_upgrade_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_upgrade_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_upgrade_icon_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_upgrade_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_upgrade_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_upgrade_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_upgrade_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_language_arrow
    ui->screen_6_screen_6_row_language_arrow = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_language_arrow, ">");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_language_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_language_arrow, 1760, 577);
    lv_obj_set_size(ui->screen_6_screen_6_row_language_arrow, 30, 35);

    //Write style for screen_6_screen_6_row_language_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_language_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_language_arrow, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_language_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_language_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_language_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_language_value
    ui->screen_6_screen_6_row_language_value = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_language_value, "简体中文");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_language_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_language_value, 1590, 578);
    lv_obj_set_size(ui->screen_6_screen_6_row_language_value, 150, 35);

    //Write style for screen_6_screen_6_row_language_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_language_value, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_language_value, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_language_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_language_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_language_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_language_title
    ui->screen_6_screen_6_row_language_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_language_title, "语言");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_language_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_language_title, 1060, 578);
    lv_obj_set_size(ui->screen_6_screen_6_row_language_title, 230, 35);

    //Write style for screen_6_screen_6_row_language_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_language_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_language_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_language_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_language_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_language_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_language_icon
    ui->screen_6_screen_6_row_language_icon = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_language_icon, "A");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_language_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_language_icon, 584, 580);
    lv_obj_set_size(ui->screen_6_screen_6_row_language_icon, 57, 28);

    //Write style for screen_6_screen_6_row_language_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_language_icon, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_language_icon, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_language_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_language_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_language_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_language_icon_bg
    ui->screen_6_screen_6_row_language_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_language_icon_bg_label = lv_label_create(ui->screen_6_screen_6_row_language_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_language_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_language_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_language_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_language_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_language_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_language_icon_bg, 584, 564);
    lv_obj_set_size(ui->screen_6_screen_6_row_language_icon_bg, 57, 57);

    //Write style for screen_6_screen_6_row_language_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_language_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_language_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_language_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_language_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_language_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_language_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_language_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_language_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_language_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_language_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_language_icon_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_language_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_language_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_language_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_language_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_scale_arrow
    ui->screen_6_screen_6_row_scale_arrow = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_scale_arrow, ">");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_scale_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_scale_arrow, 1760, 459);
    lv_obj_set_size(ui->screen_6_screen_6_row_scale_arrow, 30, 35);

    //Write style for screen_6_screen_6_row_scale_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_scale_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_scale_arrow, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_scale_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_scale_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_scale_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_scale_value
    ui->screen_6_screen_6_row_scale_value = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_scale_value, "自适应");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_scale_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_scale_value, 1590, 460);
    lv_obj_set_size(ui->screen_6_screen_6_row_scale_value, 150, 35);

    //Write style for screen_6_screen_6_row_scale_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_scale_value, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_scale_value, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_scale_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_scale_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_scale_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_scale_title
    ui->screen_6_screen_6_row_scale_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_scale_title, "显示比例");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_scale_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_scale_title, 1060, 460);
    lv_obj_set_size(ui->screen_6_screen_6_row_scale_title, 230, 35);

    //Write style for screen_6_screen_6_row_scale_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_scale_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_scale_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_scale_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_scale_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_scale_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_scale_icon
    ui->screen_6_screen_6_row_scale_icon = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_scale_icon, "ZOOM");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_scale_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_scale_icon, 584, 462);
    lv_obj_set_size(ui->screen_6_screen_6_row_scale_icon, 57, 28);

    //Write style for screen_6_screen_6_row_scale_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_scale_icon, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_scale_icon, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_scale_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_scale_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_scale_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_scale_icon_bg
    ui->screen_6_screen_6_row_scale_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_scale_icon_bg_label = lv_label_create(ui->screen_6_screen_6_row_scale_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_scale_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_scale_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_scale_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_scale_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_scale_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_scale_icon_bg, 584, 446);
    lv_obj_set_size(ui->screen_6_screen_6_row_scale_icon_bg, 57, 57);

    //Write style for screen_6_screen_6_row_scale_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_scale_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_scale_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_scale_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_scale_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_scale_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_scale_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_scale_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_scale_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_scale_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_scale_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_scale_icon_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_scale_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_scale_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_scale_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_scale_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_brightness_arrow
    ui->screen_6_screen_6_row_brightness_arrow = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_brightness_arrow, ">");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_brightness_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_brightness_arrow, 1760, 341);
    lv_obj_set_size(ui->screen_6_screen_6_row_brightness_arrow, 30, 35);

    //Write style for screen_6_screen_6_row_brightness_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_brightness_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_brightness_arrow, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_brightness_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_brightness_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_brightness_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_brightness_value
    ui->screen_6_screen_6_row_brightness_value = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_brightness_value, "100");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_brightness_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_brightness_value, 1590, 342);
    lv_obj_set_size(ui->screen_6_screen_6_row_brightness_value, 150, 35);

    //Write style for screen_6_screen_6_row_brightness_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_brightness_value, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_brightness_value, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_brightness_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_brightness_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_brightness_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_brightness_title
    ui->screen_6_screen_6_row_brightness_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_brightness_title, "屏幕亮度");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_brightness_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_brightness_title, 1060, 342);
    lv_obj_set_size(ui->screen_6_screen_6_row_brightness_title, 230, 35);

    //Write style for screen_6_screen_6_row_brightness_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_brightness_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_brightness_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_brightness_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_brightness_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_brightness_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_brightness_icon
    ui->screen_6_screen_6_row_brightness_icon = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_brightness_icon, "SUN");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_brightness_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_brightness_icon, 584, 344);
    lv_obj_set_size(ui->screen_6_screen_6_row_brightness_icon, 57, 28);

    //Write style for screen_6_screen_6_row_brightness_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_brightness_icon, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_brightness_icon, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_brightness_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_brightness_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_brightness_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_brightness_icon_bg
    ui->screen_6_screen_6_row_brightness_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_brightness_icon_bg_label = lv_label_create(ui->screen_6_screen_6_row_brightness_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_brightness_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_brightness_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_brightness_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_brightness_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_brightness_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_brightness_icon_bg, 584, 328);
    lv_obj_set_size(ui->screen_6_screen_6_row_brightness_icon_bg, 57, 57);

    //Write style for screen_6_screen_6_row_brightness_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_brightness_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_brightness_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_brightness_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_brightness_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_brightness_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_brightness_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_brightness_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_brightness_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_brightness_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_brightness_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_brightness_icon_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_brightness_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_brightness_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_brightness_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_brightness_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_volume_arrow
    ui->screen_6_screen_6_row_volume_arrow = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_volume_arrow, ">");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_volume_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_volume_arrow, 1760, 223);
    lv_obj_set_size(ui->screen_6_screen_6_row_volume_arrow, 30, 35);

    //Write style for screen_6_screen_6_row_volume_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_volume_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_volume_arrow, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_volume_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_volume_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_volume_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_volume_value
    ui->screen_6_screen_6_row_volume_value = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_volume_value, "80%");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_volume_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_volume_value, 1590, 224);
    lv_obj_set_size(ui->screen_6_screen_6_row_volume_value, 150, 35);

    //Write style for screen_6_screen_6_row_volume_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_volume_value, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_volume_value, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_volume_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_volume_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_volume_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_volume_title
    ui->screen_6_screen_6_row_volume_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_volume_title, "音量");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_volume_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_volume_title, 1060, 224);
    lv_obj_set_size(ui->screen_6_screen_6_row_volume_title, 230, 35);

    //Write style for screen_6_screen_6_row_volume_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_volume_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_volume_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_volume_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_volume_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_volume_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_volume_icon
    ui->screen_6_screen_6_row_volume_icon = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_row_volume_icon, "VOL");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_volume_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_row_volume_icon, 584, 226);
    lv_obj_set_size(ui->screen_6_screen_6_row_volume_icon, 57, 28);

    //Write style for screen_6_screen_6_row_volume_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_volume_icon, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_volume_icon, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_volume_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_volume_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_volume_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_left_desc
    ui->screen_6_screen_6_left_desc = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_left_desc, "调整音量、亮度、语言、显示比例和系统升级等参数。");
    lv_label_set_long_mode(ui->screen_6_screen_6_left_desc, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_left_desc, 136, 632);
    lv_obj_set_size(ui->screen_6_screen_6_left_desc, 290, 36);

    //Write style for screen_6_screen_6_left_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_left_desc, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_left_desc, &lv_font_SourceHanSerifSC_Regular_21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_left_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_left_desc, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_left_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_left_title
    ui->screen_6_screen_6_left_title = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_left_title, "系统设置");
    lv_label_set_long_mode(ui->screen_6_screen_6_left_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_left_title, 160, 552);
    lv_obj_set_size(ui->screen_6_screen_6_left_title, 240, 55);

    //Write style for screen_6_screen_6_left_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_left_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_left_title, &lv_font_SourceHanSerifSC_Regular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_left_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_left_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_left_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_left_icon_text
    ui->screen_6_screen_6_left_icon_text = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_screen_6_left_icon_text, "SET");
    lv_label_set_long_mode(ui->screen_6_screen_6_left_icon_text, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_screen_6_left_icon_text, 222, 446);
    lv_obj_set_size(ui->screen_6_screen_6_left_icon_text, 112, 36);

    //Write style for screen_6_screen_6_left_icon_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_left_icon_text, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_left_icon_text, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_left_icon_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_left_icon_text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_left_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_left_icon_bg
    ui->screen_6_screen_6_left_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_left_icon_bg_label = lv_label_create(ui->screen_6_screen_6_left_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_left_icon_bg_label, " " LV_SYMBOL_SETTINGS " ");
    lv_label_set_long_mode(ui->screen_6_screen_6_left_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_left_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_left_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_left_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_left_icon_bg, 224, 406);
    lv_obj_set_size(ui->screen_6_screen_6_left_icon_bg, 112, 112);

    //Write style for screen_6_screen_6_left_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_left_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_left_icon_bg, lv_color_hex(0x6b45f4), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_left_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_left_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_left_icon_bg, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_left_icon_bg, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_left_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_left_icon_bg, 90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_left_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_left_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_left_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_left_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_left_icon_bg, &lv_font_SourceHanSerifSC_Regular_55, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_left_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_left_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_page_pill
    ui->screen_6_screen_6_page_pill = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_page_pill_label = lv_label_create(ui->screen_6_screen_6_page_pill);
    lv_label_set_text(ui->screen_6_screen_6_page_pill_label, "设置");
    lv_label_set_long_mode(ui->screen_6_screen_6_page_pill_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_page_pill_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_page_pill, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_page_pill_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_page_pill, 789, 60);
    lv_obj_set_size(ui->screen_6_screen_6_page_pill, 175, 64);

    //Write style for screen_6_screen_6_page_pill, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_page_pill, lv_color_hex(0xf1f0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_page_pill, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_page_pill, 32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_page_pill, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_page_pill, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_page_pill, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_page_pill, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_page_pill, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_page_pill, &lv_font_SourceHanSerifSC_Regular_23, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_page_pill, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_screen_6_row_volume_icon_bg
    ui->screen_6_screen_6_row_volume_icon_bg = lv_btn_create(ui->screen_6);
    ui->screen_6_screen_6_row_volume_icon_bg_label = lv_label_create(ui->screen_6_screen_6_row_volume_icon_bg);
    lv_label_set_text(ui->screen_6_screen_6_row_volume_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_6_screen_6_row_volume_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_screen_6_row_volume_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_screen_6_row_volume_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_screen_6_row_volume_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_screen_6_row_volume_icon_bg, 584, 210);
    lv_obj_set_size(ui->screen_6_screen_6_row_volume_icon_bg, 57, 57);

    //Write style for screen_6_screen_6_row_volume_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_screen_6_row_volume_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_screen_6_row_volume_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_screen_6_row_volume_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_screen_6_row_volume_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_screen_6_row_volume_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_screen_6_row_volume_icon_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_screen_6_row_volume_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_screen_6_row_volume_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_screen_6_row_volume_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_screen_6_row_volume_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_screen_6_row_volume_icon_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_screen_6_row_volume_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_screen_6_row_volume_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_screen_6_row_volume_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_screen_6_row_volume_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_btn_3
    ui->screen_6_btn_3 = lv_btn_create(ui->screen_6);
    ui->screen_6_btn_3_label = lv_label_create(ui->screen_6_btn_3);
    lv_label_set_text(ui->screen_6_btn_3_label, "       网络");
    lv_label_set_long_mode(ui->screen_6_btn_3_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_btn_3, 1751, 72);
    lv_obj_set_size(ui->screen_6_btn_3, 109, 52);

    //Write style for screen_6_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_btn_3, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_btn_3, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_btn_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_label_1
    ui->screen_6_label_1 = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_label_1, "" LV_SYMBOL_WIFI " ");
    lv_label_set_long_mode(ui->screen_6_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_6_label_1, 1732, 87);
    lv_obj_set_size(ui->screen_6_label_1, 100, 32);

    //Write style for screen_6_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_label_1, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_btn_2
    ui->screen_6_btn_2 = lv_btn_create(ui->screen_6);
    ui->screen_6_btn_2_label = lv_label_create(ui->screen_6_btn_2);
    lv_label_set_text(ui->screen_6_btn_2_label, "      投屏");
    lv_label_set_long_mode(ui->screen_6_btn_2_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_btn_2, 1631, 72);
    lv_obj_set_size(ui->screen_6_btn_2, 106, 52);

    //Write style for screen_6_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_btn_2, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_btn_2, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_btn_2, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_imgbtn_2
    ui->screen_6_imgbtn_2 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_touping1_alpha_40x27, NULL);
    ui->screen_6_imgbtn_2_label = lv_label_create(ui->screen_6_imgbtn_2);
    lv_label_set_text(ui->screen_6_imgbtn_2_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_2, 1640, 83);
    lv_obj_set_size(ui->screen_6_imgbtn_2, 40, 27);

    //Write style for screen_6_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_2, &lv_font_montserratMedium_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_2, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_2, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_btn_1
    ui->screen_6_btn_1 = lv_btn_create(ui->screen_6);
    ui->screen_6_btn_1_label = lv_label_create(ui->screen_6_btn_1);
    lv_label_set_text(ui->screen_6_btn_1_label, "         输入");
    lv_label_set_long_mode(ui->screen_6_btn_1_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_btn_1, 1490, 72);
    lv_obj_set_size(ui->screen_6_btn_1, 121, 52);

    //Write style for screen_6_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_btn_1, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_btn_1, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_btn_1, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_imgbtn_1
    ui->screen_6_imgbtn_1 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_shuru_alpha_44x41, NULL);
    ui->screen_6_imgbtn_1_label = lv_label_create(ui->screen_6_imgbtn_1);
    lv_label_set_text(ui->screen_6_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_1, 1504, 78);
    lv_obj_set_size(ui->screen_6_imgbtn_1, 44, 41);

    //Write style for screen_6_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_btn_5
    ui->screen_6_btn_5 = lv_btn_create(ui->screen_6);
    ui->screen_6_btn_5_label = lv_label_create(ui->screen_6_btn_5);
    lv_label_set_text(ui->screen_6_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_6_btn_5_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_6_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_6_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_6_btn_5, 45, 68);
    lv_obj_set_size(ui->screen_6_btn_5, 43, 36);

    //Write style for screen_6_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_6_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_6_btn_5, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_6_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_6_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_btn_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_btn_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_6_btn_5, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_6_btn_5, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_6_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_6_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_6_btn_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_btn_5, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_btn_5, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_label_3
    ui->screen_6_label_3 = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_label_3, "娱乐便携屏");
    lv_label_set_long_mode(ui->screen_6_label_3, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_label_3, 100, 72);
    lv_obj_set_size(ui->screen_6_label_3, 111, 28);

    //Write style for screen_6_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_label_3, lv_color_hex(0x171b40), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_label_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_label_2
    ui->screen_6_label_2 = lv_label_create(ui->screen_6);
    lv_label_set_text(ui->screen_6_label_2, "E");
    lv_label_set_long_mode(ui->screen_6_label_2, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_6_label_2, 45, 72);
    lv_obj_set_size(ui->screen_6_label_2, 43, 25);

    //Write style for screen_6_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_6_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_label_2, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_6_imgbtn_10
    ui->screen_6_imgbtn_10 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_10, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_10, LV_IMGBTN_STATE_RELEASED, NULL, &_shouye1_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_10, LV_IMGBTN_STATE_PRESSED, NULL, &_shouye_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_10, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shouye_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_10, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shouye_alpha_100x41, NULL);
    ui->screen_6_imgbtn_10_label = lv_label_create(ui->screen_6_imgbtn_10);
    lv_label_set_text(ui->screen_6_imgbtn_10_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_10, 480, 993);
    lv_obj_set_size(ui->screen_6_imgbtn_10, 100, 41);

    //Write style for screen_6_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_10, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_10, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_10, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_9
    ui->screen_6_imgbtn_9 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_9, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_9, LV_IMGBTN_STATE_RELEASED, NULL, &_shuru22_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_9, LV_IMGBTN_STATE_PRESSED, NULL, &_shuru11_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_9, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shuru11_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_9, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shuru11_alpha_102x44, NULL);
    ui->screen_6_imgbtn_9_label = lv_label_create(ui->screen_6_imgbtn_9);
    lv_label_set_text(ui->screen_6_imgbtn_9_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_9, 613, 993);
    lv_obj_set_size(ui->screen_6_imgbtn_9, 102, 44);

    //Write style for screen_6_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_9, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_9, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_9, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_8
    ui->screen_6_imgbtn_8 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_8, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_8, LV_IMGBTN_STATE_RELEASED, NULL, &_topcastnormal2_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_8, LV_IMGBTN_STATE_PRESSED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_8, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_8, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    ui->screen_6_imgbtn_8_label = lv_label_create(ui->screen_6_imgbtn_8);
    lv_label_set_text(ui->screen_6_imgbtn_8_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_8, 743, 993);
    lv_obj_set_size(ui->screen_6_imgbtn_8, 100, 43);

    //Write style for screen_6_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_8, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_8, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_8, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_7
    ui->screen_6_imgbtn_7 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_tupian_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_tupian1_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_7, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_tupian1_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_7, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_tupian1_alpha_102x46, NULL);
    ui->screen_6_imgbtn_7_label = lv_label_create(ui->screen_6_imgbtn_7);
    lv_label_set_text(ui->screen_6_imgbtn_7_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_7, 862, 993);
    lv_obj_set_size(ui->screen_6_imgbtn_7, 102, 46);

    //Write style for screen_6_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_7, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_7, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_7, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_6
    ui->screen_6_imgbtn_6 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_shiping_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_shiping1_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shiping1_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_6, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shiping1_alpha_100x48, NULL);
    ui->screen_6_imgbtn_6_label = lv_label_create(ui->screen_6_imgbtn_6);
    lv_label_set_text(ui->screen_6_imgbtn_6_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_6, 974, 991);
    lv_obj_set_size(ui->screen_6_imgbtn_6, 100, 48);

    //Write style for screen_6_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_6, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_6, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_6, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_5
    ui->screen_6_imgbtn_5 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_shizhong_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_shizhong1_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shizhong1_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_5, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shizhong1_alpha_102x49, NULL);
    ui->screen_6_imgbtn_5_label = lv_label_create(ui->screen_6_imgbtn_5);
    lv_label_set_text(ui->screen_6_imgbtn_5_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_5, 1085, 991);
    lv_obj_set_size(ui->screen_6_imgbtn_5, 102, 49);

    //Write style for screen_6_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_5, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_5, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_5, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_4
    ui->screen_6_imgbtn_4 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_wangluo_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_wangluo2_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_wangluo2_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_wangluo2_alpha_102x46, NULL);
    ui->screen_6_imgbtn_4_label = lv_label_create(ui->screen_6_imgbtn_4);
    lv_label_set_text(ui->screen_6_imgbtn_4_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_4, 1199, 991);
    lv_obj_set_size(ui->screen_6_imgbtn_4, 102, 46);

    //Write style for screen_6_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_4, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_4, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_4, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_6_imgbtn_3
    ui->screen_6_imgbtn_3 = lv_imgbtn_create(ui->screen_6);
    lv_obj_add_flag(ui->screen_6_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_shezhi_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_shezhi1_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shezhi1_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_6_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shezhi1_alpha_105x48, NULL);
    ui->screen_6_imgbtn_3_label = lv_label_create(ui->screen_6_imgbtn_3);
    lv_label_set_text(ui->screen_6_imgbtn_3_label, "");
    lv_label_set_long_mode(ui->screen_6_imgbtn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_6_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_6_imgbtn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_6_imgbtn_3, 1316, 991);
    lv_obj_set_size(ui->screen_6_imgbtn_3, 105, 48);

    //Write style for screen_6_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_6_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_6_imgbtn_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_6_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_6_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_6_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_6_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_6_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_6_imgbtn_3, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_6_imgbtn_3, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_6_imgbtn_3, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //The custom code of screen_6.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_6);

}
