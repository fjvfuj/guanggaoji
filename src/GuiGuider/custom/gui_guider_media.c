#include "gui_guider_media.h"

#include "Embedded/emb_remote.h"

#include <dirent.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define GUI_GUIDER_MEDIA_MAX_IMAGES 16
#define GUI_GUIDER_MEDIA_PATH_MAX 256
#define GUI_GUIDER_MEDIA_SLIDE_MS 5000
#define GUI_GUIDER_MEDIA_FALLBACK_W 960U
#define GUI_GUIDER_MEDIA_FALLBACK_H 540U

static lv_ui *s_ui;
static lv_obj_t *s_home_parent;
static lv_obj_t *s_home_img;
static lv_obj_t *s_photo_parent;
static lv_obj_t *s_photo_img;
static lv_timer_t *s_timer;
static char s_paths[GUI_GUIDER_MEDIA_MAX_IMAGES][GUI_GUIDER_MEDIA_PATH_MAX];
static char s_active_dir[GUI_GUIDER_MEDIA_PATH_MAX];
static uint32_t s_path_count;
static uint32_t s_path_index;
static uint32_t s_home_applied_index;
static uint32_t s_photo_applied_index;
static lv_obj_t *s_last_active_screen;

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

static int get_decodable_image_size(const char *src, uint32_t *out_w, uint32_t *out_h)
{
    lv_img_header_t header;

    if (src == NULL || lv_img_decoder_get_info(src, &header) != LV_RES_OK ||
        header.w == 0 || header.h == 0) {
        return 0;
    }

    if (out_w != NULL) {
        *out_w = header.w;
    }

    if (out_h != NULL) {
        *out_h = header.h;
    }

    return 1;
}

static void insert_media_path_sorted(const char *path)
{
    uint32_t insert_at;
    uint32_t move;

    if (path == NULL || s_path_count >= GUI_GUIDER_MEDIA_MAX_IMAGES) {
        return;
    }

    insert_at = s_path_count;
    while (insert_at > 0 && strcasecmp(path, s_paths[insert_at - 1]) < 0) {
        insert_at--;
    }

    for (move = s_path_count; move > insert_at; move--) {
        snprintf(s_paths[move], sizeof(s_paths[move]), "%s", s_paths[move - 1]);
    }

    snprintf(s_paths[insert_at], sizeof(s_paths[insert_at]), "%s", path);
    s_path_count++;
}

