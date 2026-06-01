#include "emb_device.h"

#include <stdio.h>
#include <string.h>

static int emb_read_first_line(const char *path, char *buf, size_t size)
{
    FILE *fp;
    size_t len;

    if (path == NULL || buf == NULL || size == 0) return -1;

    fp = fopen(path, "r");
    if (fp == NULL) return -1;

    if (fgets(buf, (int)size, fp) == NULL) {
        fclose(fp);
        return -1;
    }

    fclose(fp);

    len = strlen(buf);
    while (len > 0 && (buf[len - 1] == '\n' || buf[len - 1] == '\r' ||
                       buf[len - 1] == ' ' || buf[len - 1] == '\t')) {
        buf[len - 1] = '\0';
        len--;
    }

    return 0;
}

static void emb_read_mac(const char *iface, char *out, size_t size)
{
    char path[128];

    if (iface == NULL || out == NULL || size == 0) return;

    snprintf(path, sizeof(path), "/sys/class/net/%s/address", iface);
    if (emb_read_first_line(path, out, size) != 0) {
        out[0] = '\0';
    }
}

static void emb_read_cpu_serial(char *out, size_t size)
{
    FILE *fp;
    char line[256];

    if (out == NULL || size == 0) return;

    fp = fopen("/proc/cpuinfo", "r");
    if (fp == NULL) return;

    while (fgets(line, sizeof(line), fp) != NULL) {
        char *value;

        if (strncmp(line, "Serial", 6) != 0) continue;

        value = strchr(line, ':');
        if (value == NULL) continue;

        value++;
        while (*value == ' ' || *value == '\t') value++;
        snprintf(out, size, "%s", value);
        out[size - 1] = '\0';

        value = out + strlen(out);
        while (value > out && (value[-1] == '\n' || value[-1] == '\r' ||
                               value[-1] == ' ' || value[-1] == '\t')) {
            value[-1] = '\0';
            value--;
        }
        break;
    }

    fclose(fp);
}

emb_result_t emb_device_get_info(emb_device_info_t *info)
{
    if (info == NULL) return EMB_ERR_INVALID_PARAM;

    memset(info, 0, sizeof(*info));
    snprintf(info->product, sizeof(info->product), "%s", "H137");
    snprintf(info->board, sizeof(info->board), "%s", "evb1");
    snprintf(info->chip, sizeof(info->chip), "%s", "h137");
    snprintf(info->software_version, sizeof(info->software_version), "%s", EMB_VERSION);
    snprintf(info->build_time, sizeof(info->build_time), "%s %s", __DATE__, __TIME__);

    if (emb_read_first_line("/proc/device-tree/model", info->product,
                            sizeof(info->product)) != 0) {
        snprintf(info->product, sizeof(info->product), "%s", "H137");
    }

    emb_read_cpu_serial(info->device_sn, sizeof(info->device_sn));
    emb_read_mac("eth0", info->mac_eth, sizeof(info->mac_eth));
    emb_read_mac("wlan0", info->mac_wifi, sizeof(info->mac_wifi));

    return EMB_OK;
}
