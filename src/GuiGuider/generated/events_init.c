/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void screen_nav_input_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_1, guider_ui.screen_1_del, &guider_ui.screen_del, setup_scr_screen_1, LV_SCR_LOAD_ANIM_NONE, 0, 0, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_1, guider_ui.screen_1_del, &guider_ui.screen_del, setup_scr_screen_1, LV_SCR_LOAD_ANIM_NONE, 0, 0, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_2, guider_ui.screen_2_del, &guider_ui.screen_del, setup_scr_screen_2, LV_SCR_LOAD_ANIM_NONE, 0, 0, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_3, guider_ui.screen_3_del, &guider_ui.screen_del, setup_scr_screen_3, LV_SCR_LOAD_ANIM_NONE, 0, 0, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_7_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_4, guider_ui.screen_4_del, &guider_ui.screen_del, setup_scr_screen_4, LV_SCR_LOAD_ANIM_NONE, 0, 0, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_8_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_5, guider_ui.screen_5_del, &guider_ui.screen_del, setup_scr_screen_5, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_9_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_6, guider_ui.screen_6_del, &guider_ui.screen_del, setup_scr_screen_6, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void screen_imgbtn_10_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_7, guider_ui.screen_7_del, &guider_ui.screen_del, setup_scr_screen_7, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_screen (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_nav_input, screen_nav_input_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_1, screen_imgbtn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_4, screen_imgbtn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_5, screen_imgbtn_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_6, screen_imgbtn_6_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_7, screen_imgbtn_7_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_8, screen_imgbtn_8_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_9, screen_imgbtn_9_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_imgbtn_10, screen_imgbtn_10_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
