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
#define TOPBAR_H 88
#define PAGE_Y 92
#define PAGE_H 790
#define NAV_Y 900
#define NAV_H 76

#define C_BG          0xf4f7fb
#define C_PANEL       0xffffff
#define C_SOFT        0xf6f8fc
#define C_LIGHT       0xeef3fa
#define C_INK         0x17143f
#define C_MUTED       0x687894
#define C_PRIMARY     0x6c63ff
#define C_PRIMARY_2   0x7c6bff
#define C_LINE        0xe6ebf3
#define C_DARK        0x24205f

typedef struct {
    const char *title;
    const char *full_title;
    const char *icon;
} ui_nav_item_t;

extern lv_indev_t *evdev_indev;

lv_obj_t *lv_pro_new_ui_activity;

static lv_obj_t *s_topbar;
static lv_obj_t *s_page_layer;
static lv_obj_t *s_bottom_nav;
static lv_obj_t *s_nav_buttons[LV_PRO_NEW_PAGE_COUNT];
static lv_group_t *s_nav_group;
static lv_pro_new_page_t s_current_page = LV_PRO_NEW_PAGE_HOME;

static const ui_nav_item_t s_nav_items[LV_PRO_NEW_PAGE_COUNT] = {
    {"首页", "一级主界面", "H"},
    {"输入", "有线输入源", "I"},
    {"投屏", "无线投屏", "C"},
    {"图片", "图片播放", "P"},
    {"视频", "视频播放", "V"},
    {"时钟", "实时时钟", "T"},
    {"网络", "WiFi 网络", "W"},
    {"设置", "主设置", "S"},
};

static const lv_font_t *font_cn_small(void) { return &GENERAL_FONT_SMALL; }
static const lv_font_t *font_cn_mid(void) { return &GENERAL_FONT_MID; }
static const lv_font_t *font_cn_big(void) { return &GENERAL_FONT_BIG; }

static void style_rect(lv_obj_t *obj, lv_coord_t radius, lv_color_t bg)
{
    lv_obj_set_style_radius(obj, radius, 0);
    lv_obj_set_style_bg_color(obj, bg, 0);
    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    lv_obj_set_style_border_width(obj, 0, 0);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
}

static void style_shadow(lv_obj_t *obj, lv_coord_t width, lv_opa_t opa)
{
    lv_obj_set_style_shadow_width(obj, width, 0);
    lv_obj_set_style_shadow_color(obj, lv_color_hex(0xd6dde9), 0);
    lv_obj_set_style_shadow_opa(obj, opa, 0);
    lv_obj_set_style_shadow_ofs_y(obj, 12, 0);
}

static void style_focus(lv_obj_t *obj)
{
    lv_obj_set_style_outline_width(obj, 3, LV_STATE_FOCUSED);
    lv_obj_set_style_outline_color(obj, lv_color_hex(C_PRIMARY), LV_STATE_FOCUSED);
    lv_obj_set_style_outline_pad(obj, 2, LV_STATE_FOCUSED);
}

static lv_obj_t *box(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,
                     lv_coord_t w, lv_coord_t h, lv_coord_t radius,
                     lv_color_t bg)
{
    lv_obj_t *obj = lv_obj_create(parent);

    style_rect(obj, radius, bg);
    lv_obj_set_size(obj, w, h);
    lv_obj_set_pos(obj, x, y);
    style_shadow(obj, 18, LV_OPA_20);
    return obj;
}

static lv_obj_t *btn_box(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,
                         lv_coord_t w, lv_coord_t h, lv_coord_t radius,
                         lv_color_t bg)
{
    lv_obj_t *obj = lv_btn_create(parent);

    style_rect(obj, radius, bg);
    lv_obj_set_size(obj, w, h);
    lv_obj_set_pos(obj, x, y);
    lv_obj_set_style_pad_all(obj, 0, 0);
    style_shadow(obj, 14, LV_OPA_20);
    style_focus(obj);
    return obj;
}

static lv_obj_t *label(lv_obj_t *parent, const char *text, const lv_font_t *font,
                       lv_color_t color, lv_coord_t x, lv_coord_t y)
{
    lv_obj_t *obj = lv_label_create(parent);

    lv_label_set_text(obj, text);
    lv_obj_set_style_text_font(obj, font, 0);
    lv_obj_set_style_text_color(obj, color, 0);
    lv_obj_set_pos(obj, x, y);
    return obj;
}

