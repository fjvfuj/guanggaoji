#include "lv_pro_mqtt_slideshow_factory_sn.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "lv_pro_mqtt_slideshow_config.h"

#ifndef MQTT_FACTORY_SN_ENABLE
#define MQTT_FACTORY_SN_ENABLE 1
#endif

#ifndef MQTT_FACTORY_SN_SCAN_WAIT_MS
#define MQTT_FACTORY_SN_SCAN_WAIT_MS 5000
#endif

#ifndef MQTT_FACTORY_SN_SCAN_INTERVAL_MS
#define MQTT_FACTORY_SN_SCAN_INTERVAL_MS 200
#endif

#ifndef MQTT_FACTORY_SN_BIND_FILE
#define MQTT_FACTORY_SN_BIND_FILE MQTT_DEVICE_SN_FILE
#endif

static char *trim_inplace(char *s)
{
    char *end;

    if (s == NULL) return s;

    while (*s && isspace((unsigned char)*s)) s++;
    if (*s == '\0') return s;

    end = s + strlen(s) - 1;
    while (end > s && isspace((unsigned char)*end)) {
        *end = '\0';
        end--;
    }

    return s;
}

static int is_valid_sn(const char *s)
{
    const unsigned char *p = (const unsigned char *)s;
    int len = 0;

    if (s == NULL || s[0] == '\0') return 0;

    while (*p) {
        /* 工厂 SN 只允许常见安全字符，避免空格/中文/路径符号混入。 */
        if (!isalnum(*p) && *p != '-' && *p != '_') {
            return 0;
        }
        len++;
        p++;
    }

    return (len >= 4 && len < 64) ? 1 : 0;
}

static int file_exists(const char *path)
{
    return (path != NULL && access(path, F_OK) == 0) ? 1 : 0;
}

static int mkdir_parent_if_needed(const char *path)
{
    char dir_path[256];
    char *slash;

    if (path == NULL) return -1;

    snprintf(dir_path, sizeof(dir_path), "%s", path);
    slash = strrchr(dir_path, '/');
    if (slash == NULL) return -1;
    if (slash == dir_path) return 0;

    *slash = '\0';

    if (access(dir_path, F_OK) == 0) {
        return 0;
    }

    if (mkdir(dir_path, 0755) == 0 || errno == EEXIST) {
        return 0;
    }

    MQTT_SLIDESHOW_ERR("factory_sn mkdir bind dir failed dir=%s errno=%d %s",
                       dir_path, errno, strerror(errno));
    return -1;
}

static int fsync_parent_dir(const char *path)
{
    char dir_path[256];
    char *slash;
    int fd;

    if (path == NULL) return -1;

    snprintf(dir_path, sizeof(dir_path), "%s", path);
    slash = strrchr(dir_path, '/');
    if (slash == NULL) return -1;
    if (slash == dir_path) {
        slash[1] = '\0';
    } else {
        *slash = '\0';
    }

    fd = open(dir_path, O_RDONLY);
    if (fd < 0) return -1;
    fsync(fd);
    close(fd);
    return 0;
}

static int save_sn_to_device_file(const char *sn)
{
    FILE *fp;
    char tmp_path[256];

    if (!is_valid_sn(sn)) {
        return -1;
    }

    if (mkdir_parent_if_needed(MQTT_FACTORY_SN_BIND_FILE) != 0) {
        return -2;
    }

    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", MQTT_FACTORY_SN_BIND_FILE);

    fp = fopen(tmp_path, "w");
    if (fp == NULL) {
        MQTT_SLIDESHOW_ERR("factory_sn bind tmp open failed path=%s errno=%d %s",
                           tmp_path, errno, strerror(errno));
        return -3;
    }

    fprintf(fp, "%s\n", sn);
    fflush(fp);
    fsync(fileno(fp));
    fclose(fp);

    if (rename(tmp_path, MQTT_FACTORY_SN_BIND_FILE) != 0) {
        MQTT_SLIDESHOW_ERR("factory_sn bind rename failed tmp=%s dst=%s errno=%d %s",
                           tmp_path, MQTT_FACTORY_SN_BIND_FILE, errno, strerror(errno));
        unlink(tmp_path);
        return -4;
    }

    fsync_parent_dir(MQTT_FACTORY_SN_BIND_FILE);
    MQTT_SLIDESHOW_LOG("factory_sn bind ok file=%s sn=%s", MQTT_FACTORY_SN_BIND_FILE, sn);
    return 0;
}

