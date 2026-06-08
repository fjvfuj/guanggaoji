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



void setup_scr_screen_2(lv_ui *ui)
{
    //Write codes screen_2
    ui->screen_2 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_2, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2, lv_color_hex(0xf7f8fc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_btn_7
    ui->screen_2_btn_7 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_7_label = lv_label_create(ui->screen_2_btn_7);
    lv_label_set_text(ui->screen_2_btn_7_label, "");
    lv_label_set_long_mode(ui->screen_2_btn_7_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_7_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_7, 28, 979);
    lv_obj_set_size(ui->screen_2_btn_7, 1831, 76);

    //Write style for screen_2_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_7, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_7, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_7, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_btn_4
    ui->screen_2_btn_4 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_4_label = lv_label_create(ui->screen_2_btn_4);
    lv_label_set_text(ui->screen_2_btn_4_label, "");
    lv_label_set_long_mode(ui->screen_2_btn_4_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_4, 38, 33);
    lv_obj_set_size(ui->screen_2_btn_4, 187, 52);

    //Write style for screen_2_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_4, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_4, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_btn_4, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_btn_4, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_4, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_card
    ui->screen_2_screen_2_p2p_card = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_p2p_card_label = lv_label_create(ui->screen_2_screen_2_p2p_card);
    lv_label_set_text(ui->screen_2_screen_2_p2p_card_label, "");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_p2p_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_p2p_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_p2p_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_card, 1267, 185);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_card, 594, 453);

    //Write style for screen_2_screen_2_p2p_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_p2p_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_p2p_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_card, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_screen_2_p2p_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_screen_2_p2p_card, 42, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_screen_2_p2p_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_screen_2_p2p_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_screen_2_p2p_card, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_card
    ui->screen_2_screen_2_pc_card = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_pc_card_label = lv_label_create(ui->screen_2_screen_2_pc_card);
    lv_label_set_text(ui->screen_2_screen_2_pc_card_label, "");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_pc_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_pc_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_pc_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_pc_card, 653, 185);
    lv_obj_set_size(ui->screen_2_screen_2_pc_card, 594, 453);

    //Write style for screen_2_screen_2_pc_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_pc_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_pc_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_card, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_screen_2_pc_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_screen_2_pc_card, 42, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_screen_2_pc_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_screen_2_pc_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_screen_2_pc_card, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_card
    ui->screen_2_screen_2_phone_card = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_phone_card_label = lv_label_create(ui->screen_2_screen_2_phone_card);
    lv_label_set_text(ui->screen_2_screen_2_phone_card_label, "");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_phone_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_phone_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_phone_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_phone_card, 34, 185);
    lv_obj_set_size(ui->screen_2_screen_2_phone_card, 594, 453);

    //Write style for screen_2_screen_2_phone_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_phone_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_phone_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_card, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_screen_2_phone_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_screen_2_phone_card, 42, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_screen_2_phone_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_screen_2_phone_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_screen_2_phone_card, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_arrow
    ui->screen_2_screen_2_p2p_arrow = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_p2p_arrow, ">");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_arrow, 1815, 432);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_arrow, 22, 34);

    //Write style for screen_2_screen_2_p2p_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_arrow, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_chip_3
    ui->screen_2_screen_2_p2p_chip_3 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_p2p_chip_3_label = lv_label_create(ui->screen_2_screen_2_p2p_chip_3);
    lv_label_set_text(ui->screen_2_screen_2_p2p_chip_3_label, "MENU");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_chip_3_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_p2p_chip_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_p2p_chip_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_p2p_chip_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_chip_3, 1483, 428);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_chip_3, 66, 34);

    //Write style for screen_2_screen_2_p2p_chip_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_chip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_p2p_chip_3, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_p2p_chip_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_chip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_chip_3, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_chip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_chip_3, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_chip_3, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_chip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_chip_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_chip_2
    ui->screen_2_screen_2_p2p_chip_2 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_p2p_chip_2_label = lv_label_create(ui->screen_2_screen_2_p2p_chip_2);
    lv_label_set_text(ui->screen_2_screen_2_p2p_chip_2_label, "直连");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_chip_2_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_chip_2_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_2_screen_2_p2p_chip_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_p2p_chip_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_p2p_chip_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_chip_2, 1390, 428);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_chip_2, 85, 34);

    //Write style for screen_2_screen_2_p2p_chip_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_chip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_p2p_chip_2, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_p2p_chip_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_chip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_chip_2, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_chip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_chip_2, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_chip_2, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_chip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_chip_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_chip_1
    ui->screen_2_screen_2_p2p_chip_1 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_p2p_chip_1_label = lv_label_create(ui->screen_2_screen_2_p2p_chip_1);
    lv_label_set_text(ui->screen_2_screen_2_p2p_chip_1_label, "低延迟");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_chip_1_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_chip_1_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_2_screen_2_p2p_chip_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_p2p_chip_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_p2p_chip_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_chip_1, 1297, 428);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_chip_1, 85, 34);

    //Write style for screen_2_screen_2_p2p_chip_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_chip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_p2p_chip_1, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_p2p_chip_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_chip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_chip_1, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_chip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_chip_1, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_chip_1, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_chip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_chip_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_desc
    ui->screen_2_screen_2_p2p_desc = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_p2p_desc, "无需路由器直连设备，双击 MENU 可退出模式。");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_desc, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_desc, 1339, 355);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_desc, 450, 30);

    //Write style for screen_2_screen_2_p2p_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_desc, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_desc, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_desc, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_title
    ui->screen_2_screen_2_p2p_title = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_p2p_title, "P2P 直连投屏");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_title, 1452, 300);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_title, 224, 42);

    //Write style for screen_2_screen_2_p2p_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_icon
    ui->screen_2_screen_2_p2p_icon = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_p2p_icon, "P2P");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_icon, 1297, 229);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_icon, 64, 34);

    //Write style for screen_2_screen_2_p2p_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_icon, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_icon, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_p2p_icon_bg
    ui->screen_2_screen_2_p2p_icon_bg = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_p2p_icon_bg_label = lv_label_create(ui->screen_2_screen_2_p2p_icon_bg);
    lv_label_set_text(ui->screen_2_screen_2_p2p_icon_bg_label, "" LV_SYMBOL_LOOP " ");
    lv_label_set_long_mode(ui->screen_2_screen_2_p2p_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_p2p_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_p2p_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_p2p_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_p2p_icon_bg, 1297, 213);
    lv_obj_set_size(ui->screen_2_screen_2_p2p_icon_bg, 64, 64);

    //Write style for screen_2_screen_2_p2p_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_p2p_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_p2p_icon_bg, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_p2p_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_p2p_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_p2p_icon_bg, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_p2p_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_screen_2_p2p_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_screen_2_p2p_icon_bg, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_screen_2_p2p_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_screen_2_p2p_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_screen_2_p2p_icon_bg, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_p2p_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_icon_bg, &lv_font_SourceHanSerifSC_Regular_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_p2p_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_p2p_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_arrow
    ui->screen_2_screen_2_pc_arrow = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_pc_arrow, ">");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_pc_arrow, 1201, 432);
    lv_obj_set_size(ui->screen_2_screen_2_pc_arrow, 22, 34);

    //Write style for screen_2_screen_2_pc_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_arrow, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_chip_3
    ui->screen_2_screen_2_pc_chip_3 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_pc_chip_3_label = lv_label_create(ui->screen_2_screen_2_pc_chip_3);
    lv_label_set_text(ui->screen_2_screen_2_pc_chip_3_label, "AirPlay");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_chip_3_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_pc_chip_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_pc_chip_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_pc_chip_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_pc_chip_3, 843, 428);
    lv_obj_set_size(ui->screen_2_screen_2_pc_chip_3, 82, 34);

    //Write style for screen_2_screen_2_pc_chip_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_chip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_pc_chip_3, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_pc_chip_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_chip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_chip_3, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_chip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_chip_3, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_chip_3, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_chip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_chip_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_chip_2
    ui->screen_2_screen_2_pc_chip_2 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_pc_chip_2_label = lv_label_create(ui->screen_2_screen_2_pc_chip_2);
    lv_label_set_text(ui->screen_2_screen_2_pc_chip_2_label, "Mac");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_chip_2_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_pc_chip_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_pc_chip_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_pc_chip_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_pc_chip_2, 775, 428);
    lv_obj_set_size(ui->screen_2_screen_2_pc_chip_2, 58, 34);

    //Write style for screen_2_screen_2_pc_chip_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_chip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_pc_chip_2, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_pc_chip_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_chip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_chip_2, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_chip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_chip_2, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_chip_2, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_chip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_chip_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_chip_1
    ui->screen_2_screen_2_pc_chip_1 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_pc_chip_1_label = lv_label_create(ui->screen_2_screen_2_pc_chip_1);
    lv_label_set_text(ui->screen_2_screen_2_pc_chip_1_label, "Windows");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_chip_1_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_pc_chip_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_pc_chip_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_pc_chip_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_pc_chip_1, 683, 428);
    lv_obj_set_size(ui->screen_2_screen_2_pc_chip_1, 82, 34);

    //Write style for screen_2_screen_2_pc_chip_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_chip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_pc_chip_1, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_pc_chip_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_chip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_chip_1, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_chip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_chip_1, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_chip_1, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_chip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_chip_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_desc
    ui->screen_2_screen_2_pc_desc = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_pc_desc, "Windows 使用 Win + K，Mac 使用隔空播放。");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_desc, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_pc_desc, 725, 355);
    lv_obj_set_size(ui->screen_2_screen_2_pc_desc, 450, 30);

    //Write style for screen_2_screen_2_pc_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_desc, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_desc, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_desc, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_title
    ui->screen_2_screen_2_pc_title = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_pc_title, "电脑投屏");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_pc_title, 838, 300);
    lv_obj_set_size(ui->screen_2_screen_2_pc_title, 224, 42);

    //Write style for screen_2_screen_2_pc_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_icon
    ui->screen_2_screen_2_pc_icon = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_pc_icon, "PC");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_pc_icon, 683, 229);
    lv_obj_set_size(ui->screen_2_screen_2_pc_icon, 64, 34);

    //Write style for screen_2_screen_2_pc_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_icon, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_icon, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_pc_icon_bg
    ui->screen_2_screen_2_pc_icon_bg = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_pc_icon_bg_label = lv_label_create(ui->screen_2_screen_2_pc_icon_bg);
    lv_label_set_text(ui->screen_2_screen_2_pc_icon_bg_label, "" LV_SYMBOL_DRIVE " ");
    lv_label_set_long_mode(ui->screen_2_screen_2_pc_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_pc_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_pc_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_pc_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_pc_icon_bg, 683, 213);
    lv_obj_set_size(ui->screen_2_screen_2_pc_icon_bg, 64, 64);

    //Write style for screen_2_screen_2_pc_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_pc_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_pc_icon_bg, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_pc_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_pc_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_pc_icon_bg, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_pc_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_screen_2_pc_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_screen_2_pc_icon_bg, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_screen_2_pc_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_screen_2_pc_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_screen_2_pc_icon_bg, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_pc_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_icon_bg, &lv_font_SourceHanSerifSC_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_pc_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_pc_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_arrow
    ui->screen_2_screen_2_phone_arrow = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_phone_arrow, ">");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_arrow, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_phone_arrow, 582, 432);
    lv_obj_set_size(ui->screen_2_screen_2_phone_arrow, 22, 34);

    //Write style for screen_2_screen_2_phone_arrow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_arrow, lv_color_hex(0x8a9ab8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_arrow, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_arrow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_arrow, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_arrow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_chip_3
    ui->screen_2_screen_2_phone_chip_3 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_phone_chip_3_label = lv_label_create(ui->screen_2_screen_2_phone_chip_3);
    lv_label_set_text(ui->screen_2_screen_2_phone_chip_3_label, "iOS");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_chip_3_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_phone_chip_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_phone_chip_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_phone_chip_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_phone_chip_3, 212, 428);
    lv_obj_set_size(ui->screen_2_screen_2_phone_chip_3, 48, 34);

    //Write style for screen_2_screen_2_phone_chip_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_chip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_phone_chip_3, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_phone_chip_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_chip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_chip_3, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_chip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_chip_3, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_chip_3, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_chip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_chip_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_chip_2
    ui->screen_2_screen_2_phone_chip_2 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_phone_chip_2_label = lv_label_create(ui->screen_2_screen_2_phone_chip_2);
    lv_label_set_text(ui->screen_2_screen_2_phone_chip_2_label, "Android");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_chip_2_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_phone_chip_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_phone_chip_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_phone_chip_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_phone_chip_2, 125, 428);
    lv_obj_set_size(ui->screen_2_screen_2_phone_chip_2, 78, 34);

    //Write style for screen_2_screen_2_phone_chip_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_chip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_phone_chip_2, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_phone_chip_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_chip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_chip_2, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_chip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_chip_2, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_chip_2, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_chip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_chip_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_chip_1
    ui->screen_2_screen_2_phone_chip_1 = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_phone_chip_1_label = lv_label_create(ui->screen_2_screen_2_phone_chip_1);
    lv_label_set_text(ui->screen_2_screen_2_phone_chip_1_label, "低延迟");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_chip_1_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_chip_1_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_2_screen_2_phone_chip_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_phone_chip_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_phone_chip_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_phone_chip_1, 64, 428);
    lv_obj_set_size(ui->screen_2_screen_2_phone_chip_1, 52, 34);

    //Write style for screen_2_screen_2_phone_chip_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_chip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_phone_chip_1, lv_color_hex(0xeef0ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_phone_chip_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_chip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_chip_1, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_chip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_chip_1, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_chip_1, &lv_font_SourceHanSerifSC_Regular_17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_chip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_chip_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_desc
    ui->screen_2_screen_2_phone_desc = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_phone_desc, "鸿蒙 Android iPhone 选择屏幕镜像或无线投屏连接。");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_desc, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_phone_desc, 106, 355);
    lv_obj_set_size(ui->screen_2_screen_2_phone_desc, 450, 30);

    //Write style for screen_2_screen_2_phone_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_desc, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_desc, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_desc, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_title
    ui->screen_2_screen_2_phone_title = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_phone_title, "手机投屏");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_phone_title, 219, 300);
    lv_obj_set_size(ui->screen_2_screen_2_phone_title, 224, 42);

    //Write style for screen_2_screen_2_phone_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_title, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_icon
    ui->screen_2_screen_2_phone_icon = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_phone_icon, "M");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_phone_icon, 64, 229);
    lv_obj_set_size(ui->screen_2_screen_2_phone_icon, 64, 34);

    //Write style for screen_2_screen_2_phone_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_icon, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_icon, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_phone_icon_bg
    ui->screen_2_screen_2_phone_icon_bg = lv_btn_create(ui->screen_2);
    ui->screen_2_screen_2_phone_icon_bg_label = lv_label_create(ui->screen_2_screen_2_phone_icon_bg);
    lv_label_set_text(ui->screen_2_screen_2_phone_icon_bg_label, "" LV_SYMBOL_REFRESH " ");
    lv_label_set_long_mode(ui->screen_2_screen_2_phone_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_screen_2_phone_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_screen_2_phone_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_screen_2_phone_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_screen_2_phone_icon_bg, 64, 213);
    lv_obj_set_size(ui->screen_2_screen_2_phone_icon_bg, 64, 64);

    //Write style for screen_2_screen_2_phone_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_phone_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_screen_2_phone_icon_bg, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_screen_2_phone_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_screen_2_phone_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_phone_icon_bg, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_phone_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_screen_2_phone_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_screen_2_phone_icon_bg, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_screen_2_phone_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_screen_2_phone_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_screen_2_phone_icon_bg, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_phone_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_icon_bg, &lv_font_SourceHanSerifSC_Regular_31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_phone_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_phone_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_headline
    ui->screen_2_screen_2_headline = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_headline, "选择一种方式开始无线投屏");
    lv_label_set_long_mode(ui->screen_2_screen_2_headline, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_headline, 1400, 121);
    lv_obj_set_size(ui->screen_2_screen_2_headline, 460, 46);

    //Write style for screen_2_screen_2_headline, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_headline, lv_color_hex(0x111541), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_headline, &lv_font_SourceHanSerifSC_Regular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_headline, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_headline, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_headline, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_screen_2_section_title
    ui->screen_2_screen_2_section_title = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_screen_2_section_title, "投屏");
    lv_label_set_long_mode(ui->screen_2_screen_2_section_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_screen_2_section_title, 34, 126);
    lv_obj_set_size(ui->screen_2_screen_2_section_title, 180, 32);

    //Write style for screen_2_screen_2_section_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_screen_2_section_title, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_screen_2_section_title, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_screen_2_section_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_screen_2_section_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_screen_2_section_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_label_4
    ui->screen_2_label_4 = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_label_4, "E");
    lv_label_set_long_mode(ui->screen_2_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_2_label_4, 14, 45);
    lv_obj_set_size(ui->screen_2_label_4, 100, 32);

    //Write style for screen_2_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_label_4, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_btn_5
    ui->screen_2_btn_5 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_5_label = lv_label_create(ui->screen_2_btn_5);
    lv_label_set_text(ui->screen_2_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_2_btn_5_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_5, 45, 41);
    lv_obj_set_size(ui->screen_2_btn_5, 43, 36);

    //Write style for screen_2_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_5, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_2_btn_5, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_2_btn_5, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_2_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_2_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_2_btn_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_5, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_5, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_label_3
    ui->screen_2_label_3 = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_label_3, "娱乐便携屏");
    lv_label_set_long_mode(ui->screen_2_label_3, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_label_3, 98, 45);
    lv_obj_set_size(ui->screen_2_label_3, 111, 28);

    //Write style for screen_2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_label_3, lv_color_hex(0x171b40), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_label_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_label_2
    ui->screen_2_label_2 = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_label_2, "E");
    lv_label_set_long_mode(ui->screen_2_label_2, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_2_label_2, 45, 47);
    lv_obj_set_size(ui->screen_2_label_2, 43, 25);

    //Write style for screen_2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_label_2, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_btn_6
    ui->screen_2_btn_6 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_6_label = lv_label_create(ui->screen_2_btn_6);
    lv_label_set_text(ui->screen_2_btn_6_label, "投屏");
    lv_label_set_long_mode(ui->screen_2_btn_6_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_2_btn_6_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_2_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_6, 834, 33);
    lv_obj_set_size(ui->screen_2_btn_6, 174, 52);

    //Write style for screen_2_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_6, lv_color_hex(0xeef2ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_6, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_6, lv_color_hex(0x655cff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_6, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_10
    ui->screen_2_img_10 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_10, &_wangluo_alpha_110x55);
    lv_img_set_pivot(ui->screen_2_img_10, 50,50);
    lv_img_set_angle(ui->screen_2_img_10, 0);
    lv_obj_set_pos(ui->screen_2_img_10, 1750, 26);
    lv_obj_set_size(ui->screen_2_img_10, 110, 55);

    //Write style for screen_2_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_10, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_9
    ui->screen_2_img_9 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_9, &_touping_alpha_105x55);
    lv_img_set_pivot(ui->screen_2_img_9, 50,50);
    lv_img_set_angle(ui->screen_2_img_9, 0);
    lv_obj_set_pos(ui->screen_2_img_9, 1622, 26);
    lv_obj_set_size(ui->screen_2_img_9, 105, 55);

    //Write style for screen_2_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_9, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_8
    ui->screen_2_img_8 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_8, &_shuru1_alpha_111x59);
    lv_img_set_pivot(ui->screen_2_img_8, 50,50);
    lv_img_set_angle(ui->screen_2_img_8, 0);
    lv_obj_set_pos(ui->screen_2_img_8, 1492, 26);
    lv_obj_set_size(ui->screen_2_img_8, 111, 59);

    //Write style for screen_2_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_8, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_18
    ui->screen_2_img_18 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_18, &_shouye1_alpha_93x73);
    lv_img_set_pivot(ui->screen_2_img_18, 50,50);
    lv_img_set_angle(ui->screen_2_img_18, 0);
    lv_obj_set_pos(ui->screen_2_img_18, 500, 979);
    lv_obj_set_size(ui->screen_2_img_18, 93, 73);

    //Write style for screen_2_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_17
    ui->screen_2_img_17 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_17, &_shuru1_alpha_91x72);
    lv_img_set_pivot(ui->screen_2_img_17, 50,50);
    lv_img_set_angle(ui->screen_2_img_17, 0);
    lv_obj_set_pos(ui->screen_2_img_17, 629, 982);
    lv_obj_set_size(ui->screen_2_img_17, 91, 72);

    //Write style for screen_2_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_16
    ui->screen_2_img_16 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_16, &_touping_alpha_91x73);
    lv_img_set_pivot(ui->screen_2_img_16, 50,50);
    lv_img_set_angle(ui->screen_2_img_16, 0);
    lv_obj_set_pos(ui->screen_2_img_16, 746, 982);
    lv_obj_set_size(ui->screen_2_img_16, 91, 73);

    //Write style for screen_2_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_15
    ui->screen_2_img_15 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_15, &_tupian_alpha_89x73);
    lv_img_set_pivot(ui->screen_2_img_15, 50,50);
    lv_img_set_angle(ui->screen_2_img_15, 0);
    lv_obj_set_pos(ui->screen_2_img_15, 874, 982);
    lv_obj_set_size(ui->screen_2_img_15, 89, 73);

    //Write style for screen_2_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_14
    ui->screen_2_img_14 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_14, &_shiping_alpha_89x72);
    lv_img_set_pivot(ui->screen_2_img_14, 50,50);
    lv_img_set_angle(ui->screen_2_img_14, 0);
    lv_obj_set_pos(ui->screen_2_img_14, 995, 982);
    lv_obj_set_size(ui->screen_2_img_14, 89, 72);

    //Write style for screen_2_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_13
    ui->screen_2_img_13 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_13, &_shizhong_alpha_94x73);
    lv_img_set_pivot(ui->screen_2_img_13, 50,50);
    lv_img_set_angle(ui->screen_2_img_13, 0);
    lv_obj_set_pos(ui->screen_2_img_13, 1117, 982);
    lv_obj_set_size(ui->screen_2_img_13, 94, 73);

    //Write style for screen_2_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_12
    ui->screen_2_img_12 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_12, &_wangluo_alpha_87x70);
    lv_img_set_pivot(ui->screen_2_img_12, 50,50);
    lv_img_set_angle(ui->screen_2_img_12, 0);
    lv_obj_set_pos(ui->screen_2_img_12, 1230, 982);
    lv_obj_set_size(ui->screen_2_img_12, 87, 70);

    //Write style for screen_2_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_img_11
    ui->screen_2_img_11 = lv_img_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_2_img_11, &_shezhi_alpha_85x70);
    lv_img_set_pivot(ui->screen_2_img_11, 50,50);
    lv_img_set_angle(ui->screen_2_img_11, 0);
    lv_obj_set_pos(ui->screen_2_img_11, 1351, 982);
    lv_obj_set_size(ui->screen_2_img_11, 85, 70);

    //Write style for screen_2_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_2_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_img_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_2.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_2);

}
