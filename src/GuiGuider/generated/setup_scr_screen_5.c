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



void setup_scr_screen_5(lv_ui *ui)
{
    //Write codes screen_5
    ui->screen_5 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_5, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5, lv_color_hex(0xf7f8fc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_btn_6
    ui->screen_5_btn_6 = lv_btn_create(ui->screen_5);
    ui->screen_5_btn_6_label = lv_label_create(ui->screen_5_btn_6);
    lv_label_set_text(ui->screen_5_btn_6_label, "");
    lv_label_set_long_mode(ui->screen_5_btn_6_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_btn_6, 28, 979);
    lv_obj_set_size(ui->screen_5_btn_6, 1831, 76);

    //Write style for screen_5_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_btn_6, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_btn_6, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_btn_6, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_btn_4
    ui->screen_5_btn_4 = lv_btn_create(ui->screen_5);
    ui->screen_5_btn_4_label = lv_label_create(ui->screen_5_btn_4);
    lv_label_set_text(ui->screen_5_btn_4_label, "");
    lv_label_set_long_mode(ui->screen_5_btn_4_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_btn_4, 37, 30);
    lv_obj_set_size(ui->screen_5_btn_4, 187, 52);

    //Write style for screen_5_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_btn_4, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_btn_4, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_btn_4, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_btn_4, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_btn_4, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_btn_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_right_panel
    ui->screen_5_screen_5_right_panel = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_right_panel_label = lv_label_create(ui->screen_5_screen_5_right_panel);
    lv_label_set_text(ui->screen_5_screen_5_right_panel_label, "");
    lv_label_set_long_mode(ui->screen_5_screen_5_right_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_screen_5_right_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_right_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_right_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_right_panel, 424, 103);
    lv_obj_set_size(ui->screen_5_screen_5_right_panel, 1460, 857);

    //Write style for screen_5_screen_5_right_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_right_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_right_panel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_right_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_right_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_right_panel, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_right_panel, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_screen_5_right_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_screen_5_right_panel, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_screen_5_right_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_screen_5_right_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_screen_5_right_panel, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_right_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_right_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_right_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_right_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_left_panel
    ui->screen_5_screen_5_left_panel = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_left_panel_label = lv_label_create(ui->screen_5_screen_5_left_panel);
    lv_label_set_text(ui->screen_5_screen_5_left_panel_label, "");
    lv_label_set_long_mode(ui->screen_5_screen_5_left_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_screen_5_left_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_left_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_left_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_left_panel, 29, 103);
    lv_obj_set_size(ui->screen_5_screen_5_left_panel, 374, 857);

    //Write style for screen_5_screen_5_left_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_left_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_left_panel, lv_color_hex(0xf2f5ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_left_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_left_panel, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_5_screen_5_left_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_5_screen_5_left_panel, lv_color_hex(0xd5dcff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_5_screen_5_left_panel, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_left_panel, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_left_panel, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_screen_5_left_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_screen_5_left_panel, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_screen_5_left_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_screen_5_left_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_screen_5_left_panel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_left_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_left_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_left_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_left_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_step_2
    ui->screen_5_screen_5_step_2 = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_step_2, "2. 扫描二维码或输入设备地址");
    lv_label_set_long_mode(ui->screen_5_screen_5_step_2, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_step_2, 995, 747);
    lv_obj_set_size(ui->screen_5_screen_5_step_2, 390, 42);

    //Write style for screen_5_screen_5_step_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_step_2, lv_color_hex(0x161a44), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_step_2, &lv_font_SourceHanSerifSC_Regular_27, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_step_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_step_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_step_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_step_1
    ui->screen_5_screen_5_step_1 = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_step_1, "1. 手机连接同一 Wi-Fi");
    lv_label_set_long_mode(ui->screen_5_screen_5_step_1, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_step_1, 995, 706);
    lv_obj_set_size(ui->screen_5_screen_5_step_1, 390, 42);

    //Write style for screen_5_screen_5_step_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_step_1, lv_color_hex(0x161a44), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_step_1, &lv_font_SourceHanSerifSC_Regular_27, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_step_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_step_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_step_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_qr_card
    ui->screen_5_screen_5_qr_card = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_qr_card_label = lv_label_create(ui->screen_5_screen_5_qr_card);
    lv_label_set_text(ui->screen_5_screen_5_qr_card_label, "");
    lv_label_set_long_mode(ui->screen_5_screen_5_qr_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_screen_5_qr_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_qr_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_qr_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_qr_card, 1020, 414);
    lv_obj_set_size(ui->screen_5_screen_5_qr_card, 268, 268);

    //Write style for screen_5_screen_5_qr_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_qr_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_qr_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_qr_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_qr_card, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_5_screen_5_qr_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_5_screen_5_qr_card, lv_color_hex(0xe1e6f2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_5_screen_5_qr_card, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_qr_card, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_qr_card, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_screen_5_qr_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_screen_5_qr_card, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_screen_5_qr_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_screen_5_qr_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_screen_5_qr_card, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_qr_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_qr_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_qr_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_qr_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_qr_title
    ui->screen_5_screen_5_qr_title = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_qr_title, "WiFi  Home_5G");
    lv_label_set_long_mode(ui->screen_5_screen_5_qr_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_qr_title, 1020, 354);
    lv_obj_set_size(ui->screen_5_screen_5_qr_title, 260, 50);

    //Write style for screen_5_screen_5_qr_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_qr_title, lv_color_hex(0x161a44), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_qr_title, &lv_font_montserratMedium_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_qr_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_qr_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_qr_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_p2p_btn
    ui->screen_5_screen_5_p2p_btn = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_p2p_btn_label = lv_label_create(ui->screen_5_screen_5_p2p_btn);
    lv_label_set_text(ui->screen_5_screen_5_p2p_btn_label, "->  开启 P2P");
    lv_label_set_long_mode(ui->screen_5_screen_5_p2p_btn_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_p2p_btn_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_5_screen_5_p2p_btn_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_p2p_btn, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_p2p_btn_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_p2p_btn, 146, 628);
    lv_obj_set_size(ui->screen_5_screen_5_p2p_btn, 139, 50);

    //Write style for screen_5_screen_5_p2p_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_p2p_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_p2p_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_p2p_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_p2p_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_p2p_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_p2p_btn, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_screen_5_p2p_btn, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_screen_5_p2p_btn, 35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_screen_5_p2p_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_screen_5_p2p_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_screen_5_p2p_btn, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_p2p_btn, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_p2p_btn, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_p2p_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_p2p_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_network_desc
    ui->screen_5_screen_5_network_desc = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_network_desc, "当前设备已连接网络，可用于天气、素材同步和远程控制。");
    lv_label_set_long_mode(ui->screen_5_screen_5_network_desc, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_network_desc, 78, 596);
    lv_obj_set_size(ui->screen_5_screen_5_network_desc, 280, 32);

    //Write style for screen_5_screen_5_network_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_network_desc, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_network_desc, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_network_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_network_desc, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_network_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_network_name
    ui->screen_5_screen_5_network_name = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_network_name, "Home_5G");
    lv_label_set_long_mode(ui->screen_5_screen_5_network_name, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_network_name, 100, 535);
    lv_obj_set_size(ui->screen_5_screen_5_network_name, 235, 48);

    //Write style for screen_5_screen_5_network_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_network_name, lv_color_hex(0x161a44), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_network_name, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_network_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_network_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_network_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_current_label
    ui->screen_5_screen_5_current_label = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_current_label, "当前网络");
    lv_label_set_long_mode(ui->screen_5_screen_5_current_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_current_label, 162, 486);
    lv_obj_set_size(ui->screen_5_screen_5_current_label, 120, 28);

    //Write style for screen_5_screen_5_current_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_current_label, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_current_label, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_current_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_current_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_current_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_wifi_icon_text
    ui->screen_5_screen_5_wifi_icon_text = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_wifi_icon_text, "WiFi");
    lv_label_set_long_mode(ui->screen_5_screen_5_wifi_icon_text, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_wifi_icon_text, 175, 415);
    lv_obj_set_size(ui->screen_5_screen_5_wifi_icon_text, 82, 30);

    //Write style for screen_5_screen_5_wifi_icon_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_wifi_icon_text, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_wifi_icon_text, &lv_font_montserratMedium_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_wifi_icon_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_wifi_icon_text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_wifi_icon_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_wifi_icon_bg
    ui->screen_5_screen_5_wifi_icon_bg = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_wifi_icon_bg_label = lv_label_create(ui->screen_5_screen_5_wifi_icon_bg);
    lv_label_set_text(ui->screen_5_screen_5_wifi_icon_bg_label, " " LV_SYMBOL_WIFI " ");
    lv_label_set_long_mode(ui->screen_5_screen_5_wifi_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_screen_5_wifi_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_wifi_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_wifi_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_wifi_icon_bg, 175, 389);
    lv_obj_set_size(ui->screen_5_screen_5_wifi_icon_bg, 82, 78);

    //Write style for screen_5_screen_5_wifi_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_wifi_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_wifi_icon_bg, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_wifi_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_wifi_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_wifi_icon_bg, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_wifi_icon_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_screen_5_wifi_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_screen_5_wifi_icon_bg, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_screen_5_wifi_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_screen_5_wifi_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_screen_5_wifi_icon_bg, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_wifi_icon_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_wifi_icon_bg, &lv_font_SourceHanSerifSC_Regular_38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_wifi_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_wifi_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_phone_icon
    ui->screen_5_screen_5_phone_icon = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_phone_icon, "M");
    lv_label_set_long_mode(ui->screen_5_screen_5_phone_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_phone_icon, 1840, 130);
    lv_obj_set_size(ui->screen_5_screen_5_phone_icon, 30, 34);

    //Write style for screen_5_screen_5_phone_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_phone_icon, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_phone_icon, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_phone_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_phone_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_right_divider
    ui->screen_5_screen_5_right_divider = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_right_divider_label = lv_label_create(ui->screen_5_screen_5_right_divider);
    lv_label_set_text(ui->screen_5_screen_5_right_divider_label, "");
    lv_label_set_long_mode(ui->screen_5_screen_5_right_divider_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_screen_5_right_divider_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_right_divider, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_right_divider_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_right_divider, 450, 178);
    lv_obj_set_size(ui->screen_5_screen_5_right_divider, 1377, 2);

    //Write style for screen_5_screen_5_right_divider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_right_divider, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_right_divider, lv_color_hex(0xdfe5ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_right_divider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_right_divider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_right_divider, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_right_divider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_right_divider, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_right_divider, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_right_divider, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_right_divider, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_right_title
    ui->screen_5_screen_5_right_title = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_screen_5_right_title, "无线网络设置");
    lv_label_set_long_mode(ui->screen_5_screen_5_right_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_screen_5_right_title, 450, 132);
    lv_obj_set_size(ui->screen_5_screen_5_right_title, 260, 38);

    //Write style for screen_5_screen_5_right_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_right_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_right_title, &lv_font_SourceHanSerifSC_Regular_23, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_right_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_right_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_right_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_screen_5_page_pill
    ui->screen_5_screen_5_page_pill = lv_btn_create(ui->screen_5);
    ui->screen_5_screen_5_page_pill_label = lv_label_create(ui->screen_5_screen_5_page_pill);
    lv_label_set_text(ui->screen_5_screen_5_page_pill_label, "WiFi 网络");
    lv_label_set_long_mode(ui->screen_5_screen_5_page_pill_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_page_pill_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_5_screen_5_page_pill_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_screen_5_page_pill, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_screen_5_page_pill_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_screen_5_page_pill, 848, 27);
    lv_obj_set_size(ui->screen_5_screen_5_page_pill, 155, 56);

    //Write style for screen_5_screen_5_page_pill, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_screen_5_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_screen_5_page_pill, lv_color_hex(0xf1f0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_screen_5_page_pill, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_screen_5_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_screen_5_page_pill, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_screen_5_page_pill, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_screen_5_page_pill, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_screen_5_page_pill, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_screen_5_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_screen_5_page_pill, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_screen_5_page_pill, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_screen_5_page_pill, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_screen_5_page_pill, &lv_font_SourceHanSerifSC_Regular_21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_screen_5_page_pill, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_screen_5_page_pill, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_qrcode_1
    ui->screen_5_qrcode_1 = lv_qrcode_create(ui->screen_5, 258, lv_color_hex(0x2C3224), lv_color_hex(0xffffff));
    const char * screen_5_qrcode_1_data = "https://www.nxp.com/";
    lv_qrcode_update(ui->screen_5_qrcode_1, screen_5_qrcode_1_data, 20);
    lv_obj_set_pos(ui->screen_5_qrcode_1, 1026, 424);
    lv_obj_set_size(ui->screen_5_qrcode_1, 258, 258);

    //Write codes screen_5_label_4
    ui->screen_5_label_4 = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_label_4, "E");
    lv_label_set_long_mode(ui->screen_5_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_5_label_4, 14, 45);
    lv_obj_set_size(ui->screen_5_label_4, 100, 32);

    //Write style for screen_5_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_label_4, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_btn_5
    ui->screen_5_btn_5 = lv_btn_create(ui->screen_5);
    ui->screen_5_btn_5_label = lv_label_create(ui->screen_5_btn_5);
    lv_label_set_text(ui->screen_5_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_5_btn_5_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_5_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_5_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_5_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_5_btn_5, 45, 41);
    lv_obj_set_size(ui->screen_5_btn_5, 43, 36);

    //Write style for screen_5_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_5_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_5_btn_5, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_5_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_5_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_btn_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_btn_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_5_btn_5, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_5_btn_5, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_5_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_5_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_5_btn_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_btn_5, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_btn_5, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_label_3
    ui->screen_5_label_3 = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_label_3, "娱乐便携屏");
    lv_label_set_long_mode(ui->screen_5_label_3, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_label_3, 98, 45);
    lv_obj_set_size(ui->screen_5_label_3, 111, 28);

    //Write style for screen_5_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_label_3, lv_color_hex(0x171b40), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_label_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_label_2
    ui->screen_5_label_2 = lv_label_create(ui->screen_5);
    lv_label_set_text(ui->screen_5_label_2, "E");
    lv_label_set_long_mode(ui->screen_5_label_2, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_5_label_2, 45, 47);
    lv_obj_set_size(ui->screen_5_label_2, 43, 25);

    //Write style for screen_5_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_5_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_5_label_2, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_5_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_5_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_5_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_10
    ui->screen_5_img_10 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_10, &_wangluo_alpha_110x55);
    lv_img_set_pivot(ui->screen_5_img_10, 50,50);
    lv_img_set_angle(ui->screen_5_img_10, 0);
    lv_obj_set_pos(ui->screen_5_img_10, 1750, 26);
    lv_obj_set_size(ui->screen_5_img_10, 110, 55);

    //Write style for screen_5_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_10, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_9
    ui->screen_5_img_9 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_9, &_touping_alpha_105x55);
    lv_img_set_pivot(ui->screen_5_img_9, 50,50);
    lv_img_set_angle(ui->screen_5_img_9, 0);
    lv_obj_set_pos(ui->screen_5_img_9, 1622, 26);
    lv_obj_set_size(ui->screen_5_img_9, 105, 55);

    //Write style for screen_5_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_9, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_8
    ui->screen_5_img_8 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_8, &_shuru1_alpha_111x59);
    lv_img_set_pivot(ui->screen_5_img_8, 50,50);
    lv_img_set_angle(ui->screen_5_img_8, 0);
    lv_obj_set_pos(ui->screen_5_img_8, 1492, 26);
    lv_obj_set_size(ui->screen_5_img_8, 111, 59);

    //Write style for screen_5_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_8, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_18
    ui->screen_5_img_18 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_18, &_shouye1_alpha_93x73);
    lv_img_set_pivot(ui->screen_5_img_18, 50,50);
    lv_img_set_angle(ui->screen_5_img_18, 0);
    lv_obj_set_pos(ui->screen_5_img_18, 500, 979);
    lv_obj_set_size(ui->screen_5_img_18, 93, 73);

    //Write style for screen_5_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_17
    ui->screen_5_img_17 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_17, &_shuru1_alpha_91x72);
    lv_img_set_pivot(ui->screen_5_img_17, 50,50);
    lv_img_set_angle(ui->screen_5_img_17, 0);
    lv_obj_set_pos(ui->screen_5_img_17, 629, 982);
    lv_obj_set_size(ui->screen_5_img_17, 91, 72);

    //Write style for screen_5_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_16
    ui->screen_5_img_16 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_16, &_touping_alpha_91x73);
    lv_img_set_pivot(ui->screen_5_img_16, 50,50);
    lv_img_set_angle(ui->screen_5_img_16, 0);
    lv_obj_set_pos(ui->screen_5_img_16, 746, 982);
    lv_obj_set_size(ui->screen_5_img_16, 91, 73);

    //Write style for screen_5_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_15
    ui->screen_5_img_15 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_15, &_tupian_alpha_89x73);
    lv_img_set_pivot(ui->screen_5_img_15, 50,50);
    lv_img_set_angle(ui->screen_5_img_15, 0);
    lv_obj_set_pos(ui->screen_5_img_15, 874, 982);
    lv_obj_set_size(ui->screen_5_img_15, 89, 73);

    //Write style for screen_5_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_14
    ui->screen_5_img_14 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_14, &_shiping_alpha_89x72);
    lv_img_set_pivot(ui->screen_5_img_14, 50,50);
    lv_img_set_angle(ui->screen_5_img_14, 0);
    lv_obj_set_pos(ui->screen_5_img_14, 995, 982);
    lv_obj_set_size(ui->screen_5_img_14, 89, 72);

    //Write style for screen_5_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_13
    ui->screen_5_img_13 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_13, &_shizhong_alpha_94x73);
    lv_img_set_pivot(ui->screen_5_img_13, 50,50);
    lv_img_set_angle(ui->screen_5_img_13, 0);
    lv_obj_set_pos(ui->screen_5_img_13, 1117, 982);
    lv_obj_set_size(ui->screen_5_img_13, 94, 73);

    //Write style for screen_5_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_12
    ui->screen_5_img_12 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_12, &_wangluo_alpha_87x70);
    lv_img_set_pivot(ui->screen_5_img_12, 50,50);
    lv_img_set_angle(ui->screen_5_img_12, 0);
    lv_obj_set_pos(ui->screen_5_img_12, 1230, 982);
    lv_obj_set_size(ui->screen_5_img_12, 87, 70);

    //Write style for screen_5_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_5_img_11
    ui->screen_5_img_11 = lv_img_create(ui->screen_5);
    lv_obj_add_flag(ui->screen_5_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_5_img_11, &_shezhi_alpha_85x70);
    lv_img_set_pivot(ui->screen_5_img_11, 50,50);
    lv_img_set_angle(ui->screen_5_img_11, 0);
    lv_obj_set_pos(ui->screen_5_img_11, 1351, 982);
    lv_obj_set_size(ui->screen_5_img_11, 85, 70);

    //Write style for screen_5_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_5_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_5_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_5_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_5_img_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_5.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_5);

}
