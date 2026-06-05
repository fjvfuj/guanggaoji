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
    lv_obj_set_pos(ui->screen_2_btn_7, 22, 973);
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
    lv_label_set_text(ui->screen_2_screen_2_p2p_icon_bg_label, "");
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
    lv_obj_set_style_text_font(ui->screen_2_screen_2_p2p_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_label_set_text(ui->screen_2_screen_2_pc_icon_bg_label, "");
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
    lv_obj_set_style_text_font(ui->screen_2_screen_2_pc_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_label_set_text(ui->screen_2_screen_2_phone_icon_bg_label, "");
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
    lv_obj_set_style_text_font(ui->screen_2_screen_2_phone_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
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

    //Write codes screen_2_btn_3
    ui->screen_2_btn_3 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_3_label = lv_label_create(ui->screen_2_btn_3);
    lv_label_set_text(ui->screen_2_btn_3_label, "       网络");
    lv_label_set_long_mode(ui->screen_2_btn_3_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_3, 1747, 30);
    lv_obj_set_size(ui->screen_2_btn_3, 109, 52);

    //Write style for screen_2_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_3, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_3, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_label_1
    ui->screen_2_label_1 = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_label_1, "" LV_SYMBOL_WIFI " ");
    lv_label_set_long_mode(ui->screen_2_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_2_label_1, 1730, 46);
    lv_obj_set_size(ui->screen_2_label_1, 100, 32);

    //Write style for screen_2_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_label_1, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_btn_2
    ui->screen_2_btn_2 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_2_label = lv_label_create(ui->screen_2_btn_2);
    lv_label_set_text(ui->screen_2_btn_2_label, "      投屏");
    lv_label_set_long_mode(ui->screen_2_btn_2_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_2, 1627, 30);
    lv_obj_set_size(ui->screen_2_btn_2, 106, 52);

    //Write style for screen_2_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_2, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_2, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_2, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_imgbtn_2
    ui->screen_2_imgbtn_2 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_touping1_alpha_40x27, NULL);
    ui->screen_2_imgbtn_2_label = lv_label_create(ui->screen_2_imgbtn_2);
    lv_label_set_text(ui->screen_2_imgbtn_2_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_2, 1636, 42);
    lv_obj_set_size(ui->screen_2_imgbtn_2, 40, 27);

    //Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_2, &lv_font_montserratMedium_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_btn_1
    ui->screen_2_btn_1 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_1_label = lv_label_create(ui->screen_2_btn_1);
    lv_label_set_text(ui->screen_2_btn_1_label, "         输入");
    lv_label_set_long_mode(ui->screen_2_btn_1_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_2_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_1, 1492, 30);
    lv_obj_set_size(ui->screen_2_btn_1, 121, 52);

    //Write style for screen_2_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_1, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_1, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_1, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_imgbtn_1
    ui->screen_2_imgbtn_1 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_shuru_alpha_44x41, NULL);
    ui->screen_2_imgbtn_1_label = lv_label_create(ui->screen_2_imgbtn_1);
    lv_label_set_text(ui->screen_2_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_1, 1502, 37);
    lv_obj_set_size(ui->screen_2_imgbtn_1, 44, 41);

    //Write style for screen_2_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

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

    //Write codes screen_2_imgbtn_10
    ui->screen_2_imgbtn_10 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_10, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_10, LV_IMGBTN_STATE_RELEASED, NULL, &_shouye1_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_10, LV_IMGBTN_STATE_PRESSED, NULL, &_shouye_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_10, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shouye_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_10, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shouye_alpha_100x41, NULL);
    ui->screen_2_imgbtn_10_label = lv_label_create(ui->screen_2_imgbtn_10);
    lv_label_set_text(ui->screen_2_imgbtn_10_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_10, 480, 993);
    lv_obj_set_size(ui->screen_2_imgbtn_10, 100, 41);

    //Write style for screen_2_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_10, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_10, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_10, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_9
    ui->screen_2_imgbtn_9 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_9, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_9, LV_IMGBTN_STATE_RELEASED, NULL, &_shuru22_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_9, LV_IMGBTN_STATE_PRESSED, NULL, &_shuru11_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_9, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shuru11_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_9, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shuru11_alpha_102x44, NULL);
    ui->screen_2_imgbtn_9_label = lv_label_create(ui->screen_2_imgbtn_9);
    lv_label_set_text(ui->screen_2_imgbtn_9_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_9, 613, 993);
    lv_obj_set_size(ui->screen_2_imgbtn_9, 102, 44);

    //Write style for screen_2_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_9, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_9, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_9, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_8
    ui->screen_2_imgbtn_8 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_8, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_8, LV_IMGBTN_STATE_RELEASED, NULL, &_topcastnormal2_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_8, LV_IMGBTN_STATE_PRESSED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_8, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_8, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    ui->screen_2_imgbtn_8_label = lv_label_create(ui->screen_2_imgbtn_8);
    lv_label_set_text(ui->screen_2_imgbtn_8_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_8, 743, 993);
    lv_obj_set_size(ui->screen_2_imgbtn_8, 100, 43);

    //Write style for screen_2_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_8, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_8, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_8, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_7
    ui->screen_2_imgbtn_7 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_tupian_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_tupian1_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_7, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_tupian1_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_7, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_tupian1_alpha_102x46, NULL);
    ui->screen_2_imgbtn_7_label = lv_label_create(ui->screen_2_imgbtn_7);
    lv_label_set_text(ui->screen_2_imgbtn_7_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_7, 862, 993);
    lv_obj_set_size(ui->screen_2_imgbtn_7, 102, 46);

    //Write style for screen_2_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_7, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_7, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_7, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_6
    ui->screen_2_imgbtn_6 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_shiping_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_shiping1_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shiping1_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_6, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shiping1_alpha_100x48, NULL);
    ui->screen_2_imgbtn_6_label = lv_label_create(ui->screen_2_imgbtn_6);
    lv_label_set_text(ui->screen_2_imgbtn_6_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_6, 974, 991);
    lv_obj_set_size(ui->screen_2_imgbtn_6, 100, 48);

    //Write style for screen_2_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_6, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_6, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_6, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_5
    ui->screen_2_imgbtn_5 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_shizhong_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_shizhong1_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shizhong1_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_5, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shizhong1_alpha_102x49, NULL);
    ui->screen_2_imgbtn_5_label = lv_label_create(ui->screen_2_imgbtn_5);
    lv_label_set_text(ui->screen_2_imgbtn_5_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_5, 1085, 991);
    lv_obj_set_size(ui->screen_2_imgbtn_5, 102, 49);

    //Write style for screen_2_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_5, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_5, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_5, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_4
    ui->screen_2_imgbtn_4 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_wangluo_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_wangluo2_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_wangluo2_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_wangluo2_alpha_102x46, NULL);
    ui->screen_2_imgbtn_4_label = lv_label_create(ui->screen_2_imgbtn_4);
    lv_label_set_text(ui->screen_2_imgbtn_4_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_4, 1199, 991);
    lv_obj_set_size(ui->screen_2_imgbtn_4, 102, 46);

    //Write style for screen_2_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_4, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_4, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_4, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_2_imgbtn_3
    ui->screen_2_imgbtn_3 = lv_imgbtn_create(ui->screen_2);
    lv_obj_add_flag(ui->screen_2_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_shezhi_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_shezhi1_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shezhi1_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_2_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shezhi1_alpha_105x48, NULL);
    ui->screen_2_imgbtn_3_label = lv_label_create(ui->screen_2_imgbtn_3);
    lv_label_set_text(ui->screen_2_imgbtn_3_label, "");
    lv_label_set_long_mode(ui->screen_2_imgbtn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_2_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_imgbtn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_2_imgbtn_3, 1316, 991);
    lv_obj_set_size(ui->screen_2_imgbtn_3, 105, 48);

    //Write style for screen_2_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_2_imgbtn_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_2_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_2_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_2_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_2_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_2_imgbtn_3, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_2_imgbtn_3, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_2_imgbtn_3, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //The custom code of screen_2.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_2);

}
