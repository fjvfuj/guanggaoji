#include "gui_guider_keypad.h"

#include "GuiGuider/generated/events_init.h"
#include "lv_drivers/indev/evdev.h"
#include <linux/input.h>
#include <stdio.h>

#define MENU_DOUBLE_CLICK_MS 450
#define ADJUST_STEP 5
#define GUI_GUIDER_LV_KEY_MENU 12
#define GUI_GUIDER_KEY_DEBUG 1

static lv_ui *s_ui;
static lv_indev_t *s_indev;
static lv_group_t *s_group;
static lv_obj_t *s_bound_screen;
static lv_obj_t *s_edit_obj;
static lv_obj_t *s_debug_label;
static uint32_t s_last_menu_tick;

static void bind_current_screen(void);

static bool is_next_key(uint32_t key)
{
    return key == KEY_UP || key == KEY_RIGHT || key == KEY_NEXT ||
           key == LV_KEY_UP || key == LV_KEY_RIGHT || key == LV_KEY_NEXT;
}

static bool is_prev_key(uint32_t key)
{
    return key == KEY_PREVIOUS || key == LV_KEY_PREV;
}

static bool is_menu_key(uint32_t key)
{
    return key == KEY_MENU || key == KEY_OK || key == KEY_ENTER ||
           key == KEY_DOWN ||
           key == KEY_LEFT || key == GUI_GUIDER_LV_KEY_MENU ||
           key == LV_KEY_ENTER || key == LV_KEY_LEFT || key == LV_KEY_DOWN;
}

static bool is_obj(lv_obj_t *a, lv_obj_t *b)
{
    return a != NULL && a == b;
}

static void update_key_debug(uint32_t key, const char *action)
{
#if GUI_GUIDER_KEY_DEBUG
    if (!s_debug_label) {
        s_debug_label = lv_label_create(lv_layer_top());
        lv_obj_set_style_bg_color(s_debug_label, lv_color_hex(0x111827), LV_PART_MAIN);
        lv_obj_set_style_bg_opa(s_debug_label, LV_OPA_80, LV_PART_MAIN);
        lv_obj_set_style_text_color(s_debug_label, lv_color_hex(0xffffff), LV_PART_MAIN);
        lv_obj_set_style_pad_left(s_debug_label, 10, LV_PART_MAIN);
        lv_obj_set_style_pad_right(s_debug_label, 10, LV_PART_MAIN);
        lv_obj_set_style_pad_top(s_debug_label, 6, LV_PART_MAIN);
        lv_obj_set_style_pad_bottom(s_debug_label, 6, LV_PART_MAIN);
        lv_obj_set_style_radius(s_debug_label, 6, LV_PART_MAIN);
        lv_obj_align(s_debug_label, LV_ALIGN_TOP_LEFT, 20, 20);
    }

    lv_label_set_text_fmt(s_debug_label, "key=%u action=%s", (unsigned)key, action);
    lv_obj_move_foreground(s_debug_label);
#else
    (void)key;
    (void)action;
#endif
}

static bool is_adjust_obj(lv_obj_t *obj)
{
    if (!s_ui || !obj) {
        return false;
    }

    return is_obj(obj, s_ui->screen_6_screen_6_row_volume_bg) ||
           is_obj(obj, s_ui->screen_6_screen_6_row_brightness_bg);
}

static lv_obj_t *value_label_for_adjust_obj(lv_obj_t *obj)
{
    if (!s_ui || !obj) {
        return NULL;
    }

    if (is_obj(obj, s_ui->screen_6_screen_6_row_volume_bg)) {
        return s_ui->screen_6_screen_6_row_volume_value;
    }

    if (is_obj(obj, s_ui->screen_6_screen_6_row_brightness_bg)) {
        return s_ui->screen_6_screen_6_row_brightness_value;
    }

    return NULL;
}

static int parse_percent_label(lv_obj_t *label, int fallback)
{
    if (!label) {
        return fallback;
    }

    const char *text = lv_label_get_text(label);
    if (!text || !text[0]) {
        return fallback;
    }

    int value = fallback;
    if (sscanf(text, "%d", &value) != 1) {
        value = fallback;
    }

    if (value < 0) {
        value = 0;
    } else if (value > 100) {
        value = 100;
    }

    return value;
}

