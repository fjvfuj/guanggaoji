#include "gui_guider_media.h"

#include "Embedded/emb_remote.h"

#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define GUI_GUIDER_MEDIA_MAX_IMAGES 16
#define GUI_GUIDER_MEDIA_PATH_MAX 256
#define GUI_GUIDER_MEDIA_SLIDE_MS 5000

static lv_ui *s_ui;
static lv_obj_t *s_home_parent;
static lv_obj_t *s_home_img;
static lv_obj_t *s_photo_parent;
static lv_obj_t *s_photo_img;
static lv_timer_t *s_timer;
static char s_paths[GUI_GUIDER_MEDIA_MAX_IMAGES][GUI_GUIDER_MEDIA_PATH_MAX];
static uint32_t s_path_count;
static uint32_t s_path_index;

static int is_supported_image_name(const char *name)
{
    const char *ext;

    if (name == NULL || name[0] == '\0' || name[0] == '.') {
        return 0;
    }

    ext = strrchr(name, '.');
    if (ext == NULL) {
        return 0;
    }

    return strcasecmp(ext, ".jpg") == 0 ||
           strcasecmp(ext, ".jpeg") == 0 ||
           strcasecmp(ext, ".png") == 0 ||
           strcasecmp(ext, ".bmp") == 0;
}

static void add_media_path(const char *dir, const char *name)
{
    if (s_path_count >= GUI_GUIDER_MEDIA_MAX_IMAGES) {
        return;
    }

    snprintf(s_paths[s_path_count], sizeof(s_paths[s_path_count]), "A:%s/%s", dir, name);
    s_path_count++;
}

static void scan_media_dir(const char *dir)
{
    DIR *dp;
    struct dirent *entry;

    dp = opendir(dir);
    if (dp == NULL) {
        return;
    }

    while ((entry = readdir(dp)) != NULL && s_path_count < GUI_GUIDER_MEDIA_MAX_IMAGES) {
        if (is_supported_image_name(entry->d_name)) {
            add_media_path(dir, entry->d_name);
        }
    }

    closedir(dp);
}

static void load_media_paths(void)
{
    char selected_dir[GUI_GUIDER_MEDIA_PATH_MAX];

    s_path_count = 0;
    s_path_index = 0;
    memset(s_paths, 0, sizeof(s_paths));

    if (emb_remote_select_photo_dir(selected_dir, sizeof(selected_dir)) == EMB_OK) {
        scan_media_dir(selected_dir);
    }

    if (s_path_count == 0) {
        scan_media_dir(emb_remote_get_default_image_dir());
    }

    printf("[GUI-Guider] media images loaded: %u\n", (unsigned)s_path_count);
}

static uint16_t calc_cover_zoom(const char *src, lv_coord_t target_w, lv_coord_t target_h)
{
    lv_img_header_t header;
    uint32_t zoom_w;
    uint32_t zoom_h;
    uint32_t zoom;

    if (src == NULL || lv_img_decoder_get_info(src, &header) != LV_RES_OK ||
        header.w == 0 || header.h == 0) {
        return 256;
    }

    zoom_w = ((uint32_t)target_w * 256U + header.w - 1U) / header.w;
    zoom_h = ((uint32_t)target_h * 256U + header.h - 1U) / header.h;
    zoom = zoom_w > zoom_h ? zoom_w : zoom_h;

    if (zoom < 16U) {
        zoom = 16U;
    } else if (zoom > 4096U) {
        zoom = 4096U;
    }

    return (uint16_t)zoom;
}

static void apply_image(lv_obj_t *img, lv_coord_t target_w, lv_coord_t target_h)
{
    const char *src;

    if (img == NULL || s_path_count == 0) {
        return;
    }

    src = s_paths[s_path_index % s_path_count];
    lv_img_set_src(img, src);
    lv_img_set_pivot(img, target_w / 2, target_h / 2);
    lv_img_set_zoom(img, calc_cover_zoom(src, target_w, target_h));
    lv_obj_center(img);
}

static lv_obj_t *create_media_image(lv_obj_t *parent)
{
    lv_obj_t *img;

    img = lv_img_create(parent);
    lv_obj_clear_flag(img, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_clear_flag(img, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_img_opa(img, LV_OPA_COVER, LV_PART_MAIN);
    return img;
}

static void bind_home_media(void)
{
    lv_coord_t w;
    lv_coord_t h;

    if (s_ui == NULL || s_ui->screen_cont_1 == NULL || s_path_count == 0) {
        return;
    }

    if (s_home_parent != s_ui->screen_cont_1) {
        s_home_parent = s_ui->screen_cont_1;
        s_home_img = create_media_image(s_home_parent);
        lv_obj_clear_flag(s_home_parent, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_style_clip_corner(s_home_parent, true, LV_PART_MAIN);
    }

    w = lv_obj_get_width(s_home_parent);
    h = lv_obj_get_height(s_home_parent);
    apply_image(s_home_img, w, h);
}

static void bind_photo_media(void)
{
    lv_coord_t w;
    lv_coord_t h;

    if (s_ui == NULL || s_ui->screen_3_screen_3_bg_placeholder == NULL || s_path_count == 0) {
        return;
    }

    if (s_photo_parent != s_ui->screen_3_screen_3_bg_placeholder) {
        s_photo_parent = s_ui->screen_3_screen_3_bg_placeholder;
        s_photo_img = create_media_image(s_photo_parent);
        lv_obj_clear_flag(s_photo_parent, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_style_clip_corner(s_photo_parent, true, LV_PART_MAIN);
    }

    w = lv_obj_get_width(s_photo_parent);
    h = lv_obj_get_height(s_photo_parent);
    apply_image(s_photo_img, w, h);
}

static void timer_cb(lv_timer_t *timer)
{
    (void)timer;

    if (s_path_count > 1) {
        s_path_index = (s_path_index + 1) % s_path_count;
    }

    bind_home_media();
    bind_photo_media();
}

void gui_guider_media_init(lv_ui *ui)
{
    s_ui = ui;
    s_home_parent = NULL;
    s_home_img = NULL;
    s_photo_parent = NULL;
    s_photo_img = NULL;

    load_media_paths();
    bind_home_media();

    if (s_timer == NULL) {
        s_timer = lv_timer_create(timer_cb, GUI_GUIDER_MEDIA_SLIDE_MS, NULL);
    }
}

void gui_guider_media_poll(void)
{
    bind_home_media();
    bind_photo_media();
}
