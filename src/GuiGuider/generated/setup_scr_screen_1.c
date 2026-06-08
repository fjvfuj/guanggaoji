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



void setup_scr_screen_1(lv_ui *ui)
{
    //Write codes screen_1
    ui->screen_1 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_1, 1920, 1080);
    lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1, lv_color_hex(0xf7f8fc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_7
    ui->screen_1_btn_7 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_7_label = lv_label_create(ui->screen_1_btn_7);
    lv_label_set_text(ui->screen_1_btn_7_label, "");
    lv_label_set_long_mode(ui->screen_1_btn_7_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_7_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_7, 28, 979);
    lv_obj_set_size(ui->screen_1_btn_7, 1831, 76);

    //Write style for screen_1_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_7, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_7, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_7, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_usb_card
    ui->screen_1_screen_1_usb_card = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_usb_card_label = lv_label_create(ui->screen_1_screen_1_usb_card);
    lv_label_set_text(ui->screen_1_screen_1_usb_card_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_usb_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_usb_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_usb_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_usb_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_usb_card, 1230, 443);
    lv_obj_set_size(ui->screen_1_screen_1_usb_card, 285, 212);

    //Write style for screen_1_screen_1_usb_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_usb_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_usb_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_usb_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_usb_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_usb_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_usb_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_usb_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_usb_card, 42, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_usb_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_usb_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_usb_card, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_usb_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_usb_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_usb_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_usb_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_hdmi_card
    ui->screen_1_screen_1_hdmi_card = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_hdmi_card_label = lv_label_create(ui->screen_1_screen_1_hdmi_card);
    lv_label_set_text(ui->screen_1_screen_1_hdmi_card_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_hdmi_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_hdmi_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_hdmi_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_hdmi_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_card, 927, 443);
    lv_obj_set_size(ui->screen_1_screen_1_hdmi_card, 285, 212);

    //Write style for screen_1_screen_1_hdmi_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_hdmi_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_hdmi_card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_hdmi_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_hdmi_card, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_1_screen_1_hdmi_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_1_screen_1_hdmi_card, lv_color_hex(0x7c85ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_1_screen_1_hdmi_card, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_hdmi_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_hdmi_card, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_hdmi_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_hdmi_card, 42, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_hdmi_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_hdmi_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_hdmi_card, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_hdmi_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_hdmi_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_hdmi_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_hdmi_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_preview_panel
    ui->screen_1_screen_1_preview_panel = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_preview_panel_label = lv_label_create(ui->screen_1_screen_1_preview_panel);
    lv_label_set_text(ui->screen_1_screen_1_preview_panel_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_preview_panel_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_preview_panel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_preview_panel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_preview_panel_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_preview_panel, 409, 373);
    lv_obj_set_size(ui->screen_1_screen_1_preview_panel, 489, 347);

    //Write style for screen_1_screen_1_preview_panel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_preview_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_preview_panel, lv_color_hex(0xf0f5fa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_preview_panel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_preview_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_preview_panel, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_preview_panel, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_preview_panel, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_preview_panel, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_preview_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_preview_panel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_preview_panel, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_preview_panel, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_preview_panel, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_preview_panel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_preview_panel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_top_brand_bg
    ui->screen_1_screen_1_top_brand_bg = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_top_brand_bg_label = lv_label_create(ui->screen_1_screen_1_top_brand_bg);
    lv_label_set_text(ui->screen_1_screen_1_top_brand_bg_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_top_brand_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_top_brand_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_top_brand_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_top_brand_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_top_brand_bg, 38, 33);
    lv_obj_set_size(ui->screen_1_screen_1_top_brand_bg, 187, 52);

    //Write style for screen_1_screen_1_top_brand_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_top_brand_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_top_brand_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_top_brand_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_top_brand_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_top_brand_bg, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_top_brand_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_top_brand_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_top_brand_bg, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_top_brand_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_top_brand_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_top_brand_bg, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_top_brand_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_top_brand_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_top_brand_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_top_brand_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_usb_subtitle
    ui->screen_1_screen_1_usb_subtitle = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_usb_subtitle, "U盘 / TF卡媒体播放");
    lv_label_set_long_mode(ui->screen_1_screen_1_usb_subtitle, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_usb_subtitle, 1230, 605);
    lv_obj_set_size(ui->screen_1_screen_1_usb_subtitle, 285, 26);

    //Write style for screen_1_screen_1_usb_subtitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_usb_subtitle, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_usb_subtitle, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_usb_subtitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_usb_subtitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_usb_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_usb_title
    ui->screen_1_screen_1_usb_title = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_usb_title, "USB");
    lv_label_set_long_mode(ui->screen_1_screen_1_usb_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_usb_title, 1227, 548);
    lv_obj_set_size(ui->screen_1_screen_1_usb_title, 285, 41);

    //Write style for screen_1_screen_1_usb_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_usb_title, lv_color_hex(0x161a44), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_usb_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_usb_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_usb_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_usb_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_usb_icon
    ui->screen_1_screen_1_usb_icon = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_usb_icon, "USB");
    lv_label_set_long_mode(ui->screen_1_screen_1_usb_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_usb_icon, 1260, 482);
    lv_obj_set_size(ui->screen_1_screen_1_usb_icon, 54, 30);

    //Write style for screen_1_screen_1_usb_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_usb_icon, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_usb_icon, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_usb_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_usb_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_usb_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_usb_icon_bg
    ui->screen_1_screen_1_usb_icon_bg = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_usb_icon_bg_label = lv_label_create(ui->screen_1_screen_1_usb_icon_bg);
    lv_label_set_text(ui->screen_1_screen_1_usb_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_usb_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_usb_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_usb_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_usb_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_usb_icon_bg, 1260, 469);
    lv_obj_set_size(ui->screen_1_screen_1_usb_icon_bg, 54, 54);

    //Write style for screen_1_screen_1_usb_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_usb_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_usb_icon_bg, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_usb_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_usb_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_usb_icon_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_usb_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_usb_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_usb_icon_bg, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_usb_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_usb_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_usb_icon_bg, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_usb_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_usb_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_usb_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_usb_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_hdmi_check
    ui->screen_1_screen_1_hdmi_check = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_hdmi_check, "OK");
    lv_label_set_long_mode(ui->screen_1_screen_1_hdmi_check, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_check, 1151, 473);
    lv_obj_set_size(ui->screen_1_screen_1_hdmi_check, 36, 26);

    //Write style for screen_1_screen_1_hdmi_check, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_hdmi_check, lv_color_hex(0x18c77d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_hdmi_check, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_hdmi_check, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_hdmi_check, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_hdmi_check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_hdmi_subtitle
    ui->screen_1_screen_1_hdmi_subtitle = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_hdmi_subtitle, "外接主机 / 电脑 / 游戏机");
    lv_label_set_long_mode(ui->screen_1_screen_1_hdmi_subtitle, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_subtitle, 930, 605);
    lv_obj_set_size(ui->screen_1_screen_1_hdmi_subtitle, 285, 26);

    //Write style for screen_1_screen_1_hdmi_subtitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_hdmi_subtitle, lv_color_hex(0x66708a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_hdmi_subtitle, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_hdmi_subtitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_hdmi_subtitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_hdmi_subtitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_hdmi_title
    ui->screen_1_screen_1_hdmi_title = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_hdmi_title, "HDMI");
    lv_label_set_long_mode(ui->screen_1_screen_1_hdmi_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_title, 930, 548);
    lv_obj_set_size(ui->screen_1_screen_1_hdmi_title, 285, 41);

    //Write style for screen_1_screen_1_hdmi_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_hdmi_title, lv_color_hex(0x161a44), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_hdmi_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_hdmi_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_hdmi_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_hdmi_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_hdmi_icon
    ui->screen_1_screen_1_hdmi_icon = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_hdmi_icon, "TV");
    lv_label_set_long_mode(ui->screen_1_screen_1_hdmi_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_icon, 960, 482);
    lv_obj_set_size(ui->screen_1_screen_1_hdmi_icon, 54, 30);

    //Write style for screen_1_screen_1_hdmi_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_hdmi_icon, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_hdmi_icon, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_hdmi_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_hdmi_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_hdmi_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_preview_card
    ui->screen_1_screen_1_preview_card = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_preview_card_label = lv_label_create(ui->screen_1_screen_1_preview_card);
    lv_label_set_text(ui->screen_1_screen_1_preview_card_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_preview_card_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_preview_card_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_preview_card, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_preview_card_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_preview_card, 522, 458);
    lv_obj_set_size(ui->screen_1_screen_1_preview_card, 271, 174);

    //Write style for screen_1_screen_1_preview_card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_preview_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_preview_card, lv_color_hex(0x252062), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_preview_card, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_1_screen_1_preview_card, lv_color_hex(0x252062), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_1_screen_1_preview_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_1_screen_1_preview_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_preview_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_preview_card, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_preview_card, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_preview_card, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_preview_card, 75, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_preview_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_preview_card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_preview_card, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_preview_card, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_preview_card, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_preview_card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_preview_card, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_brand_text
    ui->screen_1_screen_1_brand_text = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_brand_text, "娱乐便携屏");
    lv_label_set_long_mode(ui->screen_1_screen_1_brand_text, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_brand_text, 98, 45);
    lv_obj_set_size(ui->screen_1_screen_1_brand_text, 111, 28);

    //Write style for screen_1_screen_1_brand_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_brand_text, lv_color_hex(0x171b40), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_brand_text, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_brand_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_brand_text, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_brand_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_logo_text
    ui->screen_1_screen_1_logo_text = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_logo_text, "E");
    lv_label_set_long_mode(ui->screen_1_screen_1_logo_text, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_logo_text, 45, 47);
    lv_obj_set_size(ui->screen_1_screen_1_logo_text, 43, 25);

    //Write style for screen_1_screen_1_logo_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_logo_text, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_logo_text, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_logo_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_logo_text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_logo_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_logo_bg
    ui->screen_1_screen_1_logo_bg = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_logo_bg_label = lv_label_create(ui->screen_1_screen_1_logo_bg);
    lv_label_set_text(ui->screen_1_screen_1_logo_bg_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_logo_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_logo_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_logo_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_logo_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_logo_bg, 45, 41);
    lv_obj_set_size(ui->screen_1_screen_1_logo_bg, 43, 36);

    //Write style for screen_1_screen_1_logo_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_logo_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_logo_bg, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_logo_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_logo_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_logo_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_logo_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_logo_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_logo_bg, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_logo_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_logo_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_logo_bg, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_logo_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_logo_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_logo_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_logo_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_1
    ui->screen_1_btn_1 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_1_label = lv_label_create(ui->screen_1_btn_1);
    lv_label_set_text(ui->screen_1_btn_1_label, "输入");
    lv_label_set_long_mode(ui->screen_1_btn_1_label, LV_LABEL_LONG_CLIP);
    lv_obj_set_style_text_font(ui->screen_1_btn_1_label, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_align(ui->screen_1_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_1, 834, 33);
    lv_obj_set_size(ui->screen_1_btn_1, 174, 52);

    //Write style for screen_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_1, lv_color_hex(0xeef2ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_1, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_1, lv_color_hex(0x655cff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_1, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_2
    ui->screen_1_label_2 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_2, "E");
    lv_label_set_long_mode(ui->screen_1_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_2, 14, 45);
    lv_obj_set_size(ui->screen_1_label_2, 100, 32);

    //Write style for screen_1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_2, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_3
    ui->screen_1_label_3 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_3, "" LV_SYMBOL_USB " ");
    lv_label_set_long_mode(ui->screen_1_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_3, 1240, 482);
    lv_obj_set_size(ui->screen_1_label_3, 100, 32);

    //Write style for screen_1_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_3, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_1
    ui->screen_1_img_1 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_1, &_diannao_alpha_155x119);
    lv_img_set_pivot(ui->screen_1_img_1, 50,50);
    lv_img_set_angle(ui->screen_1_img_1, 0);
    lv_obj_set_pos(ui->screen_1_img_1, 577, 482);
    lv_obj_set_size(ui->screen_1_img_1, 155, 119);

    //Write style for screen_1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_preview_title
    ui->screen_1_screen_1_preview_title = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_preview_title, "HDMI");
    lv_label_set_long_mode(ui->screen_1_screen_1_preview_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_preview_title, 522, 601);
    lv_obj_set_size(ui->screen_1_screen_1_preview_title, 271, 36);

    //Write style for screen_1_screen_1_preview_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_preview_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_preview_title, &lv_font_SourceHanSerifSC_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_preview_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_preview_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_preview_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_6
    ui->screen_1_btn_6 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_6_label = lv_label_create(ui->screen_1_btn_6);
    lv_label_set_text(ui->screen_1_btn_6_label, "");
    lv_label_set_long_mode(ui->screen_1_btn_6_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_6, 964, 469);
    lv_obj_set_size(ui->screen_1_btn_6, 54, 54);

    //Write style for screen_1_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_6, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_6, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_6, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_btn_6, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_btn_6, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_btn_6, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_6, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_6, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_2
    ui->screen_1_img_2 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_2, &_diannao1_alpha_48x39);
    lv_img_set_pivot(ui->screen_1_img_2, 50,50);
    lv_img_set_angle(ui->screen_1_img_2, 0);
    lv_obj_set_pos(ui->screen_1_img_2, 967, 476);
    lv_obj_set_size(ui->screen_1_img_2, 48, 39);

    //Write style for screen_1_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_2, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->screen_1_img_2, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_12
    ui->screen_1_img_12 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_12, &_wangluo_alpha_110x55);
    lv_img_set_pivot(ui->screen_1_img_12, 50,50);
    lv_img_set_angle(ui->screen_1_img_12, 0);
    lv_obj_set_pos(ui->screen_1_img_12, 1750, 26);
    lv_obj_set_size(ui->screen_1_img_12, 110, 55);

    //Write style for screen_1_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_12, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_11
    ui->screen_1_img_11 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_11, &_touping_alpha_105x55);
    lv_img_set_pivot(ui->screen_1_img_11, 50,50);
    lv_img_set_angle(ui->screen_1_img_11, 0);
    lv_obj_set_pos(ui->screen_1_img_11, 1622, 26);
    lv_obj_set_size(ui->screen_1_img_11, 105, 55);

    //Write style for screen_1_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_11, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_10
    ui->screen_1_img_10 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_10, &_shuru1_alpha_111x59);
    lv_img_set_pivot(ui->screen_1_img_10, 50,50);
    lv_img_set_angle(ui->screen_1_img_10, 0);
    lv_obj_set_pos(ui->screen_1_img_10, 1492, 26);
    lv_obj_set_size(ui->screen_1_img_10, 111, 59);

    //Write style for screen_1_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_10, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_20
    ui->screen_1_img_20 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_20, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_20, &_shouye1_alpha_93x73);
    lv_img_set_pivot(ui->screen_1_img_20, 50,50);
    lv_img_set_angle(ui->screen_1_img_20, 0);
    lv_obj_set_pos(ui->screen_1_img_20, 500, 979);
    lv_obj_set_size(ui->screen_1_img_20, 93, 73);

    //Write style for screen_1_img_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_20, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_19
    ui->screen_1_img_19 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_19, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_19, &_shuru1_alpha_91x72);
    lv_img_set_pivot(ui->screen_1_img_19, 50,50);
    lv_img_set_angle(ui->screen_1_img_19, 0);
    lv_obj_set_pos(ui->screen_1_img_19, 629, 982);
    lv_obj_set_size(ui->screen_1_img_19, 91, 72);

    //Write style for screen_1_img_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_19, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_18
    ui->screen_1_img_18 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_18, &_touping_alpha_91x73);
    lv_img_set_pivot(ui->screen_1_img_18, 50,50);
    lv_img_set_angle(ui->screen_1_img_18, 0);
    lv_obj_set_pos(ui->screen_1_img_18, 746, 982);
    lv_obj_set_size(ui->screen_1_img_18, 91, 73);

    //Write style for screen_1_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_17
    ui->screen_1_img_17 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_17, &_tupian_alpha_89x73);
    lv_img_set_pivot(ui->screen_1_img_17, 50,50);
    lv_img_set_angle(ui->screen_1_img_17, 0);
    lv_obj_set_pos(ui->screen_1_img_17, 874, 982);
    lv_obj_set_size(ui->screen_1_img_17, 89, 73);

    //Write style for screen_1_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_16
    ui->screen_1_img_16 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_16, &_shiping_alpha_89x72);
    lv_img_set_pivot(ui->screen_1_img_16, 50,50);
    lv_img_set_angle(ui->screen_1_img_16, 0);
    lv_obj_set_pos(ui->screen_1_img_16, 995, 982);
    lv_obj_set_size(ui->screen_1_img_16, 89, 72);

    //Write style for screen_1_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_15
    ui->screen_1_img_15 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_15, &_shizhong_alpha_94x73);
    lv_img_set_pivot(ui->screen_1_img_15, 50,50);
    lv_img_set_angle(ui->screen_1_img_15, 0);
    lv_obj_set_pos(ui->screen_1_img_15, 1117, 982);
    lv_obj_set_size(ui->screen_1_img_15, 94, 73);

    //Write style for screen_1_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_14
    ui->screen_1_img_14 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_14, &_wangluo_alpha_87x70);
    lv_img_set_pivot(ui->screen_1_img_14, 50,50);
    lv_img_set_angle(ui->screen_1_img_14, 0);
    lv_obj_set_pos(ui->screen_1_img_14, 1230, 982);
    lv_obj_set_size(ui->screen_1_img_14, 87, 70);

    //Write style for screen_1_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_img_13
    ui->screen_1_img_13 = lv_img_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_13, &_shezhi_alpha_85x70);
    lv_img_set_pivot(ui->screen_1_img_13, 50,50);
    lv_img_set_angle(ui->screen_1_img_13, 0);
    lv_obj_set_pos(ui->screen_1_img_13, 1351, 982);
    lv_obj_set_size(ui->screen_1_img_13, 85, 70);

    //Write style for screen_1_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_1.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_1);

}
