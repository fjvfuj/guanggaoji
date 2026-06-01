#include "emb_storage.h"

#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>

static int emb_path_is_dir(const char *path)
{
    struct stat st;

    if (path == NULL) return 0;
    return stat(path, &st) == 0 && S_ISDIR(st.st_mode);
}

static int emb_mounts_has_path(const char *prefix)
{
    FILE *fp;
    char device[128];
    char mount[256];
    char fs[64];
    int found = 0;

    fp = fopen("/proc/mounts", "r");
    if (fp == NULL) return emb_path_is_dir(prefix);

    while (fscanf(fp, "%127s %255s %63s %*s %*d %*d\n", device, mount, fs) == 3) {
        (void)device;
        (void)fs;
        if (strncmp(mount, prefix, strlen(prefix)) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);
    return found;
}

static int emb_media_type_matches(const char *name, emb_media_type_t type)
{
    const char *ext;

    if (type == EMB_MEDIA_ALL) return 1;
    if (name == NULL) return 0;

    ext = strrchr(name, '.');
    if (ext == NULL) return 0;
    ext++;

    if (type == EMB_MEDIA_PHOTO) {
        return strcasecmp(ext, "jpg") == 0 || strcasecmp(ext, "jpeg") == 0 ||
               strcasecmp(ext, "png") == 0 || strcasecmp(ext, "bmp") == 0;
    }

    if (type == EMB_MEDIA_VIDEO) {
        return strcasecmp(ext, "mp4") == 0 || strcasecmp(ext, "avi") == 0 ||
               strcasecmp(ext, "mkv") == 0 || strcasecmp(ext, "mov") == 0;
    }

    if (type == EMB_MEDIA_MUSIC) {
        return strcasecmp(ext, "mp3") == 0 || strcasecmp(ext, "wav") == 0 ||
               strcasecmp(ext, "flac") == 0 || strcasecmp(ext, "aac") == 0;
    }

    return 0;
}

static void emb_fill_file_info(const char *dir, const char *name, emb_media_type_t type,
                               emb_media_file_t *file)
{
    struct stat st;

    memset(file, 0, sizeof(*file));
    snprintf(file->path, sizeof(file->path), "%s/%s", dir, name);
    snprintf(file->name, sizeof(file->name), "%s", name);
    file->type = type;

    if (stat(file->path, &st) == 0) {
        file->size = (long long)st.st_size;
    }
}

emb_result_t emb_storage_is_usb_inserted(int *inserted)
{
    if (inserted == NULL) return EMB_ERR_INVALID_PARAM;
    *inserted = emb_mounts_has_path("/tmp/USB") ||
                emb_path_is_dir("/mnt/usb") ||
                emb_path_is_dir("/mnt/USB");
    return EMB_OK;
}

emb_result_t emb_storage_is_tf_inserted(int *inserted)
{
    if (inserted == NULL) return EMB_ERR_INVALID_PARAM;
    *inserted = emb_mounts_has_path("/mnt/SDCARD") ||
                emb_mounts_has_path("/tmp/SDCARD");
    return EMB_OK;
}

emb_result_t emb_storage_scan_media(emb_media_type_t type, emb_media_file_t *files,
                                    int max_count, int *out_count)
{
    const char *roots[] = {"/tmp/USB0", "/tmp/USB1", "/mnt/SDCARD", "/tmp/SDCARD_0"};
    int count = 0;
    int i;

    if (out_count == NULL || max_count < 0) return EMB_ERR_INVALID_PARAM;

    if (max_count > 0 && files == NULL) return EMB_ERR_INVALID_PARAM;

    *out_count = 0;

    for (i = 0; i < (int)(sizeof(roots) / sizeof(roots[0])) && count < max_count; i++) {
        DIR *dir;
        struct dirent *entry;
        int checked = 0;

        if (!emb_path_is_dir(roots[i])) continue;

        dir = opendir(roots[i]);
        if (dir == NULL) continue;

        while ((entry = readdir(dir)) != NULL && count < max_count && checked < 256) {
            checked++;

            if (entry->d_name[0] == '.') continue;
            if (!emb_media_type_matches(entry->d_name, type)) continue;

            emb_fill_file_info(roots[i], entry->d_name, type, &files[count]);
            count++;
        }

        closedir(dir);
    }

    *out_count = count;
    return EMB_OK;
}