static int take_first_sn_from_file(const char *list_path, char *out_sn, int out_size)
{
    FILE *in;
    FILE *out;
    char tmp_path[256];
    char line[256];
    int got = 0;
    int bind_done = 0;

    if (list_path == NULL || out_sn == NULL || out_size <= 1) return -1;

    out_sn[0] = '\0';

    in = fopen(list_path, "r");
    if (in == NULL) {
        MQTT_SLIDESHOW_ERR("factory_sn open failed path=%s errno=%d %s",
                           list_path, errno, strerror(errno));
        return -1;
    }

    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", list_path);
    out = fopen(tmp_path, "w");
    if (out == NULL) {
        MQTT_SLIDESHOW_ERR("factory_sn tmp open failed path=%s errno=%d %s",
                           tmp_path, errno, strerror(errno));
        fclose(in);
        return -2;
    }

    while (fgets(line, sizeof(line), in) != NULL) {
        char original[256];
        char *p;

        snprintf(original, sizeof(original), "%s", line);
        p = trim_inplace(line);

        if (!got && is_valid_sn(p)) {
            snprintf(out_sn, out_size, "%s", p);
            got = 1;

            /* 先永久写入设备 SN 文件，成功后才删除源列表这一行。 */
            if (save_sn_to_device_file(out_sn) != 0) {
                MQTT_SLIDESHOW_ERR("factory_sn bind failed, keep source list unchanged sn=%s", out_sn);
                break;
            }

            bind_done = 1;
            continue; /* 不写回这一行，相当于读取后立刻标记已使用。 */
        }

        fputs(original, out);
    }

    fflush(out);
    fsync(fileno(out));
    fclose(out);
    fclose(in);

    if (!got) {
        unlink(tmp_path);
        return -3;
    }

    if (!bind_done) {
        unlink(tmp_path);
        out_sn[0] = '\0';
        return -5;
    }

    if (rename(tmp_path, list_path) != 0) {
        MQTT_SLIDESHOW_ERR("factory_sn rename failed tmp=%s path=%s errno=%d %s",
                           tmp_path, list_path, errno, strerror(errno));
        unlink(tmp_path);
        out_sn[0] = '\0';
        return -4;
    }

    fsync_parent_dir(list_path);
    sync();
    return 0;
}

static int try_take_from_paths(const char *const *paths,
                               char *out_sn, int out_size,
                               char *out_source, int source_size)
{
    int i;
    int found_any = 0;

    if (paths == NULL) return -1;

    for (i = 0; paths[i] != NULL; i++) {
        if (!file_exists(paths[i])) {
            continue;
        }

        found_any = 1;

        MQTT_SLIDESHOW_LOG("factory_sn found candidate: %s", paths[i]);

        if (take_first_sn_from_file(paths[i], out_sn, out_size) == 0) {
            if (out_source != NULL && source_size > 1) {
                snprintf(out_source, source_size, "%s", paths[i]);
            }
            MQTT_SLIDESHOW_LOG("factory_sn take ok source=%s sn=%s bind=%s",
                               paths[i], out_sn, MQTT_FACTORY_SN_BIND_FILE);
            return 0;
        }

        MQTT_SLIDESHOW_ERR("factory_sn candidate unusable or bind failed: %s", paths[i]);
    }

    return found_any ? -2 : -1;
}

int mqtt_slideshow_factory_sn_take(char *out_sn, int out_size,
                                   char *out_source, int source_size)
{
#if MQTT_FACTORY_SN_ENABLE
    static const char *external_paths[] = {
        MQTT_FACTORY_SN_USB0_FILE,
        MQTT_FACTORY_SN_USB1_FILE,
        MQTT_FACTORY_SN_SDCARD_FILE,
        NULL
    };
    static const char *local_paths[] = {
        MQTT_FACTORY_SN_LOCAL_FILE,
        NULL
    };
    int waited_ms = 0;

    if (out_sn == NULL || out_size <= 1) return -1;
    out_sn[0] = '\0';
    if (out_source != NULL && source_size > 1) out_source[0] = '\0';

    /* 外置介质挂载可能比程序启动慢，短暂轮询 USB/SD，避免漏扫。 */
    while (waited_ms <= MQTT_FACTORY_SN_SCAN_WAIT_MS) {
        int rc = try_take_from_paths(external_paths, out_sn, out_size,
                                     out_source, source_size);
        if (rc == 0) {
            return 0;
        }
        if (rc == -2) {
            break; /* file exists but unusable/bind failed, do not keep waiting */
        }

        if (waited_ms >= MQTT_FACTORY_SN_SCAN_WAIT_MS) {
            break;
        }

        usleep(MQTT_FACTORY_SN_SCAN_INTERVAL_MS * 1000);
        waited_ms += MQTT_FACTORY_SN_SCAN_INTERVAL_MS;
    }

    /* 没有 U 盘/SD 卡 SN 时，再尝试本地突出路径。 */
    if (try_take_from_paths(local_paths, out_sn, out_size,
                            out_source, source_size) == 0) {
        return 0;
    }

    MQTT_SLIDESHOW_LOG("factory_sn not found, continue normal slideshow");
    return -1;
#else
    (void)out_sn;
    (void)out_size;
    (void)out_source;
    (void)source_size;
    return -1;
#endif
}
