#include "lv_pro_new_ui.h"

#include "Embedded/emb_device.h"
#include "Embedded/emb_network.h"
#include "Embedded/emb_source.h"
#include "include/lv_common.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define UI_W 1920
#define UI_H 1080

#define UI_COLOR_BG        0xf3f6fb
#define UI_COLOR_SURFACE   0xffffff
#define UI_COLOR_CARD      0xf8fafc
#define UI_COLOR_INK       0x1e1b4b
#define UI_COLOR_MUTED     0x64748b
#define UI_COLOR_PRIMARY   0x6366f1
#define UI_COLOR_PRIMARY_2 0x818cf8
#define UI_COLOR_SOFT      0xeef2ff
#define UI_COLOR_HERO      0x1d2f52

typedef struct {
    const char *title;
    const char *pill;
    const char *symbol;
} ui_nav_item_t;

lv_obj_t *lv_pro_new_ui_activity;

static lv_obj_t *s_page_layer;
static lv_obj_t *s_nav_buttons[LV_PRO_NEW_PAGE_COUNT];
static lv_pro_new_page_t s_current_page = LV_PRO_NEW_PAGE_HOME;

static const ui_nav_item_t s_nav_items[LV_PRO_NEW_PAGE_COUNT] = {
    {"Home", "Main", "H"},
    {"Input", "HDMI / USB", "IN"},
    {"Cast", "Wireless Cast", "C"},
    {"Photo", "Photo Player", "P"},
    {"Video", "Video Player", "V"},
    {"Clock", "Clock", "T"},
    {"WiFi", "Network", "W"},
    {"Setting", "Settings", "S"},
};

static void set_panel_style(lv_obj_t *obj, lv_coord_t radius, lv_color_t color)
{
    lv_obj_set_style_radius(obj, radius, 0);
    lv_obj_set_style_bg_color(obj, color, 0);
    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    lv_obj_set_style_border_width(obj, 0, 0);
    lv_obj_set_style_shadow_width(obj, 18, 0);
    lv_obj_set_style_shadow_color(obj, lv_color_hex(0xd8e0ee), 0);
    lv_obj_set_style_shadow_opa(obj, LV_OPA_40, 0);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
}

static lv_obj_t *label_create(lv_obj_t *parent, const char *text, const lv_font_t *font,
                              lv_color_t color, lv_coord_t x, lv_coord_t y)
{
    lv_obj_t *label = lv_label_create(parent);

    lv_label_set_text(label, text);
    lv_obj_set_style_text_font(label, font, 0);
    lv_obj_set_style_text_color(label, color, 0);
    lv_obj_set_pos(label, x, y);
    return label;
}

static lv_obj_t *pill_create(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,
                             lv_coord_t w, lv_coord_t h, const char *text,
                             int active)
{
    lv_obj_t *pill = lv_obj_create(parent);
    lv_obj_t *label;

    set_panel_style(pill, h / 2, lv_color_hex(active ? UI_COLOR_SOFT : UI_COLOR_SURFACE));
    lv_obj_set_size(pill, w, h);
    lv_obj_set_pos(pill, x, y);
    lv_obj_set_style_shadow_width(pill, active ? 24 : 10, 0);
    lv_obj_set_style_shadow_opa(pill, active ? LV_OPA_30 : LV_OPA_20, 0);

    label = label_create(pill, text, &lv_font_montserrat_24,
                         lv_color_hex(active ? UI_COLOR_PRIMARY : UI_COLOR_MUTED), 0, 0);
    lv_obj_center(label);
    return pill;
}

static lv_obj_t *button_card_create(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,
                                    lv_coord_t w, lv_coord_t h, lv_coord_t radius,
                                    lv_color_t color)
{
    lv_obj_t *card = lv_btn_create(parent);

    set_panel_style(card, radius, color);
    lv_obj_set_size(card, w, h);
    lv_obj_set_pos(card, x, y);
    lv_obj_set_style_pad_all(card, 0, 0);
    return card;
}

static void clear_page_layer(void)
{
    if (s_page_layer != NULL) {
        lv_obj_clean(s_page_layer);
    }
}

static void nav_event_cb(lv_event_t *e)
{
    lv_pro_new_page_t page = (lv_pro_new_page_t)(uintptr_t)lv_event_get_user_data(e);
    lv_pro_new_ui_show_page(page);
}

