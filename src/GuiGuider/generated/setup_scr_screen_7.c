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



int screen_7_digital_clock_1_min_value = 25;
int screen_7_digital_clock_1_hour_value = 11;
int screen_7_digital_clock_1_sec_value = 50;
void setup_scr_screen_7(lv_ui *ui)
{
    //Write codes screen_7
    ui->screen_7 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_7, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_7, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7, lv_color_hex(0xf7f8fc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_btn_6
    ui->screen_7_btn_6 = lv_btn_create(ui->screen_7);
    ui->screen_7_btn_6_label = lv_label_create(ui->screen_7_btn_6);
    lv_label_set_text(ui->screen_7_btn_6_label, "");
    lv_label_set_long_mode(ui->screen_7_btn_6_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_7_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_btn_6, 28, 979);
    lv_obj_set_size(ui->screen_7_btn_6, 1831, 76);

    //Write style for screen_7_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_btn_6, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_btn_6, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_btn_6, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_btn_5
    ui->screen_7_btn_5 = lv_btn_create(ui->screen_7);
    ui->screen_7_btn_5_label = lv_label_create(ui->screen_7_btn_5);
    lv_label_set_text(ui->screen_7_btn_5_label, "        娱乐便携屏");
    lv_label_set_long_mode(ui->screen_7_btn_5_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_7_btn_5_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_7_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_btn_5, 37, 30);
    lv_obj_set_size(ui->screen_7_btn_5, 187, 52);

    //Write style for screen_7_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_btn_5, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_btn_5, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_7_btn_5, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_7_btn_5, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_7_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_7_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_7_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_btn_5, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_btn_5, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_main_panel
    ui->screen_7_screen_7_main_panel = lv_btn_create(ui->screen_7);
    ui->screen_7_screen_7_main_panel_label = lv_label_create(ui->screen_7_screen_7_main_panel);
    lv_label_set_text(ui->screen_7_screen_7_main_panel_label, "");
    lv_label_set_long_mode(ui->screen_7_screen_7_main_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_7_screen_7_main_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_screen_7_main_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_screen_7_main_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_screen_7_main_panel, 30, 99);
    lv_obj_set_size(ui->screen_7_screen_7_main_panel, 1860, 810);

    //Write style for screen_7_screen_7_main_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_main_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_screen_7_main_panel, lv_color_hex(0xeef3f8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_screen_7_main_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_screen_7_main_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_main_panel, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_main_panel, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_7_screen_7_main_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_7_screen_7_main_panel, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_7_screen_7_main_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_7_screen_7_main_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_7_screen_7_main_panel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_main_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_main_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_main_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_main_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_sync_btn
    ui->screen_7_screen_7_sync_btn = lv_btn_create(ui->screen_7);
    ui->screen_7_screen_7_sync_btn_label = lv_label_create(ui->screen_7_screen_7_sync_btn);
    lv_label_set_text(ui->screen_7_screen_7_sync_btn_label, "立即同步");
    lv_label_set_long_mode(ui->screen_7_screen_7_sync_btn_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_sync_btn_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_7_screen_7_sync_btn_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_screen_7_sync_btn, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_screen_7_sync_btn_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_screen_7_sync_btn, 873, 616);
    lv_obj_set_size(ui->screen_7_screen_7_sync_btn, 174, 54);

    //Write style for screen_7_screen_7_sync_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_sync_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_screen_7_sync_btn, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_screen_7_sync_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_screen_7_sync_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_sync_btn, 27, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_sync_btn, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_7_screen_7_sync_btn, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_7_screen_7_sync_btn, 70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_7_screen_7_sync_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_7_screen_7_sync_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_7_screen_7_sync_btn, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->screen_7_screen_7_sync_btn, &_home_bg_mountain_174x54, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->screen_7_screen_7_sync_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->screen_7_screen_7_sync_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_sync_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_sync_btn, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_sync_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_sync_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_sync_desc
    ui->screen_7_screen_7_sync_desc = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_screen_7_sync_desc, "网络同步 · RTC 离线走时");
    lv_label_set_long_mode(ui->screen_7_screen_7_sync_desc, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_7_screen_7_sync_desc, 686, 568);
    lv_obj_set_size(ui->screen_7_screen_7_sync_desc, 548, 32);

    //Write style for screen_7_screen_7_sync_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_sync_desc, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_sync_desc, &lv_font_SourceHanSerifSC_Regular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_sync_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_sync_desc, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_sync_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_time_value
    ui->screen_7_screen_7_time_value = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_screen_7_time_value, "16:57");
    lv_label_set_long_mode(ui->screen_7_screen_7_time_value, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_7_screen_7_time_value, 721, 397);
    lv_obj_set_size(ui->screen_7_screen_7_time_value, 480, 130);

    //Write style for screen_7_screen_7_time_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_time_value, lv_color_hex(0x323086), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_time_value, &lv_font_montserratMedium_118, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_time_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_time_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_time_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_card_title
    ui->screen_7_screen_7_card_title = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_screen_7_card_title, "实时钟");
    lv_label_set_long_mode(ui->screen_7_screen_7_card_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_7_screen_7_card_title, 686, 342);
    lv_obj_set_size(ui->screen_7_screen_7_card_title, 548, 32);

    //Write style for screen_7_screen_7_card_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_card_title, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_card_title, &lv_font_SourceHanSerifSC_Regular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_card_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_card_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_card_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_clock_card
    ui->screen_7_screen_7_clock_card = lv_btn_create(ui->screen_7);
    ui->screen_7_screen_7_clock_card_label = lv_label_create(ui->screen_7_screen_7_clock_card);
    lv_label_set_text(ui->screen_7_screen_7_clock_card_label, "");
    lv_label_set_long_mode(ui->screen_7_screen_7_clock_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_7_screen_7_clock_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_screen_7_clock_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_screen_7_clock_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_screen_7_clock_card, 686, 290);
    lv_obj_set_size(ui->screen_7_screen_7_clock_card, 548, 425);

    //Write style for screen_7_screen_7_clock_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_clock_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_screen_7_clock_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_screen_7_clock_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_screen_7_clock_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_clock_card, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_clock_card, 48, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_7_screen_7_clock_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_7_screen_7_clock_card, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_7_screen_7_clock_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_7_screen_7_clock_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_7_screen_7_clock_card, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_clock_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_clock_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_clock_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_clock_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_page_pill
    ui->screen_7_screen_7_page_pill = lv_btn_create(ui->screen_7);
    ui->screen_7_screen_7_page_pill_label = lv_label_create(ui->screen_7_screen_7_page_pill);
    lv_label_set_text(ui->screen_7_screen_7_page_pill_label, "实时钟");
    lv_label_set_long_mode(ui->screen_7_screen_7_page_pill_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_page_pill_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_7_screen_7_page_pill_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_screen_7_page_pill, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_screen_7_page_pill_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_screen_7_page_pill, 813, 27);
    lv_obj_set_size(ui->screen_7_screen_7_page_pill, 130, 52);

    //Write style for screen_7_screen_7_page_pill, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_screen_7_page_pill, lv_color_hex(0xf1f0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_screen_7_page_pill, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_screen_7_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_page_pill, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_page_pill, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_7_screen_7_page_pill, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_7_screen_7_page_pill, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_7_screen_7_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_7_screen_7_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_7_screen_7_page_pill, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_page_pill, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_page_pill, &lv_font_SourceHanSerifSC_Regular_21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_page_pill, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_screen_7_logo_text
    ui->screen_7_screen_7_logo_text = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_screen_7_logo_text, "E");
    lv_label_set_long_mode(ui->screen_7_screen_7_logo_text, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_7_screen_7_logo_text, 41, 42);
    lv_obj_set_size(ui->screen_7_screen_7_logo_text, 43, 25);

    //Write style for screen_7_screen_7_logo_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_screen_7_logo_text, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_screen_7_logo_text, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_screen_7_logo_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_screen_7_logo_text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_screen_7_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_btn_4
    ui->screen_7_btn_4 = lv_btn_create(ui->screen_7);
    ui->screen_7_btn_4_label = lv_label_create(ui->screen_7_btn_4);
    lv_label_set_text(ui->screen_7_btn_4_label, "");
    lv_label_set_long_mode(ui->screen_7_btn_4_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_7_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_7_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_7_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_7_btn_4, 45, 41);
    lv_obj_set_size(ui->screen_7_btn_4, 43, 36);

    //Write style for screen_7_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_7_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_btn_4, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_7_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_btn_4, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_btn_4, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_7_btn_4, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_7_btn_4, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_7_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_7_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_7_btn_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_btn_4, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_btn_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_label_2
    ui->screen_7_label_2 = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_label_2, "E");
    lv_label_set_long_mode(ui->screen_7_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_7_label_2, 14, 45);
    lv_obj_set_size(ui->screen_7_label_2, 100, 32);

    //Write style for screen_7_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_label_2, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_digital_clock_1
    static bool screen_7_digital_clock_1_timer_enabled = false;
    ui->screen_7_digital_clock_1 = lv_dclock_create(ui->screen_7, "11:25");
    if (!screen_7_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_7_digital_clock_1_timer, 1000, NULL);
        screen_7_digital_clock_1_timer_enabled = true;
    }
    lv_obj_set_pos(ui->screen_7_digital_clock_1, 743, 377);
    lv_obj_set_size(ui->screen_7_digital_clock_1, 438, 213);

    //Write style for screen_7_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_7_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_digital_clock_1, lv_color_hex(0x353f73), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_digital_clock_1, &lv_font_Acme_Regular_205, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_digital_clock_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_7_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_7_digital_clock_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_digital_clock_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_label_3
    ui->screen_7_label_3 = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_label_3, " 实  时  钟  ");
    lv_label_set_long_mode(ui->screen_7_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_7_label_3, 909, 342);
    lv_obj_set_size(ui->screen_7_label_3, 107, 33);

    //Write style for screen_7_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_label_3, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_label_4
    ui->screen_7_label_4 = lv_label_create(ui->screen_7);
    lv_label_set_text(ui->screen_7_label_4, "网络同步 ·RTC离线走时");
    lv_label_set_long_mode(ui->screen_7_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_7_label_4, 859, 600);
    lv_obj_set_size(ui->screen_7_label_4, 247, 35);

    //Write style for screen_7_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_7_label_4, lv_color_hex(0x15204b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_7_label_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_7_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_7_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_7_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_10
    ui->screen_7_img_10 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_10, &_wangluo_alpha_110x55);
    lv_img_set_pivot(ui->screen_7_img_10, 50,50);
    lv_img_set_angle(ui->screen_7_img_10, 0);
    lv_obj_set_pos(ui->screen_7_img_10, 1750, 26);
    lv_obj_set_size(ui->screen_7_img_10, 110, 55);

    //Write style for screen_7_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_10, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_9
    ui->screen_7_img_9 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_9, &_touping_alpha_105x55);
    lv_img_set_pivot(ui->screen_7_img_9, 50,50);
    lv_img_set_angle(ui->screen_7_img_9, 0);
    lv_obj_set_pos(ui->screen_7_img_9, 1622, 26);
    lv_obj_set_size(ui->screen_7_img_9, 105, 55);

    //Write style for screen_7_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_9, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_8
    ui->screen_7_img_8 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_8, &_shuru1_alpha_111x59);
    lv_img_set_pivot(ui->screen_7_img_8, 50,50);
    lv_img_set_angle(ui->screen_7_img_8, 0);
    lv_obj_set_pos(ui->screen_7_img_8, 1492, 26);
    lv_obj_set_size(ui->screen_7_img_8, 111, 59);

    //Write style for screen_7_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_8, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_18
    ui->screen_7_img_18 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_18, &_shouye1_alpha_93x73);
    lv_img_set_pivot(ui->screen_7_img_18, 50,50);
    lv_img_set_angle(ui->screen_7_img_18, 0);
    lv_obj_set_pos(ui->screen_7_img_18, 500, 979);
    lv_obj_set_size(ui->screen_7_img_18, 93, 73);

    //Write style for screen_7_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_17
    ui->screen_7_img_17 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_17, &_shuru1_alpha_91x72);
    lv_img_set_pivot(ui->screen_7_img_17, 50,50);
    lv_img_set_angle(ui->screen_7_img_17, 0);
    lv_obj_set_pos(ui->screen_7_img_17, 629, 982);
    lv_obj_set_size(ui->screen_7_img_17, 91, 72);

    //Write style for screen_7_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_16
    ui->screen_7_img_16 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_16, &_touping_alpha_91x73);
    lv_img_set_pivot(ui->screen_7_img_16, 50,50);
    lv_img_set_angle(ui->screen_7_img_16, 0);
    lv_obj_set_pos(ui->screen_7_img_16, 746, 982);
    lv_obj_set_size(ui->screen_7_img_16, 91, 73);

    //Write style for screen_7_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_15
    ui->screen_7_img_15 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_15, &_tupian_alpha_89x73);
    lv_img_set_pivot(ui->screen_7_img_15, 50,50);
    lv_img_set_angle(ui->screen_7_img_15, 0);
    lv_obj_set_pos(ui->screen_7_img_15, 874, 982);
    lv_obj_set_size(ui->screen_7_img_15, 89, 73);

    //Write style for screen_7_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_14
    ui->screen_7_img_14 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_14, &_shiping_alpha_89x72);
    lv_img_set_pivot(ui->screen_7_img_14, 50,50);
    lv_img_set_angle(ui->screen_7_img_14, 0);
    lv_obj_set_pos(ui->screen_7_img_14, 995, 982);
    lv_obj_set_size(ui->screen_7_img_14, 89, 72);

    //Write style for screen_7_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_13
    ui->screen_7_img_13 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_13, &_shizhong_alpha_94x73);
    lv_img_set_pivot(ui->screen_7_img_13, 50,50);
    lv_img_set_angle(ui->screen_7_img_13, 0);
    lv_obj_set_pos(ui->screen_7_img_13, 1117, 982);
    lv_obj_set_size(ui->screen_7_img_13, 94, 73);

    //Write style for screen_7_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_12
    ui->screen_7_img_12 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_12, &_wangluo_alpha_87x70);
    lv_img_set_pivot(ui->screen_7_img_12, 50,50);
    lv_img_set_angle(ui->screen_7_img_12, 0);
    lv_obj_set_pos(ui->screen_7_img_12, 1230, 982);
    lv_obj_set_size(ui->screen_7_img_12, 87, 70);

    //Write style for screen_7_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_7_img_11
    ui->screen_7_img_11 = lv_img_create(ui->screen_7);
    lv_obj_add_flag(ui->screen_7_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_7_img_11, &_shezhi_alpha_85x70);
    lv_img_set_pivot(ui->screen_7_img_11, 50,50);
    lv_img_set_angle(ui->screen_7_img_11, 0);
    lv_obj_set_pos(ui->screen_7_img_11, 1351, 982);
    lv_obj_set_size(ui->screen_7_img_11, 85, 70);

    //Write style for screen_7_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_7_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_7_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_7_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_7_img_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_7.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_7);

}
