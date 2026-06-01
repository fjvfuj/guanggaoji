#include "lv_pro_mqtt_slideshow_store.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <pthread.h>
#include <dirent.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>

#ifndef O_DIRECTORY
#define O_DIRECTORY 0
#endif

static pthread_mutex_t s_store_lock = PTHREAD_MUTEX_INITIALIZER;
static mqtt_slideshow_image_list_t s_active;

static int compare_filenames(const void *a, const void *b)
{
    const char *fa = *(const char * const *)a;
    const char *fb = *(const char * const *)b;
    return strcmp(fa, fb);
}

static const char *path_basename(const char *path)
{
    const char *p;

    if (path == NULL) return "";
    p = strrchr(path, '/');
    return p ? p + 1 : path;
}

static int mkdir_p(const char *path)
{
    char tmp[MQTT_SLIDESHOW_MAX_URL_LEN];
    char *p;
    size_t len;

    if (path == NULL || path[0] == '\0') return -1;

    snprintf(tmp, sizeof(tmp), "%s", path);
    len = strlen(tmp);

    while (len > 1 && tmp[len - 1] == '/') {
        tmp[len - 1] = '\0';
        len--;
    }

    for (p = tmp + 1; *p; p++) {
        if (*p == '/') {
            *p = '\0';
            if (mkdir(tmp, 0755) != 0 && errno != EEXIST) {
                MQTT_SLIDESHOW_ERR("mkdir failed: %s errno=%d", tmp, errno);
                return -1;
            }
            *p = '/';
        }
    }

    if (mkdir(tmp, 0755) != 0 && errno != EEXIST) {
        MQTT_SLIDESHOW_ERR("mkdir failed: %s errno=%d", tmp, errno);
        return -1;
    }

    return 0;
}

static int fsync_dir_path(const char *dir)
{
    int fd;

    if (dir == NULL || dir[0] == '\0') return -1;

    fd = open(dir, O_RDONLY | O_DIRECTORY);
    if (fd < 0) {
        MQTT_SLIDESHOW_ERR("open dir failed for fsync: %s errno=%d", dir, errno);
        return -1;
    }

    if (fsync(fd) != 0) {
        MQTT_SLIDESHOW_ERR("fsync dir failed: %s errno=%d", dir, errno);
        close(fd);
        return -1;
    }

    close(fd);
    return 0;
}

static int fsync_parent_dir(const char *path)
{
    char dir[MQTT_SLIDESHOW_MAX_URL_LEN];
    char *slash;

    if (path == NULL || path[0] == '\0') return -1;

    snprintf(dir, sizeof(dir), "%s", path);
    slash = strrchr(dir, '/');
    if (slash == NULL) return -1;

    if (slash == dir) {
        slash[1] = '\0';
    } else {
        *slash = '\0';
    }

    return fsync_dir_path(dir);
}

static int has_suffix_case(const char *name, const char *suffix)
{
    size_t nlen;
    size_t slen;

    if (name == NULL || suffix == NULL) return 0;
    nlen = strlen(name);
    slen = strlen(suffix);
    if (nlen < slen) return 0;

    return strcasecmp(name + nlen - slen, suffix) == 0;
}

static int is_regular_nonzero_file(const char *path)
{
    struct stat st;

    if (path == NULL || path[0] == '\0') return 0;
    if (stat(path, &st) != 0) return 0;
    if (!S_ISREG(st.st_mode)) return 0;
    if (st.st_size <= 0) return 0;

    return 1;
}

static void cleanup_stale_tmp_files(void)
{
    DIR *dir;
    struct dirent *entry;
    char filepath[MQTT_SLIDESHOW_MAX_URL_LEN];
    int removed = 0;

    dir = opendir(IMAGE_DIR);
    if (dir == NULL) return;

    while ((entry = readdir(dir)) != NULL) {
        if (!has_suffix_case(entry->d_name, ".tmp")) continue;

        snprintf(filepath, sizeof(filepath), "%s%s", IMAGE_DIR, entry->d_name);
        if (remove(filepath) == 0) {
            removed++;
            MQTT_SLIDESHOW_LOG("remove stale tmp image: %s", filepath);
        }
    }

    closedir(dir);

    if (removed > 0) {
        fsync_dir_path(IMAGE_DIR);
        sync();
    }
}

static bool active_contains_filename_locked(const char *filename)
{
    int i;

    if (filename == NULL || filename[0] == '\0') return false;

    for (i = 0; i < s_active.count; i++) {
        const char *base = path_basename(s_active.items[i].path);
        if (strcmp(base, filename) == 0) return true;
    }

    return false;
}

bool mqtt_slideshow_store_is_valid_image_name(const char *name)
{
    const char *dot;

    if (name == NULL || name[0] == '\0') return false;
    if (strcmp(name, ".") == 0 || strcmp(name, "..") == 0) return false;
    if (strstr(name, "..") != NULL) return false;
    if (strcmp(name, "slideshow_state.txt") == 0) return false;
    if (has_suffix_case(name, ".tmp")) return false;

    dot = strrchr(name, '.');
    if (dot == NULL) return false;

    return strcasecmp(dot, ".jpg") == 0 ||
           strcasecmp(dot, ".jpeg") == 0 ||
           strcasecmp(dot, ".png") == 0 ||
           strcasecmp(dot, ".bmp") == 0;
}