static void update_bottom_nav(void)
{
    int i;

    for (i = 0; i < LV_PRO_NEW_PAGE_COUNT; i++) {
        lv_color_t bg = lv_color_hex(i == s_current_page ? UI_COLOR_SOFT : UI_COLOR_SURFACE);
        lv_color_t fg = lv_color_hex(i == s_current_page ? UI_COLOR_PRIMARY : UI_COLOR_MUTED);
        lv_obj_t *label;

        if (s_nav_buttons[i] == NULL) {
            continue;
        }

        lv_obj_set_style_bg_color(s_nav_buttons[i], bg, 0);
        label = lv_obj_get_child(s_nav_buttons[i], 0);
        if (label != NULL) {
            lv_obj_set_style_text_color(label, fg, 0);
        }
    }
}

static void create_topbar(lv_obj_t *root)
{
    lv_obj_t *brand;
    lv_obj_t *logo;
    lv_coord_t right_x = UI_W - 380;

    brand = button_card_create(root, 28, 30, 178, 58, 29, lv_color_hex(UI_COLOR_SURFACE));
    lv_obj_set_style_shadow_width(brand, 16, 0);

    logo = lv_obj_create(brand);
    set_panel_style(logo, 14, lv_color_hex(UI_COLOR_PRIMARY_2));
    lv_obj_set_size(logo, 44, 44);
    lv_obj_set_pos(logo, 8, 7);
    lv_obj_set_style_shadow_width(logo, 10, 0);
    label_create(logo, "E", &lv_font_montserrat_24, lv_color_white(), 14, 8);

    label_create(brand, "Entertainment", &lv_font_montserrat_24,
                 lv_color_hex(UI_COLOR_INK), 64, 17);

    pill_create(root, (UI_W - 176) / 2, 32, 176, 54, "Main", 1);
    pill_create(root, right_x, 32, 88, 54, "Input", 0);
    pill_create(root, right_x + 104, 32, 88, 54, "Cast", 0);
    pill_create(root, right_x + 208, 32, 104, 54, "WiFi", 0);
}