static lv_obj_t *label_fit(lv_obj_t *parent, const char *text, const lv_font_t *font,
                           lv_color_t color, lv_coord_t x, lv_coord_t y,
                           lv_coord_t w)
{
    lv_obj_t *obj = label(parent, text, font, color, x, y);

    lv_obj_set_width(obj, w);
    lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
    return obj;
}

static lv_obj_t *center_label(lv_obj_t *parent, const char *text, const lv_font_t *font,
                              lv_color_t color)
{
    lv_obj_t *obj = label(parent, text, font, color, 0, 0);
    lv_obj_center(obj);
    return obj;
}

static lv_obj_t *center_label_fit(lv_obj_t *parent, const char *text,
                                  const lv_font_t *font, lv_color_t color)
{
    lv_coord_t w = lv_obj_get_width(parent);
    lv_obj_t *obj = label_fit(parent, text, font, color, 0, 0, w > 12 ? w - 12 : w);

    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_center(obj);
    return obj;
}

static lv_obj_t *pill(lv_obj_t *parent, lv_coord_t x, lv_coord_t y,
                      lv_coord_t w, lv_coord_t h, const char *icon,
                      const char *text, int active)
{
    lv_obj_t *obj = box(parent, x, y, w, h, h / 2,
                        lv_color_hex(active ? 0xf0f2ff : C_PANEL));
    lv_color_t color = lv_color_hex(active ? C_PRIMARY : C_MUTED);
    char buf[64];

    lv_obj_set_style_shadow_width(obj, active ? 22 : 12, 0);
    lv_obj_set_style_shadow_opa(obj, active ? LV_OPA_30 : LV_OPA_10, 0);
    if (icon != NULL && icon[0] != '\0') {
        snprintf(buf, sizeof(buf), "%s %s", icon, text);
    } else {
        snprintf(buf, sizeof(buf), "%s", text);
    }
    center_label_fit(obj, buf, font_cn_small(), color);
    return obj;
}

static void clear_page_layer(void)
{
    if (s_page_layer != NULL) {
        lv_obj_clean(s_page_layer);
    }
}

static int page_is_media(lv_pro_new_page_t page)
{
    return page == LV_PRO_NEW_PAGE_PHOTO || page == LV_PRO_NEW_PAGE_VIDEO;
}

static void nav_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_pro_new_page_t page = (lv_pro_new_page_t)(uintptr_t)lv_event_get_user_data(e);

    if (code == LV_EVENT_CLICKED) {
        lv_pro_new_ui_show_page(page);
    } else if (code == LV_EVENT_KEY) {
        uint32_t *key = (uint32_t *)lv_event_get_param(e);
        if (key != NULL && *key == LV_KEY_ENTER) {
            lv_pro_new_ui_show_page(page);
        }
    }
}

static void update_bottom_nav(void)
{
    int i;

    for (i = 0; i < LV_PRO_NEW_PAGE_COUNT; i++) {
        lv_color_t bg = lv_color_hex(i == s_current_page ? 0xeef2ff : C_PANEL);
        lv_color_t fg = lv_color_hex(i == s_current_page ? C_PRIMARY : C_MUTED);
        lv_obj_t *child;

        if (s_nav_buttons[i] == NULL) {
            continue;
        }

        lv_obj_set_style_bg_color(s_nav_buttons[i], bg, 0);
        child = lv_obj_get_child(s_nav_buttons[i], 0);
        if (child != NULL) {
            lv_obj_set_style_text_color(child, fg, 0);
        }
    }
}