static bool adjust_current_value(int delta)
{
    if (!s_edit_obj) {
        return false;
    }

    lv_obj_t *label = value_label_for_adjust_obj(s_edit_obj);
    if (!label) {
        return false;
    }

    int value = parse_percent_label(label, 50) + delta;
    if (value < 0) {
        value = 0;
    } else if (value > 100) {
        value = 100;
    }

    lv_label_set_text_fmt(label, "%d%%", value);
    printf("[GUI-Guider] adjust %s to %d%%\n",
           is_obj(s_edit_obj, s_ui->screen_6_screen_6_row_volume_bg) ? "volume" : "brightness",
           value);
    return true;
}

static void set_edit_obj(lv_obj_t *obj)
{
    if (s_edit_obj && s_edit_obj != obj) {
        lv_obj_set_style_outline_width(s_edit_obj, 4, LV_PART_MAIN | LV_STATE_FOCUS_KEY);
        lv_obj_set_style_outline_color(s_edit_obj, lv_color_hex(0x574bff), LV_PART_MAIN | LV_STATE_FOCUS_KEY);
    }

    s_edit_obj = obj;

    if (s_edit_obj) {
        lv_obj_set_style_outline_width(s_edit_obj, 7, LV_PART_MAIN | LV_STATE_FOCUS_KEY);
        lv_obj_set_style_outline_color(s_edit_obj, lv_color_hex(0xffb020), LV_PART_MAIN | LV_STATE_FOCUS_KEY);
        printf("[GUI-Guider] enter adjust mode\n");
    }
}

static void load_home_screen(void)
{
    if (!s_ui) {
        return;
    }

    if (s_ui->screen_del) {
        setup_scr_screen(s_ui);
    }

    lv_scr_load_anim(s_ui->screen, LV_SCR_LOAD_ANIM_NONE, 0, 0, false);
    s_bound_screen = NULL;
    s_edit_obj = NULL;
    bind_current_screen();
    printf("[GUI-Guider] back to home\n");
}

static void keypad_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code != LV_EVENT_KEY) {
        return;
    }

    uint32_t *key = (uint32_t *)lv_event_get_param(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (!key) {
        return;
    }

    if (*key == LV_KEY_BACK) {
        load_home_screen();
        return;
    }

    if (*key == LV_KEY_ENTER && is_adjust_obj(target)) {
        if (s_edit_obj == target) {
            set_edit_obj(NULL);
            printf("[GUI-Guider] leave adjust mode\n");
        } else {
            set_edit_obj(target);
        }
    }
}

static void keypad_focus_cb(lv_group_t *group)
{
    lv_obj_t *focused = lv_group_get_focused(group);
    if (s_edit_obj && focused != s_edit_obj) {
        set_edit_obj(NULL);
    }
}

static void add_obj_to_group(lv_obj_t *obj)
{
    if (!s_group || !obj) {
        return;
    }

    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_outline_width(obj, 4, LV_PART_MAIN | LV_STATE_FOCUS_KEY);
    lv_obj_set_style_outline_color(obj, lv_color_hex(0x574bff), LV_PART_MAIN | LV_STATE_FOCUS_KEY);
    lv_obj_set_style_outline_opa(obj, LV_OPA_COVER, LV_PART_MAIN | LV_STATE_FOCUS_KEY);
    lv_obj_set_style_outline_pad(obj, 4, LV_PART_MAIN | LV_STATE_FOCUS_KEY);
    lv_obj_add_event_cb(obj, keypad_event_cb, LV_EVENT_KEY, NULL);
    lv_group_add_obj(s_group, obj);
}

static void add_clickable_children(lv_obj_t *parent)
{
    if (!parent) {
        return;
    }

    uint32_t child_cnt = lv_obj_get_child_cnt(parent);
    for (uint32_t i = 0; i < child_cnt; i++) {
        lv_obj_t *child = lv_obj_get_child(parent, i);
        if (!child) {
            continue;
        }

        if (lv_obj_has_flag(child, LV_OBJ_FLAG_CLICKABLE) &&
            !lv_obj_has_flag(child, LV_OBJ_FLAG_HIDDEN)) {
            add_obj_to_group(child);
        }

        add_clickable_children(child);
    }
}

static void activate_focused_obj(void)
{
    if (!s_group) {
        return;
    }

    lv_obj_t *focused = lv_group_get_focused(s_group);
    if (!focused) {
        return;
    }

    if (is_adjust_obj(focused)) {
        if (s_edit_obj == focused) {
            set_edit_obj(NULL);
            printf("[GUI-Guider] leave adjust mode\n");
        } else {
            set_edit_obj(focused);
        }
        return;
    }

    lv_event_send(focused, LV_EVENT_CLICKED, NULL);
    printf("[GUI-Guider] activate focused object\n");
}