static void create_bottom_nav(lv_obj_t *root)
{
    lv_obj_t *nav;
    int i;
    lv_coord_t item_w = 140;
    lv_coord_t gap = 12;
    lv_coord_t start_x;

    nav = lv_obj_create(root);
    set_panel_style(nav, 40, lv_color_hex(UI_COLOR_SURFACE));
    lv_obj_set_size(nav, UI_W - 64, 78);
    lv_obj_set_pos(nav, 32, UI_H - 96);
    lv_obj_set_style_shadow_width(nav, 16, 0);

    start_x = ((UI_W - 64) - (item_w * LV_PRO_NEW_PAGE_COUNT + gap * (LV_PRO_NEW_PAGE_COUNT - 1))) / 2;

    for (i = 0; i < LV_PRO_NEW_PAGE_COUNT; i++) {
        lv_obj_t *btn = lv_btn_create(nav);
        char text[64];

        lv_obj_set_size(btn, item_w, 54);
        lv_obj_set_pos(btn, start_x + i * (item_w + gap), 12);
        lv_obj_set_style_radius(btn, 27, 0);
        lv_obj_set_style_border_width(btn, 0, 0);
        lv_obj_set_style_shadow_width(btn, 0, 0);
        lv_obj_set_style_bg_opa(btn, LV_OPA_COVER, 0);
        lv_obj_set_style_pad_all(btn, 0, 0);
        lv_obj_clear_flag(btn, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_add_event_cb(btn, nav_event_cb, LV_EVENT_CLICKED, (void *)(uintptr_t)i);

        snprintf(text, sizeof(text), "%s  %s", s_nav_items[i].symbol, s_nav_items[i].title);
        label_create(btn, text, &lv_font_montserrat_24, lv_color_hex(UI_COLOR_MUTED), 0, 0);
        lv_obj_center(lv_obj_get_child(btn, 0));
        s_nav_buttons[i] = btn;
    }

    update_bottom_nav();
}

static void create_status_tile(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,
                               lv_coord_t w, const char *icon,
                               const char *name, const char *value)
{
    lv_obj_t *tile;
    lv_obj_t *label;

    tile = button_card_create(parent, x, y, w, 112, 22, lv_color_hex(UI_COLOR_CARD));
    lv_obj_set_style_shadow_width(tile, 6, 0);

    label_create(tile, icon, &lv_font_montserrat_24, lv_color_hex(UI_COLOR_PRIMARY), 28, 26);
    label_create(tile, name, &lv_font_montserrat_24, lv_color_hex(UI_COLOR_MUTED), 78, 22);
    label = label_create(tile, value, &GENERAL_FONT_MID, lv_color_hex(UI_COLOR_INK), 78, 58);
    lv_obj_set_style_text_font(label, &GENERAL_FONT_BIG, 0);
}

static void get_home_state(char *source, size_t source_size,
                           char *network, size_t network_size,
                           char *version, size_t version_size)
{
    emb_source_status_t source_status;
    emb_network_status_t net_status;
    emb_device_info_t device_info;

    snprintf(source, source_size, "%s", "HDMI");
    snprintf(network, network_size, "%s", "Offline");
    snprintf(version, version_size, "%s", "Unknown");

    if (emb_source_get_status(&source_status) == EMB_OK) {
        if (source_status.current == EMB_SOURCE_USB) {
            snprintf(source, source_size, "%s", "USB");
        } else if (source_status.current == EMB_SOURCE_TF) {
            snprintf(source, source_size, "%s", "TF");
        } else if (source_status.current == EMB_SOURCE_HDMI) {
            snprintf(source, source_size, "%s", "HDMI");
        }
    }

    if (emb_network_get_status(&net_status) == EMB_OK && net_status.connected) {
        if (net_status.ssid[0] != '\0') {
            snprintf(network, network_size, "%s", net_status.ssid);
        } else if (net_status.iface[0] != '\0') {
            snprintf(network, network_size, "%s", net_status.iface);
        } else {
            snprintf(network, network_size, "%s", "Online");
        }
    }

    if (emb_device_get_info(&device_info) == EMB_OK &&
        device_info.software_version[0] != '\0') {
        snprintf(version, version_size, "%s", device_info.software_version);
    }
}

static void create_home_page(void)
{
    lv_obj_t *hero;
    lv_obj_t *overlay;
    lv_obj_t *quick;
    lv_obj_t *time_card;
    lv_obj_t *label;
    char source[32];
    char network[64];
    char version[64];

    get_home_state(source, sizeof(source), network, sizeof(network), version, sizeof(version));

    hero = lv_obj_create(s_page_layer);
    set_panel_style(hero, 28, lv_color_hex(UI_COLOR_HERO));
    lv_obj_set_size(hero, UI_W - 44, 700);
    lv_obj_set_pos(hero, 22, 0);
    lv_obj_set_style_shadow_width(hero, 0, 0);

    overlay = lv_obj_create(hero);
    lv_obj_set_size(overlay, UI_W - 44, 700);
    lv_obj_set_pos(overlay, 0, 0);
    lv_obj_set_style_bg_color(overlay, lv_color_hex(0x10213d), 0);
    lv_obj_set_style_bg_grad_color(overlay, lv_color_hex(0x5763a8), 0);
    lv_obj_set_style_bg_grad_dir(overlay, LV_GRAD_DIR_HOR, 0);
    lv_obj_set_style_bg_opa(overlay, LV_OPA_COVER, 0);
    lv_obj_set_style_border_width(overlay, 0, 0);
    lv_obj_set_style_radius(overlay, 28, 0);
    lv_obj_clear_flag(overlay, LV_OBJ_FLAG_SCROLLABLE);

    pill_create(hero, 26, 26, 128, 44, source, 0);
    pill_create(hero, UI_W - 44 - 176, 26, 144, 44, network, 0);
    pill_create(hero, 36, 498, 170, 40, "Premium", 0);

    label = label_create(hero, "Mountain Dawn", &lv_font_montserrat_46,
                         lv_color_white(), 36, 542);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_46, 0);
    label_create(hero, "Photo carousel shell, emb_* status ready",
                 &lv_font_montserrat_24, lv_color_white(), 40, 634);

    time_card = lv_obj_create(s_page_layer);
    set_panel_style(time_card, 24, lv_color_hex(UI_COLOR_SURFACE));
    lv_obj_set_size(time_card, 320, 122);
    lv_obj_set_pos(time_card, 22, 718);
    lv_obj_set_style_shadow_width(time_card, 12, 0);
    label_create(time_card, "Shenzhen", &lv_font_montserrat_24,
                 lv_color_hex(UI_COLOR_MUTED), 22, 18);
    label = label_create(time_card, "16:57", &lv_font_montserrat_46,
                         lv_color_hex(UI_COLOR_INK), 22, 48);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_46, 0);
    label_create(time_card, "May 22  Fri  27C", &lv_font_montserrat_24,
                 lv_color_hex(UI_COLOR_MUTED), 22, 92);

    quick = lv_obj_create(s_page_layer);
    set_panel_style(quick, 24, lv_color_hex(UI_COLOR_SURFACE));
    lv_obj_set_size(quick, UI_W - 384, 122);
    lv_obj_set_pos(quick, 364, 718);
    lv_obj_set_style_shadow_width(quick, 12, 0);

    create_status_tile(quick, 18, 12, 360, "IN", "Source", source);
    create_status_tile(quick, 392, 12, 360, "C", "Cast", "Standby");
    create_status_tile(quick, 766, 12, 360, "W", "Network", network);
    create_status_tile(quick, 1140, 12, 360, "S", "Version", version);
}