static void create_topbar(lv_obj_t *root)
{
    lv_obj_t *brand;
    lv_obj_t *logo;
    lv_obj_t *title;

    s_topbar = lv_obj_create(root);
    style_rect(s_topbar, 0, lv_color_hex(C_BG));
    lv_obj_set_style_bg_opa(s_topbar, LV_OPA_TRANSP, 0);
    lv_obj_set_size(s_topbar, UI_W, TOPBAR_H);
    lv_obj_set_pos(s_topbar, 0, 0);

    brand = box(s_topbar, 28, 18, 196, 58, 29, lv_color_hex(C_PANEL));
    logo = box(brand, 9, 8, 42, 42, 12, lv_color_hex(C_PRIMARY_2));
    style_shadow(logo, 12, LV_OPA_30);
    center_label(logo, "E", &lv_font_montserrat_24, lv_color_white());
    title = label_fit(brand, "娱乐便携屏", font_cn_mid(), lv_color_hex(C_INK), 64, 15, 120);
    lv_label_set_long_mode(title, LV_LABEL_LONG_CLIP);

    pill(s_topbar, 804, 18, 226, 52, s_nav_items[s_current_page].icon,
         s_nav_items[s_current_page].full_title, 1);
    pill(s_topbar, 1556, 18, 104, 52, "I", "输入", 0);
    pill(s_topbar, 1672, 18, 104, 52, "C", "投屏", 0);
    pill(s_topbar, 1788, 18, 104, 52, "W", "WiFi", 0);
}

static void create_bottom_nav(lv_obj_t *root)
{
    int i;
    lv_coord_t item_w = 128;
    lv_coord_t gap = 20;
    lv_coord_t start_x;

    s_bottom_nav = box(root, 32, NAV_Y, UI_W - 64, NAV_H, 38, lv_color_hex(C_PANEL));
    lv_obj_set_style_shadow_width(s_bottom_nav, 26, 0);
    lv_obj_set_style_shadow_opa(s_bottom_nav, LV_OPA_20, 0);

    start_x = (UI_W - 64 - item_w * LV_PRO_NEW_PAGE_COUNT -
               gap * (LV_PRO_NEW_PAGE_COUNT - 1)) / 2;
    for (i = 0; i < LV_PRO_NEW_PAGE_COUNT; i++) {
        lv_obj_t *btn = lv_btn_create(s_bottom_nav);

        style_rect(btn, 28, lv_color_hex(C_PANEL));
        style_focus(btn);
        lv_obj_set_size(btn, item_w, 54);
        lv_obj_set_pos(btn, start_x + i * (item_w + gap), 11);
        lv_obj_set_style_shadow_width(btn, 0, 0);
        lv_obj_set_style_pad_all(btn, 0, 0);
        lv_obj_add_event_cb(btn, nav_event_cb, LV_EVENT_CLICKED, (void *)(uintptr_t)i);
        lv_obj_add_event_cb(btn, nav_event_cb, LV_EVENT_KEY, (void *)(uintptr_t)i);
        center_label_fit(btn, s_nav_items[i].title, font_cn_mid(), lv_color_hex(C_MUTED));
        s_nav_buttons[i] = btn;
        if (s_nav_group != NULL) {
            lv_group_add_obj(s_nav_group, btn);
        }
    }

    if (s_nav_group != NULL && s_nav_buttons[LV_PRO_NEW_PAGE_HOME] != NULL) {
        lv_group_focus_obj(s_nav_buttons[LV_PRO_NEW_PAGE_HOME]);
    }
    update_bottom_nav();
}

static void update_shell_visibility(lv_pro_new_page_t page)
{
    int media = page_is_media(page);

    if (s_topbar != NULL) {
        if (media) lv_obj_add_flag(s_topbar, LV_OBJ_FLAG_HIDDEN);
        else lv_obj_clear_flag(s_topbar, LV_OBJ_FLAG_HIDDEN);
    }
    if (s_bottom_nav != NULL) {
        lv_obj_clear_flag(s_bottom_nav, LV_OBJ_FLAG_HIDDEN);
    }
    if (s_page_layer != NULL) {
        lv_obj_set_pos(s_page_layer, 0, media ? 0 : PAGE_Y);
        lv_obj_set_size(s_page_layer, UI_W, media ? UI_H : PAGE_H);
    }
}

