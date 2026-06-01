#include "emb_network.h"

#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <net/if.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <unistd.h>

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

static int emb_iface_has_ipv4(const char *iface, char *ip, size_t ip_size)
{
    int fd;
    struct ifreq ifr;
    struct sockaddr_in *sin;

    if (iface == NULL) return 0;

    fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (fd < 0) return 0;

    memset(&ifr, 0, sizeof(ifr));
    snprintf(ifr.ifr_name, sizeof(ifr.ifr_name), "%s", iface);

    if (ioctl(fd, SIOCGIFADDR, &ifr) != 0) {
        close(fd);
        return 0;
    }

    sin = (struct sockaddr_in *)&ifr.ifr_addr;
    if (ip != NULL && ip_size > 0) {
        snprintf(ip, ip_size, "%s", inet_ntoa(sin->sin_addr));
    }

    close(fd);
    return 1;
}

static int emb_iface_link_up(const char *iface)
{
    char path[128];
    char value[16];

    snprintf(path, sizeof(path), "/sys/class/net/%s/carrier", iface);
    if (emb_read_first_line(path, value, sizeof(value)) != 0) return 0;
    return strcmp(value, "1") == 0;
}

static void emb_read_mac(const char *iface, char *mac, size_t mac_size)
{
    char path[128];

    snprintf(path, sizeof(path), "/sys/class/net/%s/address", iface);
    if (emb_read_first_line(path, mac, mac_size) != 0 && mac_size > 0) {
        mac[0] = '\0';
    }
}

static int emb_iface_has_default_route(const char *iface)
{
    FILE *fp;
    char line[256];
    int found = 0;

    fp = fopen("/proc/net/route", "r");
    if (fp == NULL) return 0;

    while (fgets(line, sizeof(line), fp) != NULL) {
        char route_iface[32];
        unsigned long destination;

        if (sscanf(line, "%31s %lx", route_iface, &destination) != 2) continue;
        if (strcmp(route_iface, iface) == 0 && destination == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);
    return found;
}

static int emb_read_wifi_signal(void)
{
    FILE *fp;
    char line[256];
    int signal = 0;

    fp = fopen("/proc/net/wireless", "r");
    if (fp == NULL) return 0;

    while (fgets(line, sizeof(line), fp) != NULL) {
        char iface[32];
        float quality;

        if (strstr(line, "wlan0:") == NULL) continue;
        if (sscanf(line, " %31[^:]: %*d %f", iface, &quality) == 2) {
            signal = (int)quality;
            break;
        }
    }

    fclose(fp);
    return signal;
}

static void emb_fill_iface_status(emb_network_status_t *status, const char *iface,
                                  emb_net_type_t type)
{
    char operstate[32];

    snprintf(status->iface, sizeof(status->iface), "%s", iface);
    status->type = type;
    status->connected = emb_iface_has_ipv4(iface, status->ip, sizeof(status->ip));
    status->internet_ok = status->connected && emb_iface_has_default_route(iface);
    emb_read_mac(iface, status->mac, sizeof(status->mac));

    if (type == EMB_NET_WIFI) {
        status->signal = emb_read_wifi_signal();
    }

    if (!status->connected && emb_read_first_line("/sys/class/net/wlan0/operstate",
                                                  operstate, sizeof(operstate)) == 0) {
        if (type == EMB_NET_WIFI && strcmp(operstate, "up") == 0) {
            status->connected = emb_iface_link_up(iface);
        }
    }
}

emb_result_t emb_network_get_status(emb_network_status_t *status)
{
    if (status == NULL) return EMB_ERR_INVALID_PARAM;

    memset(status, 0, sizeof(*status));
    status->type = EMB_NET_NONE;

    if (emb_iface_has_ipv4("eth0", NULL, 0) || emb_iface_link_up("eth0")) {
        emb_fill_iface_status(status, "eth0", EMB_NET_ETHERNET);
        return EMB_OK;
    }

    if (emb_iface_has_ipv4("wlan0", NULL, 0) || emb_iface_link_up("wlan0")) {
        emb_fill_iface_status(status, "wlan0", EMB_NET_WIFI);
        return EMB_OK;
    }

    return EMB_OK;
}

emb_result_t emb_network_check_server(const char *host, int port, int timeout_ms)
{
    int fd;
    int flags;
    int ret;
    fd_set wfds;
    struct timeval tv;
    struct sockaddr_in addr;

    if (host == NULL || host[0] == '\0' || port <= 0 || timeout_ms < 0) {
        return EMB_ERR_INVALID_PARAM;
    }

    fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) return EMB_ERR_FAILED;

    flags = fcntl(fd, F_GETFL, 0);
    if (flags >= 0) {
        fcntl(fd, F_SETFL, flags | O_NONBLOCK);
    }

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons((uint16_t)port);
    if (inet_aton(host, &addr.sin_addr) == 0) {
        close(fd);
        return EMB_ERR_INVALID_PARAM;
    }

    ret = connect(fd, (struct sockaddr *)&addr, sizeof(addr));
    if (ret == 0) {
        close(fd);
        return EMB_OK;
    }

    if (errno != EINPROGRESS) {
        close(fd);
        return EMB_ERR_FAILED;
    }

    FD_ZERO(&wfds);
    FD_SET(fd, &wfds);
    tv.tv_sec = timeout_ms / 1000;
    tv.tv_usec = (timeout_ms % 1000) * 1000;

    ret = select(fd + 1, NULL, &wfds, NULL, &tv);
    if (ret > 0 && FD_ISSET(fd, &wfds)) {
        int err = 0;
        socklen_t len = sizeof(err);

        if (getsockopt(fd, SOL_SOCKET, SO_ERROR, &err, &len) == 0 && err == 0) {
            close(fd);
            return EMB_OK;
        }
    }

    close(fd);
    return ret == 0 ? EMB_ERR_TIMEOUT : EMB_ERR_FAILED;
}
