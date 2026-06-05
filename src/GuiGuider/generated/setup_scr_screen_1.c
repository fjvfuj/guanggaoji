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

    //Write codes screen_1_btn_5
    ui->screen_1_btn_5 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_5_label = lv_label_create(ui->screen_1_btn_5);
    lv_label_set_text(ui->screen_1_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_1_btn_5_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_5, 22, 973);
    lv_obj_set_size(ui->screen_1_btn_5, 1831, 76);

    //Write style for screen_1_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_5, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_5, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_5, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

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
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_card, 930, 443);
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
    lv_obj_set_pos(ui->screen_1_screen_1_preview_panel, 412, 373);
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

    //Write codes screen_1_screen_1_nav_setting
    ui->screen_1_screen_1_nav_setting = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_setting_label = lv_label_create(ui->screen_1_screen_1_nav_setting);
    lv_label_set_text(ui->screen_1_screen_1_nav_setting_label, "设置");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_setting_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_setting_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_setting, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_setting_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_setting, 1396, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_setting, 104, 52);

    //Write style for screen_1_screen_1_nav_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_setting, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_setting, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_setting, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_setting, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_setting, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_network
    ui->screen_1_screen_1_nav_network = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_network_label = lv_label_create(ui->screen_1_screen_1_nav_network);
    lv_label_set_text(ui->screen_1_screen_1_nav_network_label, "网络");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_network_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_network_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_network, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_network_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_network, 1273, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_network, 104, 52);

    //Write style for screen_1_screen_1_nav_network, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_network, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_network, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_network, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_network, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_network, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_network, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_clock
    ui->screen_1_screen_1_nav_clock = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_clock_label = lv_label_create(ui->screen_1_screen_1_nav_clock);
    lv_label_set_text(ui->screen_1_screen_1_nav_clock_label, "时钟");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_clock_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_clock_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_clock, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_clock_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_clock, 1151, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_clock, 104, 52);

    //Write style for screen_1_screen_1_nav_clock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_clock, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_clock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_clock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_clock, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_clock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_clock, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_clock, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_clock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_video
    ui->screen_1_screen_1_nav_video = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_video_label = lv_label_create(ui->screen_1_screen_1_nav_video);
    lv_label_set_text(ui->screen_1_screen_1_nav_video_label, "视频");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_video_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_video_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_video, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_video_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_video, 1029, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_video, 104, 52);

    //Write style for screen_1_screen_1_nav_video, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_video, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_video, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_video, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_video, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_video, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_video, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_video, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_video, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_video, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_video, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_photo
    ui->screen_1_screen_1_nav_photo = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_photo_label = lv_label_create(ui->screen_1_screen_1_nav_photo);
    lv_label_set_text(ui->screen_1_screen_1_nav_photo_label, "图片");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_photo_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_photo_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_photo, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_photo_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_photo, 906, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_photo, 104, 52);

    //Write style for screen_1_screen_1_nav_photo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_photo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_photo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_photo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_photo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_photo, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_photo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_photo, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_photo, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_photo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_photo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_cast
    ui->screen_1_screen_1_nav_cast = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_cast_label = lv_label_create(ui->screen_1_screen_1_nav_cast);
    lv_label_set_text(ui->screen_1_screen_1_nav_cast_label, "投屏");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_cast_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_cast_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_cast, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_cast_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_cast, 784, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_cast, 104, 52);

    //Write style for screen_1_screen_1_nav_cast, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_cast, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_cast, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_cast, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_cast, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_cast, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_cast, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_cast, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_cast, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_cast, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_cast, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_input
    ui->screen_1_screen_1_nav_input = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_input_label = lv_label_create(ui->screen_1_screen_1_nav_input);
    lv_label_set_text(ui->screen_1_screen_1_nav_input_label, "输入");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_input_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_input_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_input, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_input_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_input, 646, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_input, 117, 52);

    //Write style for screen_1_screen_1_nav_input, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_input, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_input, lv_color_hex(0xf0efff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_input, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_input, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_input, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_input, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_nav_input, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_nav_input, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_nav_input, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_nav_input, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_nav_input, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_input, lv_color_hex(0x6b72ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_input, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_input, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_input, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_nav_home
    ui->screen_1_screen_1_nav_home = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_nav_home_label = lv_label_create(ui->screen_1_screen_1_nav_home);
    lv_label_set_text(ui->screen_1_screen_1_nav_home_label, "首页");
    lv_label_set_long_mode(ui->screen_1_screen_1_nav_home_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_nav_home_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_nav_home, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_nav_home_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_nav_home, 525, 1007);
    lv_obj_set_size(ui->screen_1_screen_1_nav_home, 104, 52);

    //Write style for screen_1_screen_1_nav_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_nav_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_nav_home, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_nav_home, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_nav_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_nav_home, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_nav_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_nav_home, lv_color_hex(0x627089), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_nav_home, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_nav_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_nav_home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_bottom_nav_bg
    ui->screen_1_screen_1_bottom_nav_bg = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_bottom_nav_bg_label = lv_label_create(ui->screen_1_screen_1_bottom_nav_bg);
    lv_label_set_text(ui->screen_1_screen_1_bottom_nav_bg_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_bottom_nav_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_bottom_nav_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_bottom_nav_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_bottom_nav_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_bottom_nav_bg, 34, 996);
    lv_obj_set_size(ui->screen_1_screen_1_bottom_nav_bg, 1852, 72);

    //Write style for screen_1_screen_1_bottom_nav_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_bottom_nav_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_bottom_nav_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_bottom_nav_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_bottom_nav_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_bottom_nav_bg, 38, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_bottom_nav_bg, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_bottom_nav_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_bottom_nav_bg, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_bottom_nav_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_bottom_nav_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_bottom_nav_bg, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_bottom_nav_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_bottom_nav_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_bottom_nav_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_bottom_nav_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

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
    lv_obj_set_pos(ui->screen_1_screen_1_usb_title, 1230, 548);
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

    //Write codes screen_1_screen_1_hdmi_icon_bg
    ui->screen_1_screen_1_hdmi_icon_bg = lv_btn_create(ui->screen_1);
    ui->screen_1_screen_1_hdmi_icon_bg_label = lv_label_create(ui->screen_1_screen_1_hdmi_icon_bg);
    lv_label_set_text(ui->screen_1_screen_1_hdmi_icon_bg_label, "");
    lv_label_set_long_mode(ui->screen_1_screen_1_hdmi_icon_bg_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_screen_1_hdmi_icon_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_screen_1_hdmi_icon_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_screen_1_hdmi_icon_bg_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_screen_1_hdmi_icon_bg, 960, 469);
    lv_obj_set_size(ui->screen_1_screen_1_hdmi_icon_bg, 54, 54);

    //Write style for screen_1_screen_1_hdmi_icon_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_hdmi_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_screen_1_hdmi_icon_bg, lv_color_hex(0x706dff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_hdmi_icon_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_screen_1_hdmi_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_hdmi_icon_bg, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_hdmi_icon_bg, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_1_screen_1_hdmi_icon_bg, lv_color_hex(0xc8cfdf), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_1_screen_1_hdmi_icon_bg, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_1_screen_1_hdmi_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_1_screen_1_hdmi_icon_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_1_screen_1_hdmi_icon_bg, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_hdmi_icon_bg, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_hdmi_icon_bg, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_hdmi_icon_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_hdmi_icon_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_screen_1_preview_title
    ui->screen_1_screen_1_preview_title = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_preview_title, "HDMI");
    lv_label_set_long_mode(ui->screen_1_screen_1_preview_title, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_preview_title, 522, 581);
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

    //Write codes screen_1_screen_1_preview_icon
    ui->screen_1_screen_1_preview_icon = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_screen_1_preview_icon, "TV");
    lv_label_set_long_mode(ui->screen_1_screen_1_preview_icon, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_1_screen_1_preview_icon, 522, 494);
    lv_obj_set_size(ui->screen_1_screen_1_preview_icon, 271, 60);

    //Write style for screen_1_screen_1_preview_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_screen_1_preview_icon, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_screen_1_preview_icon, &lv_font_SourceHanSerifSC_Regular_44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_screen_1_preview_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_screen_1_preview_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_screen_1_preview_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

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
    lv_obj_set_style_bg_grad_dir(ui->screen_1_screen_1_preview_card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
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

    //Write codes screen_1_btn_4
    ui->screen_1_btn_4 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_4_label = lv_label_create(ui->screen_1_btn_4);
    lv_label_set_text(ui->screen_1_btn_4_label, "       网络");
    lv_label_set_long_mode(ui->screen_1_btn_4_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_4, 1747, 30);
    lv_obj_set_size(ui->screen_1_btn_4, 109, 52);

    //Write style for screen_1_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_4, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_4, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_label_1
    ui->screen_1_label_1 = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_label_1, "" LV_SYMBOL_WIFI " ");
    lv_label_set_long_mode(ui->screen_1_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_1, 1730, 46);
    lv_obj_set_size(ui->screen_1_label_1, 100, 32);

    //Write style for screen_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_1, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_3
    ui->screen_1_btn_3 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_3_label = lv_label_create(ui->screen_1_btn_3);
    lv_label_set_text(ui->screen_1_btn_3_label, "      投屏");
    lv_label_set_long_mode(ui->screen_1_btn_3_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_3, 1627, 30);
    lv_obj_set_size(ui->screen_1_btn_3, 106, 52);

    //Write style for screen_1_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_3, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_3, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_imgbtn_2
    ui->screen_1_imgbtn_2 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_touping1_alpha_40x27, NULL);
    ui->screen_1_imgbtn_2_label = lv_label_create(ui->screen_1_imgbtn_2);
    lv_label_set_text(ui->screen_1_imgbtn_2_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_2, 1636, 42);
    lv_obj_set_size(ui->screen_1_imgbtn_2, 40, 27);

    //Write style for screen_1_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_2, &lv_font_montserratMedium_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_2, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_2, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_btn_2
    ui->screen_1_btn_2 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_2_label = lv_label_create(ui->screen_1_btn_2);
    lv_label_set_text(ui->screen_1_btn_2_label, "         输入");
    lv_label_set_long_mode(ui->screen_1_btn_2_label, LV_LABEL_LONG_CLIP);
    lv_obj_align(ui->screen_1_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_2, 1492, 30);
    lv_obj_set_size(ui->screen_1_btn_2, 121, 52);

    //Write style for screen_1_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_2, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_2, lv_color_hex(0x1b2146), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_2, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_imgbtn_1
    ui->screen_1_imgbtn_1 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_shuru_alpha_44x41, NULL);
    ui->screen_1_imgbtn_1_label = lv_label_create(ui->screen_1_imgbtn_1);
    lv_label_set_text(ui->screen_1_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_1, 1502, 37);
    lv_obj_set_size(ui->screen_1_imgbtn_1, 44, 41);

    //Write style for screen_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

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

    //Write codes screen_1_imgbtn_10
    ui->screen_1_imgbtn_10 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_10, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_10, LV_IMGBTN_STATE_RELEASED, NULL, &_shouye1_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_10, LV_IMGBTN_STATE_PRESSED, NULL, &_shouye_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_10, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shouye_alpha_100x41, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_10, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shouye_alpha_100x41, NULL);
    ui->screen_1_imgbtn_10_label = lv_label_create(ui->screen_1_imgbtn_10);
    lv_label_set_text(ui->screen_1_imgbtn_10_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_10, 480, 993);
    lv_obj_set_size(ui->screen_1_imgbtn_10, 100, 41);

    //Write style for screen_1_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_10, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_10, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_10, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_10, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_10, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_10, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_9
    ui->screen_1_imgbtn_9 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_9, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_9, LV_IMGBTN_STATE_RELEASED, NULL, &_shuru22_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_9, LV_IMGBTN_STATE_PRESSED, NULL, &_shuru11_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_9, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shuru11_alpha_102x44, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_9, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shuru11_alpha_102x44, NULL);
    ui->screen_1_imgbtn_9_label = lv_label_create(ui->screen_1_imgbtn_9);
    lv_label_set_text(ui->screen_1_imgbtn_9_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_9, 613, 993);
    lv_obj_set_size(ui->screen_1_imgbtn_9, 102, 44);

    //Write style for screen_1_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_9, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_9, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_9, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_9, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_9, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_9, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_8
    ui->screen_1_imgbtn_8 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_8, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_8, LV_IMGBTN_STATE_RELEASED, NULL, &_topcastnormal2_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_8, LV_IMGBTN_STATE_PRESSED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_8, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_8, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_topcastnormal1_alpha_100x43, NULL);
    ui->screen_1_imgbtn_8_label = lv_label_create(ui->screen_1_imgbtn_8);
    lv_label_set_text(ui->screen_1_imgbtn_8_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_8, 743, 993);
    lv_obj_set_size(ui->screen_1_imgbtn_8, 100, 43);

    //Write style for screen_1_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_8, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_8, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_8, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_8, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_8, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_8, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_7
    ui->screen_1_imgbtn_7 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_tupian_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_tupian1_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_7, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_tupian1_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_7, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_tupian1_alpha_102x46, NULL);
    ui->screen_1_imgbtn_7_label = lv_label_create(ui->screen_1_imgbtn_7);
    lv_label_set_text(ui->screen_1_imgbtn_7_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_7, 862, 993);
    lv_obj_set_size(ui->screen_1_imgbtn_7, 102, 46);

    //Write style for screen_1_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_7, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_7, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_7, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_6
    ui->screen_1_imgbtn_6 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_shiping_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_shiping1_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shiping1_alpha_100x48, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_6, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shiping1_alpha_100x48, NULL);
    ui->screen_1_imgbtn_6_label = lv_label_create(ui->screen_1_imgbtn_6);
    lv_label_set_text(ui->screen_1_imgbtn_6_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_6, 974, 991);
    lv_obj_set_size(ui->screen_1_imgbtn_6, 100, 48);

    //Write style for screen_1_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_6, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_6, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_6, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_5
    ui->screen_1_imgbtn_5 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_shizhong_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_shizhong1_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shizhong1_alpha_102x49, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_5, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shizhong1_alpha_102x49, NULL);
    ui->screen_1_imgbtn_5_label = lv_label_create(ui->screen_1_imgbtn_5);
    lv_label_set_text(ui->screen_1_imgbtn_5_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_5, 1085, 991);
    lv_obj_set_size(ui->screen_1_imgbtn_5, 102, 49);

    //Write style for screen_1_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_5, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_5, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_5, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_4
    ui->screen_1_imgbtn_4 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_wangluo_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_wangluo2_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_wangluo2_alpha_102x46, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_wangluo2_alpha_102x46, NULL);
    ui->screen_1_imgbtn_4_label = lv_label_create(ui->screen_1_imgbtn_4);
    lv_label_set_text(ui->screen_1_imgbtn_4_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_4, 1199, 991);
    lv_obj_set_size(ui->screen_1_imgbtn_4, 102, 46);

    //Write style for screen_1_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_4, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_4, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_4, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_1_imgbtn_3
    ui->screen_1_imgbtn_3 = lv_imgbtn_create(ui->screen_1);
    lv_obj_add_flag(ui->screen_1_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_shezhi_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_shezhi1_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_shezhi1_alpha_105x48, NULL);
    lv_imgbtn_set_src(ui->screen_1_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_shezhi1_alpha_105x48, NULL);
    ui->screen_1_imgbtn_3_label = lv_label_create(ui->screen_1_imgbtn_3);
    lv_label_set_text(ui->screen_1_imgbtn_3_label, "");
    lv_label_set_long_mode(ui->screen_1_imgbtn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_1_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_imgbtn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_1_imgbtn_3, 1316, 991);
    lv_obj_set_size(ui->screen_1_imgbtn_3, 105, 48);

    //Write style for screen_1_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_imgbtn_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_1_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_1_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_1_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_1_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_1_imgbtn_3, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_imgbtn_3, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_1_imgbtn_3, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //The custom code of screen_1.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_1);

}