static void read_home_state(char *source, size_t source_size,
                            char *network, size_t network_size,
                            char *version, size_t version_size)
{
    emb_source_status_t source_status;
    emb_network_status_t net_status;
    emb_device_info_t device_info;

    snprintf(source, source_size, "%s", "HDMI");
    snprintf(network, network_size, "%s", "已连接");
    snprintf(version, version_size, "%s", "V2.1.0");

    if (emb_source_get_status(&source_status) == EMB_OK) {
        if (source_status.current == EMB_SOURCE_USB) {
            snprintf(source, source_size, "%s", "USB");
        } else if (source_status.current == EMB_SOURCE_TF) {
            snprintf(source, source_size, "%s", "TF");
        }
    }

    if (emb_network_get_status(&net_status) == EMB_OK && net_status.connected) {
        if (net_status.ssid[0] != '\0') {
            snprintf(network, network_size, "%s", net_status.ssid);
        } else {
            snprintf(network, network_size, "%s", "已连接");
        }
    }

    if (emb_device_get_info(&device_info) == EMB_OK &&
        device_info.software_version[0] != '\0') {
        snprintf(version, version_size, "%s", device_info.software_version);
    }
}

static void create_home_status_tile(lv_obj_t *parent, lv_coord_t x, const char *icon,
                                    const char *name, const char *value)
{
    lv_obj_t *tile = box(parent, x, 14, 360, 90, 18, lv_color_hex(C_SOFT));

    lv_obj_set_style_shadow_width(tile, 0, 0);
    label(tile, icon, &lv_font_montserrat_24, lv_color_hex(C_PRIMARY), 28, 30);
    label_fit(tile, name, font_cn_small(), lv_color_hex(C_MUTED), 78, 21, 260);
    label_fit(tile, value, font_cn_mid(), lv_color_hex(C_INK), 78, 54, 260);
}

static void create_home_page(void)
{
    lv_obj_t *hero;
    lv_obj_t *overlay;
    lv_obj_t *time_card;
    lv_obj_t *quick;
    lv_obj_t *title;
    char source[32];
    char network[64];
    char version[64];

    read_home_state(source, sizeof(source), network, sizeof(network), version, sizeof(version));

    hero = box(s_page_layer, 22, 0, UI_W - 44, 610, 28, lv_color_hex(0x253f62));
    lv_obj_set_style_bg_grad_color(hero, lv_color_hex(0x0d2350), 0);
    lv_obj_set_style_bg_grad_dir(hero, LV_GRAD_DIR_VER, 0);
    lv_obj_set_style_shadow_width(hero, 0, 0);

    overlay = lv_obj_create(hero);
    style_rect(overlay, 28, lv_color_hex(0x254b74));
    lv_obj_set_size(overlay, UI_W - 44, 610);
    lv_obj_set_pos(overlay, 0, 0);
    lv_obj_set_style_bg_grad_color(overlay, lv_color_hex(0x151b4f), 0);
    lv_obj_set_style_bg_grad_dir(overlay, LV_GRAD_DIR_VER, 0);
    lv_obj_set_style_bg_opa(overlay, LV_OPA_70, 0);

    pill(hero, 24, 26, 124, 46, NULL, "HDMI 在线", 0);
    pill(hero, UI_W - 44 - 136, 26, 112, 46, NULL, "Home_5G", 0);
    pill(hero, 36, 422, 150, 40, NULL, "高清便携屏", 0);

    title = label(hero, "Mountain Dawn", &lv_font_montserrat_46, lv_color_white(), 36, 470);
    lv_obj_set_style_text_font(title, &lv_font_montserrat_46, 0);
    label_fit(hero, "图片轮播 / 背景音乐已开启", font_cn_mid(),
              lv_color_white(), 40, 560, 760);

    time_card = box(s_page_layer, 22, 622, 320, 118, 24, lv_color_hex(C_PANEL));
    label(time_card, "Weather", font_cn_small(), lv_color_hex(C_MUTED), 22, 16);
    label(time_card, "16:57", &lv_font_montserrat_46, lv_color_hex(C_DARK), 22, 42);
    label(time_card, "5/22 Fri 27C", font_cn_small(), lv_color_hex(C_MUTED), 22, 88);

    quick = box(s_page_layer, 356, 622, UI_W - 378, 118, 24, lv_color_hex(C_PANEL));
    create_home_status_tile(quick, 16, "I", "信号源", source);
    create_home_status_tile(quick, 388, "C", "无线投屏", "待连接");
    create_home_status_tile(quick, 760, "W", "网络", network);
    create_home_status_tile(quick, 1132, "S", "设置", version);
}

