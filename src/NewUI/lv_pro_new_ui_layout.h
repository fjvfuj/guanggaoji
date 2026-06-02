#ifndef LV_PRO_NEW_UI_LAYOUT_H
#define LV_PRO_NEW_UI_LAYOUT_H

/*
 * GUI-Guider friendly layout values for the 1920x1080 H137 screen.
 * Tweak these constants first when adjusting the visual layout.
 */

#define UI_W 1920
#define UI_H 1080

#define UI_TOPBAR_H 88
#define UI_PAGE_Y 92
#define UI_PAGE_H 790
#define UI_NAV_Y 900
#define UI_NAV_H 76

#define UI_EDGE_X 22
#define UI_HERO_Y 0
#define UI_HERO_W (UI_W - UI_EDGE_X * 2)
#define UI_HERO_H 610
#define UI_HERO_RADIUS 28

#define UI_HOME_META_Y 622
#define UI_HOME_META_H 118
#define UI_TIME_CARD_X 22
#define UI_TIME_CARD_W 320
#define UI_QUICK_CARD_X 356
#define UI_QUICK_CARD_W (UI_W - 378)

#define UI_NAV_X 32
#define UI_NAV_W (UI_W - 64)
#define UI_NAV_ITEM_W 128
#define UI_NAV_GAP 20

#define UI_MEDIA_DOCK_Y 792
#define UI_VIDEO_PROGRESS_Y 700

#endif