static void add_media_path(const char *dir, const char *name)
{
    char path[GUI_GUIDER_MEDIA_PATH_MAX];
    uint32_t img_w = 0;
    uint32_t img_h = 0;

    if (s_path_count >= GUI_GUIDER_MEDIA_MAX_IMAGES) {
        return;
    }

    snprintf(path, sizeof(path), "A:%s/%s", dir, name);
    if (!get_decodable_image_size(path, &img_w, &img_h)) {
        printf("[GUI-Guider] skip undecodable image: %s\n", path);
        return;
    }

    insert_media_path_sorted(path);
    printf("[GUI-Guider] add media image: %s (%ux%u)\n",
           path, (unsigned)img_w, (unsigned)img_h);
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

static void reset_applied_images(void)
{
    s_home_applied_index = UINT32_MAX;
    s_photo_applied_index = UINT32_MAX;
}

static void clear_media_images(void)
{
    if (s_home_img != NULL) {
        lv_img_set_src(s_home_img, NULL);
    }

    if (s_photo_img != NULL) {
        lv_img_set_src(s_photo_img, NULL);
    }

    reset_applied_images();
}

static void load_media_paths(void)
{
    char selected_dir[GUI_GUIDER_MEDIA_PATH_MAX] = {0};

    s_path_count = 0;
    s_path_index = 0;
    memset(s_paths, 0, sizeof(s_paths));

    if (emb_remote_select_photo_dir(selected_dir, sizeof(selected_dir)) == EMB_OK) {
        scan_media_dir(selected_dir);
    }

    if (s_path_count == 0) {
        scan_media_dir(emb_remote_get_default_image_dir());
        if (s_path_count > 0) {
            snprintf(selected_dir, sizeof(selected_dir), "%s", emb_remote_get_default_image_dir());
        }
    }

    snprintf(s_active_dir, sizeof(s_active_dir), "%s", selected_dir);
    reset_applied_images();

    if (s_path_count == 0) {
        clear_media_images();
    }

    printf("[GUI-Guider] media images loaded: %u from %s\n",
           (unsigned)s_path_count, s_active_dir[0] != '\0' ? s_active_dir : "none");
}

static int reload_media_paths_if_needed(void)
{
    char selected_dir[GUI_GUIDER_MEDIA_PATH_MAX] = {0};

    if (emb_remote_select_photo_dir(selected_dir, sizeof(selected_dir)) != EMB_OK) {
        selected_dir[0] = '\0';
    }

    if (strcmp(selected_dir, s_active_dir) != 0 || s_path_count == 0) {
        load_media_paths();
        return 1;
    }

    return 0;
}

static uint16_t calc_cover_zoom(const char *src, lv_coord_t target_w, lv_coord_t target_h,
                                uint32_t *out_src_w, uint32_t *out_src_h)
{
    uint32_t zoom_w;
    uint32_t zoom_h;
    uint32_t zoom;

    if (!get_decodable_image_size(src, out_src_w, out_src_h)) {
        *out_src_w = GUI_GUIDER_MEDIA_FALLBACK_W;
        *out_src_h = GUI_GUIDER_MEDIA_FALLBACK_H;
    }

    zoom_w = ((uint32_t)target_w * 256U + *out_src_w - 1U) / *out_src_w;
    zoom_h = ((uint32_t)target_h * 256U + *out_src_h - 1U) / *out_src_h;
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
    uint32_t src_w;
    uint32_t src_h;
    uint16_t zoom;

    if (img == NULL || s_path_count == 0) {
        return;
    }

    src = s_paths[s_path_index % s_path_count];
    zoom = calc_cover_zoom(src, target_w, target_h, &src_w, &src_h);
    lv_img_set_src(img, src);
    lv_img_set_pivot(img, src_w / 2, src_h / 2);
    lv_img_set_zoom(img, zoom);
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
    uint32_t index;

    if (s_ui == NULL || s_ui->screen_cont_1 == NULL || s_path_count == 0) {
        return;
    }

    if (s_home_parent != s_ui->screen_cont_1) {
        s_home_parent = s_ui->screen_cont_1;
        s_home_img = create_media_image(s_home_parent);
        lv_obj_clear_flag(s_home_parent, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_style_clip_corner(s_home_parent, true, LV_PART_MAIN);
        lv_obj_set_style_bg_img_src(s_home_parent, NULL, LV_PART_MAIN);
        lv_obj_set_style_bg_img_opa(s_home_parent, 0, LV_PART_MAIN);
        lv_obj_set_style_bg_color(s_home_parent, lv_color_hex(0x111827), LV_PART_MAIN);
        s_home_applied_index = UINT32_MAX;
    }

    index = s_path_index % s_path_count;
    if (s_home_img != NULL && s_home_applied_index == index) {
        return;
    }

    w = lv_obj_get_width(s_home_parent);
    h = lv_obj_get_height(s_home_parent);
    apply_image(s_home_img, w, h);
    s_home_applied_index = index;
}

static void bind_photo_media(void)
{
    lv_coord_t w;
    lv_coord_t h;
    uint32_t index;

    if (s_ui == NULL || s_ui->screen_3_screen_3_bg_placeholder == NULL || s_path_count == 0) {
        return;
    }

    if (s_photo_parent != s_ui->screen_3_screen_3_bg_placeholder) {
        s_photo_parent = s_ui->screen_3_screen_3_bg_placeholder;
        s_photo_img = create_media_image(s_photo_parent);
        lv_obj_clear_flag(s_photo_parent, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_style_clip_corner(s_photo_parent, true, LV_PART_MAIN);
        s_photo_applied_index = UINT32_MAX;
    }

    index = s_path_index % s_path_count;
    if (s_photo_img != NULL && s_photo_applied_index == index) {
        return;
    }

    w = lv_obj_get_width(s_photo_parent);
    h = lv_obj_get_height(s_photo_parent);
    apply_image(s_photo_img, w, h);
    s_photo_applied_index = index;
}

static void bind_active_media(void)
{
    lv_obj_t *active;

    if (s_ui == NULL) {
        return;
    }

    active = lv_scr_act();
    if (active != s_last_active_screen) {
        if (active != s_ui->screen) {
            s_home_parent = NULL;
            s_home_img = NULL;
            s_home_applied_index = UINT32_MAX;
        }

        if (active != s_ui->screen_3) {
            s_photo_parent = NULL;
            s_photo_img = NULL;
            s_photo_applied_index = UINT32_MAX;
        }

        s_last_active_screen = active;
    }

    if (active == s_ui->screen) {
        bind_home_media();
    } else if (active == s_ui->screen_3) {
        bind_photo_media();
    }
}

static void timer_cb(lv_timer_t *timer)
{
    lv_obj_t *active;
    int reloaded;

    (void)timer;

    if (s_ui == NULL) {
        return;
    }

    reloaded = reload_media_paths_if_needed();

    active = lv_scr_act();
    if (!reloaded && (active == s_ui->screen || active == s_ui->screen_3) && s_path_count > 1) {
        s_path_index = (s_path_index + 1) % s_path_count;
    }

    bind_active_media();
}

void gui_guider_media_init(lv_ui *ui)
{
    s_ui = ui;
    s_home_parent = NULL;
    s_home_img = NULL;
    s_photo_parent = NULL;
    s_photo_img = NULL;
    s_active_dir[0] = '\0';
    s_home_applied_index = UINT32_MAX;
    s_photo_applied_index = UINT32_MAX;
    s_last_active_screen = NULL;

    load_media_paths();
    bind_active_media();

    if (s_timer == NULL) {
        s_timer = lv_timer_create(timer_cb, GUI_GUIDER_MEDIA_SLIDE_MS, NULL);
    }
}

void gui_guider_media_poll(void)
{
    bind_active_media();
}