static void create_input_page(void)
{
    lv_obj_t *stage;
    lv_obj_t *screen;
    lv_obj_t *hdmi;
    lv_obj_t *usb;

    stage = box(s_page_layer, 410, 245, 500, 344, 26, lv_color_hex(C_LIGHT));
    lv_obj_set_style_shadow_width(stage, 26, 0);
    screen = box(stage, 110, 88, 280, 170, 16, lv_color_hex(C_DARK));
    center_label(screen, "HDMI", &lv_font_montserrat_32, lv_color_white());

    hdmi = btn_box(s_page_layer, 940, 310, 286, 210, 26, lv_color_hex(0xf1f3ff));
    lv_obj_set_style_border_width(hdmi, 2, 0);
    lv_obj_set_style_border_color(hdmi, lv_color_hex(C_PRIMARY), 0);
    box(hdmi, 32, 28, 54, 54, 14, lv_color_hex(C_PRIMARY_2));
    label(hdmi, "HDMI", &lv_font_montserrat_32, lv_color_hex(C_INK), 104, 92);
    label_fit(hdmi, "外接主机 / 电脑 / 游戏机", font_cn_small(),
              lv_color_hex(C_MUTED), 52, 154, 210);
    label(hdmi, "OK", &lv_font_montserrat_24, lv_color_hex(0x10b981), 232, 30);

    usb = btn_box(s_page_layer, 1244, 310, 286, 210, 26, lv_color_hex(C_PANEL));
    box(usb, 32, 28, 54, 54, 14, lv_color_hex(C_PRIMARY_2));
    label(usb, "USB", &lv_font_montserrat_32, lv_color_hex(C_INK), 112, 92);
    label_fit(usb, "U盘 / TF卡媒体播放", font_cn_small(),
              lv_color_hex(C_MUTED), 52, 154, 210);
}

static void cast_card(lv_obj_t *parent, lv_coord_t x, const char *icon,
                      const char *title, const char *desc, const char *tags)
{
    lv_obj_t *card = btn_box(parent, x, 94, 608, 450, 28, lv_color_hex(C_PANEL));
    lv_obj_t *ico = box(card, 30, 30, 64, 64, 16, lv_color_hex(C_PRIMARY_2));

    center_label(ico, icon, &lv_font_montserrat_24, lv_color_white());
    label_fit(card, title, font_cn_big(), lv_color_hex(C_INK), 228, 130, 260);
    label_fit(card, desc, font_cn_small(), lv_color_hex(C_MUTED), 82, 196, 470);
    label_fit(card, tags, font_cn_small(), lv_color_hex(C_PRIMARY), 42, 366, 500);
    label(card, ">", &lv_font_montserrat_24, lv_color_hex(C_MUTED), 570, 360);
}

static void create_cast_page(void)
{
    label(s_page_layer, "无线投屏", font_cn_mid(), lv_color_hex(C_PRIMARY), 42, 28);
    label_fit(s_page_layer, "选择设备类型后按提示连接", font_cn_big(),
              lv_color_hex(C_INK), 1320, 24, 540);
    cast_card(s_page_layer, 42, "P", "手机投屏",
              "手机选择屏幕镜像或无线投屏连接",
              "Android / iOS / HarmonyOS");
    cast_card(s_page_layer, 672, "M", "电脑投屏",
              "Windows 使用 Win+K Mac 使用隔空播放",
              "Windows / Mac / Miracast");
    cast_card(s_page_layer, 1302, "2", "P2P 模式",
              "无需路由器 可直连设备",
              "热点直连 / 低延迟");
}

static void create_clock_page(void)
{
    lv_obj_t *bg = box(s_page_layer, 30, 0, UI_W - 60, 840, 28, lv_color_hex(C_LIGHT));
    lv_obj_t *panel = box(bg, 630, 206, 540, 452, 36, lv_color_hex(C_PANEL));
    lv_obj_t *time;

    lv_obj_set_style_shadow_width(bg, 0, 0);
    label(panel, "实时时钟", font_cn_small(), lv_color_hex(C_MUTED), 224, 58);
    time = label(panel, "16:57", &lv_font_montserrat_46, lv_color_hex(C_DARK), 76, 116);
    lv_obj_set_style_text_font(time, &lv_font_montserrat_46, 0);
    lv_obj_set_style_text_letter_space(time, 2, 0);
    label(panel, "网络同步 / RTC 离线走时", font_cn_small(), lv_color_hex(C_MUTED), 150, 280);
    pill(panel, 186, 336, 168, 54, "T", "立即同步", 1);
}