static void focus_next_obj(void)
{
    if (!s_group) {
        return;
    }

    lv_group_focus_next(s_group);
}

static void focus_prev_obj(void)
{
    if (!s_group) {
        return;
    }

    lv_group_focus_prev(s_group);
}

static void bind_home_group(void)
{
    add_obj_to_group(s_ui->screen_img_3);  /* home */
    add_obj_to_group(s_ui->screen_img_4);  /* input */
    add_obj_to_group(s_ui->screen_img_5);  /* cast */
    add_obj_to_group(s_ui->screen_img_6);  /* image */
    add_obj_to_group(s_ui->screen_img_7);  /* video */
    add_obj_to_group(s_ui->screen_img_13); /* clock */
    add_obj_to_group(s_ui->screen_img_9);  /* network */
    add_obj_to_group(s_ui->screen_img_8);  /* setting */
}

static void bind_setting_group(void)
{
    add_obj_to_group(s_ui->screen_6_screen_6_row_volume_bg);
    add_obj_to_group(s_ui->screen_6_screen_6_row_brightness_bg);
    add_obj_to_group(s_ui->screen_6_screen_6_row_scale_bg);
    add_obj_to_group(s_ui->screen_6_screen_6_row_language_bg);
    add_obj_to_group(s_ui->screen_6_screen_6_row_upgrade_bg);
    add_obj_to_group(s_ui->screen_6_screen_6_row_info_bg);
    add_obj_to_group(s_ui->screen_6_btn_6);
}

static void reset_group(void)
{
    if (s_indev) {
        lv_indev_set_group(s_indev, NULL);
    }

    if (s_group) {
        lv_group_del(s_group);
        s_group = NULL;
    }

    s_group = lv_group_create();
    if (!s_group) {
        printf("[GUI-Guider] failed to create keypad group\n");
        return;
    }

    lv_group_set_wrap(s_group, true);
    lv_group_set_focus_cb(s_group, keypad_focus_cb);
    lv_group_set_default(s_group);
    if (s_indev) {
        lv_indev_set_group(s_indev, s_group);
    }
}

static void bind_current_screen(void)
{
    if (!s_ui || !s_indev) {
        return;
    }

    lv_obj_t *active = lv_scr_act();
    if (!active || active == s_bound_screen) {
        return;
    }

    reset_group();

    if (active == s_ui->screen) {
        bind_home_group();
    } else if (active == s_ui->screen_6) {
        bind_setting_group();
    } else {
        add_clickable_children(active);
    }

    if (lv_group_get_obj_count(s_group) > 0) {
        lv_group_focus_obj(lv_group_get_focused(s_group));
    }

    s_bound_screen = active;
    s_edit_obj = NULL;
    printf("[GUI-Guider] keypad group rebound, obj_count=%u\n", (unsigned)lv_group_get_obj_count(s_group));
}

static uint32_t gui_guider_key_map(uint32_t key)
{
    if (is_next_key(key)) {
        update_key_debug(key, "next");
        if (adjust_current_value(ADJUST_STEP)) {
            return KEY_RESERVED;
        }
        focus_next_obj();
        return KEY_RESERVED;
    }

    if (is_prev_key(key)) {
        update_key_debug(key, "prev");
        if (adjust_current_value(-ADJUST_STEP)) {
            return KEY_RESERVED;
        }
        focus_prev_obj();
        return KEY_RESERVED;
    }

    if (is_menu_key(key)) {
        update_key_debug(key, "menu");
        uint32_t now = lv_tick_get();
        if (s_last_menu_tick != 0 && (now - s_last_menu_tick) <= MENU_DOUBLE_CLICK_MS) {
            s_last_menu_tick = 0;
            load_home_screen();
            return KEY_RESERVED;
        }

        s_last_menu_tick = now;
        activate_focused_obj();
        return KEY_RESERVED;
    }

    update_key_debug(key, "pass");
    return key;
}

void gui_guider_keypad_init(lv_ui *ui, lv_indev_t *indev)
{
    s_ui = ui;
    s_indev = indev;
    register_global_key((void *)gui_guider_key_map);
    s_bound_screen = NULL;
    bind_current_screen();
}

void gui_guider_keypad_poll(void)
{
    bind_current_screen();
}