static void create_placeholder_page(lv_pro_new_page_t page)
{
    lv_obj_t *panel;
    lv_obj_t *label;
    char title[160];

    panel = lv_obj_create(s_page_layer);
    set_panel_style(panel, 30, lv_color_hex(UI_COLOR_SURFACE));
    lv_obj_set_size(panel, UI_W - 88, 720);
    lv_obj_set_pos(panel, 44, 0);

    snprintf(title, sizeof(title), "%s\n\nLVGL page shell is ready.\nNext step: connect this page to emb_*.",
             s_nav_items[page].pill);

    label = label_create(panel, title, &GENERAL_FONT_BIG, lv_color_hex(UI_COLOR_INK), 0, 0);
    lv_label_set_long_mode(label, LV_LABEL_LONG_WRAP);
    lv_obj_set_width(label, UI_W - 240);
    lv_obj_center(label);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
}

void lv_pro_new_ui_show_page(lv_pro_new_page_t page)
{
    if (page >= LV_PRO_NEW_PAGE_COUNT) {
        page = LV_PRO_NEW_PAGE_HOME;
    }

    s_current_page = page;
    clear_page_layer();

    if (page == LV_PRO_NEW_PAGE_HOME) {
        create_home_page();
    } else {
        create_placeholder_page(page);
    }

    update_bottom_nav();
}

lv_pro_new_page_t lv_pro_new_ui_get_page(void)
{
    return s_current_page;
}

void lv_pro_new_ui_init(void)
{
    if (lv_pro_new_ui_activity != NULL) {
        lv_obj_del(lv_pro_new_ui_activity);
        lv_pro_new_ui_activity = NULL;
    }

    lv_pro_new_ui_activity = lv_obj_create(NULL);
    lv_obj_set_size(lv_pro_new_ui_activity, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_color(lv_pro_new_ui_activity, lv_color_hex(UI_COLOR_BG), 0);
    lv_obj_set_style_bg_opa(lv_pro_new_ui_activity, LV_OPA_COVER, 0);
    lv_obj_set_style_border_width(lv_pro_new_ui_activity, 0, 0);
    lv_obj_clear_flag(lv_pro_new_ui_activity, LV_OBJ_FLAG_SCROLLABLE);

    create_topbar(lv_pro_new_ui_activity);

    s_page_layer = lv_obj_create(lv_pro_new_ui_activity);
    lv_obj_set_size(s_page_layer, UI_W, 840);
    lv_obj_set_pos(s_page_layer, 0, 108);
    lv_obj_set_style_bg_opa(s_page_layer, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_width(s_page_layer, 0, 0);
    lv_obj_set_style_pad_all(s_page_layer, 0, 0);
    lv_obj_clear_flag(s_page_layer, LV_OBJ_FLAG_SCROLLABLE);

    create_bottom_nav(lv_pro_new_ui_activity);
    lv_pro_new_ui_show_page(LV_PRO_NEW_PAGE_HOME);
}