static void draw_qr(lv_obj_t *parent, lv_coord_t x, lv_coord_t y, lv_coord_t size)
{
    int row;
    int col;
    lv_coord_t cell = size / 17;
    lv_obj_t *qr = box(parent, x, y, size, size, 18, lv_color_hex(C_PANEL));

    lv_obj_set_style_shadow_width(qr, 14, 0);
    for (row = 0; row < 17; row++) {
        for (col = 0; col < 17; col++) {
            int finder = (row < 5 && col < 5) ||
                         (row < 5 && col > 11) ||
                         (row > 11 && col < 5);
            int on = finder ? (row == 0 || row == 4 || col == 0 || col == 4 ||
                               (row >= 2 && row <= 3 && col >= 2 && col <= 3)) :
                     (((row * 7 + col * 5 + row * col) % 4) != 0);
            if (on) {
                lv_obj_t *dot = lv_obj_create(qr);
                style_rect(dot, 0, lv_color_hex(C_DARK));
                lv_obj_set_size(dot, cell - 1, cell - 1);
                lv_obj_set_pos(dot, 12 + col * cell, 12 + row * cell);
            }
        }
    }
}

static void create_wifi_page(void)
{
    lv_obj_t *side = box(s_page_layer, 30, 0, 370, 840, 28, lv_color_hex(0xf0f3ff));
    lv_obj_t *main = box(s_page_layer, 420, 0, UI_W - 450, 840, 28, lv_color_hex(C_PANEL));
    lv_obj_t *ico;
    lv_obj_t *line;

    lv_obj_set_style_shadow_width(side, 8, 0);
    label(main, "扫码连接 WiFi", font_cn_mid(), lv_color_hex(C_INK), 26, 30);
    line = lv_obj_create(main);
    style_rect(line, 0, lv_color_hex(C_LINE));
    lv_obj_set_size(line, UI_W - 520, 2);
    lv_obj_set_pos(line, 26, 78);

    ico = box(side, 144, 288, 78, 78, 18, lv_color_hex(C_PRIMARY_2));
    center_label(ico, "W", &lv_font_montserrat_32, lv_color_white());
    label(side, "当前网络", font_cn_small(), lv_color_hex(C_MUTED), 148, 390);
    label(side, "Home_5G", &lv_font_montserrat_32, lv_color_hex(C_INK), 104, 438);
    label_fit(side, "普通上网模式 支持投屏切换", font_cn_small(),
              lv_color_hex(C_MUTED), 68, 500, 260);
    pill(side, 116, 544, 140, 48, NULL, "进入 P2P", 0);

    label(main, "W  Home_5G", &lv_font_montserrat_46, lv_color_hex(C_INK), 620, 246);
    draw_qr(main, 610, 326, 270);
    label(main, "1. 用手机连接本机 SSID", font_cn_big(), lv_color_hex(C_INK), 586, 626);
    label(main, "2. 扫描二维码配置 WiFi", font_cn_big(), lv_color_hex(C_INK), 586, 670);
}

static void setting_row(lv_obj_t *parent, lv_coord_t y, const char *icon,
                        const char *name, const char *value)
{
    lv_obj_t *row = box(parent, 34, y, 1190, 92, 18, lv_color_hex(C_SOFT));

    lv_obj_set_style_shadow_width(row, 0, 0);
    label(row, icon, &lv_font_montserrat_24, lv_color_hex(C_PRIMARY), 28, 30);
    label_fit(row, name, font_cn_mid(), lv_color_hex(C_INK), 510, 30, 360);
    label_fit(row, value, font_cn_small(), lv_color_hex(C_MUTED), 1050, 33, 120);
    label(row, ">", &lv_font_montserrat_24, lv_color_hex(C_MUTED), 1160, 30);
}