int mqtt_slideshow_store_init(void)
{
    memset(&s_active, 0, sizeof(s_active));

    if (mkdir_p(IMAGE_DIR) != 0) {
        MQTT_SLIDESHOW_ERR("mkdir_p failed: %s", IMAGE_DIR);
        return -1;
    }

    fsync_dir_path(IMAGE_DIR);
    cleanup_stale_tmp_files();

    MQTT_SLIDESHOW_LOG("image dir ready: %s", IMAGE_DIR);
    return 0;
}

void mqtt_slideshow_store_deinit(void)
{
    pthread_mutex_lock(&s_store_lock);
    memset(&s_active, 0, sizeof(s_active));
    pthread_mutex_unlock(&s_store_lock);
}

int mqtt_slideshow_store_scan_local(mqtt_slideshow_image_list_t *out)
{
    DIR *dir;
    struct dirent *entry;
    char *names[MQTT_SLIDESHOW_MAX_IMAGES];
    int count = 0;
    int i;

    if (out == NULL) return -1;
    memset(out, 0, sizeof(*out));

    cleanup_stale_tmp_files();

    dir = opendir(IMAGE_DIR);
    if (dir == NULL) {
        MQTT_SLIDESHOW_LOG("Image directory does not exist yet: %s", IMAGE_DIR);
        return 0;
    }

    memset(names, 0, sizeof(names));

    while ((entry = readdir(dir)) != NULL) {
        char filepath[MQTT_SLIDESHOW_MAX_URL_LEN];

        if (!mqtt_slideshow_store_is_valid_image_name(entry->d_name)) continue;

        snprintf(filepath, sizeof(filepath), "%s%s", IMAGE_DIR, entry->d_name);

        if (!is_regular_nonzero_file(filepath)) {
            MQTT_SLIDESHOW_LOG("skip bad image file: %s", filepath);
            remove(filepath);
            fsync_dir_path(IMAGE_DIR);
            continue;
        }

        if (count >= MQTT_SLIDESHOW_MAX_IMAGES) break;

        names[count] = strdup(entry->d_name);
        if (names[count] != NULL) count++;
    }

    closedir(dir);

    if (count > 1) {
        qsort(names, count, sizeof(names[0]), compare_filenames);
    }

    for (i = 0; i < count; i++) {
        snprintf(out->items[i].path, sizeof(out->items[i].path), "A:%s%s", IMAGE_DIR, names[i]);
        free(names[i]);
    }

    out->count = count;

    MQTT_SLIDESHOW_LOG("Local image scan complete, count=%d", count);
    return count;
}

int mqtt_slideshow_store_replace_active(const mqtt_slideshow_image_list_t *list)
{
    int i;

    if (list == NULL) return -1;
    if (list->count < 0 || list->count > MQTT_SLIDESHOW_MAX_IMAGES) return -2;

    pthread_mutex_lock(&s_store_lock);
    memset(&s_active, 0, sizeof(s_active));
    s_active.count = list->count;
    for (i = 0; i < list->count; i++) {
        snprintf(s_active.items[i].path, sizeof(s_active.items[i].path), "%s", list->items[i].path);
    }
    pthread_mutex_unlock(&s_store_lock);

    return 0;
}

int mqtt_slideshow_store_get_active(mqtt_slideshow_image_list_t *out)
{
    if (out == NULL) return -1;

    pthread_mutex_lock(&s_store_lock);
    *out = s_active;
    pthread_mutex_unlock(&s_store_lock);

    return out->count;
}

int mqtt_slideshow_store_count(void)
{
    int count;
    pthread_mutex_lock(&s_store_lock);
    count = s_active.count;
    pthread_mutex_unlock(&s_store_lock);
    return count;
}

int mqtt_slideshow_store_load_index(void)
{
    FILE *fp;
    int index = 0;

    fp = fopen(STATE_FILE, "r");
    if (fp == NULL) return 0;

    if (fscanf(fp, "%d", &index) != 1) index = 0;
    fclose(fp);

    if (index < 0) index = 0;
    return index;
}

void mqtt_slideshow_store_save_index(int index)
{
    FILE *fp;

    if (index < 0) index = 0;

    fp = fopen(STATE_FILE, "w");
    if (fp == NULL) return;

    fprintf(fp, "%d", index);
    fflush(fp);
    fsync(fileno(fp));
    fclose(fp);
    fsync_parent_dir(STATE_FILE);
}

void mqtt_slideshow_store_cleanup_inactive(void)
{
    DIR *dir;
    struct dirent *entry;
    char filepath[MQTT_SLIDESHOW_MAX_URL_LEN];
    int removed = 0;

    cleanup_stale_tmp_files();

    dir = opendir(IMAGE_DIR);
    if (dir == NULL) return;

    pthread_mutex_lock(&s_store_lock);

    while ((entry = readdir(dir)) != NULL) {
        if (!mqtt_slideshow_store_is_valid_image_name(entry->d_name)) continue;
        if (active_contains_filename_locked(entry->d_name)) continue;

        snprintf(filepath, sizeof(filepath), "%s%s", IMAGE_DIR, entry->d_name);
        if (remove(filepath) == 0) removed++;
    }

    pthread_mutex_unlock(&s_store_lock);
    closedir(dir);

    if (removed > 0) {
        fsync_dir_path(IMAGE_DIR);
        sync();
    }
}