static void create_setting_page(void)
{
    lv_obj_t *side = box(s_page_layer, 58, 46, 430, 748, 28, lv_color_hex(C_PANEL));
    lv_obj_t *main = box(s_page_layer, 512, 46, 1280, 748, 28, lv_color_hex(C_PANEL));
    lv_obj_t *ico = box(side, 160, 250, 110, 110, 28, lv_color_hex(C_PRIMARY_2));

    center_label(ico, "S", &lv_font_montserrat_46, lv_color_white());
    label(side, "系统设置", font_cn_big(), lv_color_hex(C_INK), 126, 410);
    label_fit(side, "显示 声音 投屏 系统信息", font_cn_small(),
              lv_color_hex(C_MUTED), 88, 500, 260);

    setting_row(main, 32, "A", "音量大小", "80%");
    setting_row(main, 146, "B", "亮度大小", "100");
    setting_row(main, 260, "Z", "投屏缩放", "全屏");
    setting_row(main, 374, "L", "语言设置", "中文");
    setting_row(main, 488, "U", "软件升级", "最新");
    setting_row(main, 602, "I", "软件信息", "V2.1.0");
}

static void media_control(lv_obj_t *dock, lv_coord_t x, const char *text, int active)
{
    lv_obj_t *b = btn_box(dock, x, 8, 62, 62, 31,
                          lv_color_hex(active ? 0xeef2ff : C_PANEL));
    lv_obj_set_style_shadow_width(b, 0, 0);
    center_label_fit(b, text, &lv_font_montserrat_24,
                     lv_color_hex(active ? C_PRIMARY : C_MUTED));
}

static void create_photo_page(void)
{
    lv_obj_t *bg = box(s_page_layer, 0, 0, UI_W, UI_H, 32, lv_color_hex(0xeaf7fb));
    lv_obj_t *dock;

    lv_obj_set_style_shadow_width(bg, 0, 0);
    lv_obj_set_style_bg_grad_color(bg, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_bg_grad_dir(bg, LV_GRAD_DIR_VER, 0);
    label(bg, "首页", font_cn_small(), lv_color_hex(C_INK), 64, 42);
    pill(bg, 922, 30, 150, 54, "P", "图片播放", 1);
    label(bg, "1 / 1", &lv_font_montserrat_24, lv_color_hex(C_INK), 1838, 42);
    label(bg, "Mountain Dawn", &lv_font_montserrat_32, lv_color_hex(C_INK), 50, 136);
    label_fit(bg, "轮播中 / 无特效 / 背景音乐开启", font_cn_small(),
              lv_color_hex(C_MUTED), 50, 194, 540);

    dock = box(bg, 668, 792, 584, 76, 38, lv_color_hex(C_PANEL));
    media_control(dock, 12, "L", 0);
    media_control(dock, 82, "II", 1);
    media_control(dock, 152, "S", 0);
    media_control(dock, 222, "<", 0);
    media_control(dock, 292, ">", 0);
    media_control(dock, 362, "*", 0);
    media_control(dock, 432, "+", 0);
    media_control(dock, 502, "-", 0);
}

static void create_video_page(void)
{
    lv_obj_t *bg = box(s_page_layer, 0, 0, UI_W, UI_H, 32, lv_color_hex(0xf6fbfb));
    lv_obj_t *play;
    lv_obj_t *progress;
    lv_obj_t *bar;
    lv_obj_t *dock;

    lv_obj_set_style_shadow_width(bg, 0, 0);
    lv_obj_set_style_bg_grad_color(bg, lv_color_hex(0xeef7f5), 0);
    lv_obj_set_style_bg_grad_dir(bg, LV_GRAD_DIR_HOR, 0);
    label(bg, "首页", font_cn_small(), lv_color_hex(C_INK), 64, 42);
    pill(bg, 894, 30, 170, 54, "V", "视频播放", 1);
    label(bg, "00:02:18", &lv_font_montserrat_24, lv_color_hex(C_INK), 1784, 42);

    play = btn_box(bg, 904, 464, 108, 108, 54, lv_color_hex(C_PANEL));
    center_label(play, ">", &lv_font_montserrat_46, lv_color_hex(C_PRIMARY));

    progress = box(bg, 288, 700, 1344, 82, 18, lv_color_hex(C_PANEL));
    bar = lv_obj_create(progress);
    style_rect(bar, 3, lv_color_hex(C_LINE));
    lv_obj_set_size(bar, 1280, 6);
    lv_obj_set_pos(bar, 32, 24);
    bar = lv_obj_create(progress);
    style_rect(bar, 3, lv_color_hex(C_PRIMARY));
    lv_obj_set_size(bar, 440, 6);
    lv_obj_set_pos(bar, 32, 24);
    label(progress, "00:02:18 / 00:06:04", &lv_font_montserrat_24,
          lv_color_hex(C_MUTED), 1116, 42);

    dock = box(bg, 728, 792, 464, 76, 38, lv_color_hex(C_PANEL));
    media_control(dock, 12, "L", 0);
    media_control(dock, 82, ">", 0);
    media_control(dock, 152, "S", 0);
    media_control(dock, 222, "<", 0);
    media_control(dock, 292, ">", 0);
    media_control(dock, 362, "FS", 0);
}

void lv_pro_new_ui_show_page(lv_pro_new_page_t page)
{
    if (page >= LV_PRO_NEW_PAGE_COUNT) {
        page = LV_PRO_NEW_PAGE_HOME;
    }

    s_current_page = page;
    update_shell_visibility(page);
    clear_page_layer();

    if (page == LV_PRO_NEW_PAGE_HOME) {
        create_home_page();
    } else if (page == LV_PRO_NEW_PAGE_INPUT) {
        create_input_page();
    } else if (page == LV_PRO_NEW_PAGE_CAST) {
        create_cast_page();
    } else if (page == LV_PRO_NEW_PAGE_PHOTO) {
        create_photo_page();
    } else if (page == LV_PRO_NEW_PAGE_VIDEO) {
        create_video_page();
    } else if (page == LV_PRO_NEW_PAGE_CLOCK) {
        create_clock_page();
    } else if (page == LV_PRO_NEW_PAGE_WIFI) {
        create_wifi_page();
    } else {
        create_setting_page();
    }

    if (!page_is_media(page)) {
        if (s_topbar != NULL) {
            lv_obj_del(s_topbar);
        }
        s_topbar = NULL;
        create_topbar(lv_pro_new_ui_activity);
        lv_obj_move_foreground(s_topbar);
    }
    if (s_bottom_nav != NULL) {
        lv_obj_move_foreground(s_bottom_nav);
    }
    if (s_nav_group != NULL && s_nav_buttons[page] != NULL) {
        lv_group_focus_obj(s_nav_buttons[page]);
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
    if (s_nav_group != NULL) {
        lv_group_del(s_nav_group);
        s_nav_group = NULL;
    }

    s_topbar = NULL;
    s_page_layer = NULL;
    s_bottom_nav = NULL;
    memset(s_nav_buttons, 0, sizeof(s_nav_buttons));
    s_current_page = LV_PRO_NEW_PAGE_HOME;
    s_nav_group = lv_group_create();

    lv_pro_new_ui_activity = lv_obj_create(NULL);
    lv_obj_set_size(lv_pro_new_ui_activity, LV_PCT(100), LV_PCT(100));
    style_rect(lv_pro_new_ui_activity, 0, lv_color_hex(C_BG));
    lv_obj_set_style_bg_grad_color(lv_pro_new_ui_activity, lv_color_hex(0xfbf7fb), 0);
    lv_obj_set_style_bg_grad_dir(lv_pro_new_ui_activity, LV_GRAD_DIR_HOR, 0);

    create_topbar(lv_pro_new_ui_activity);

    s_page_layer = lv_obj_create(lv_pro_new_ui_activity);
    style_rect(s_page_layer, 0, lv_color_hex(C_BG));
    lv_obj_set_style_bg_opa(s_page_layer, LV_OPA_TRANSP, 0);
    lv_obj_set_style_pad_all(s_page_layer, 0, 0);
    lv_obj_set_pos(s_page_layer, 0, PAGE_Y);
    lv_obj_set_size(s_page_layer, UI_W, PAGE_H);

    create_bottom_nav(lv_pro_new_ui_activity);
    lv_pro_new_ui_show_page(LV_PRO_NEW_PAGE_HOME);
    lv_scr_load(lv_pro_new_ui_activity);

    if (evdev_indev != NULL && s_nav_group != NULL) {
        lv_indev_set_group(evdev_indev, s_nav_group);
        lv_group_set_default(s_nav_group);
    }
}
