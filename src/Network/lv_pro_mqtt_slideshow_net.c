#include "lv_pro_mqtt_slideshow_net.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include <time.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/ioctl.h>

#include "lv_pro_mqtt_slideshow_config.h"

static int run_cmd_wait(char *const argv[])
{
    pid_t pid;
    int status = 0;

    if (argv == NULL || argv[0] == NULL) return -1;

    pid = fork();
    if (pid < 0) {
        MQTT_SLIDESHOW_ERR("fork failed for %s: %s", argv[0], strerror(errno));
        return -1;
    }

    if (pid == 0) {
        execvp(argv[0], argv);
        _exit(127);
    }

    if (waitpid(pid, &status, 0) < 0) {
        MQTT_SLIDESHOW_ERR("waitpid failed for %s: %s", argv[0], strerror(errno));
        return -1;
    }

    if (WIFEXITED(status)) {
        return WEXITSTATUS(status);
    }

    return -1;
}

static int run_cmd_detached(char *const argv[])
{
    pid_t pid;
    pid_t pid2;
    int status = 0;

    if (argv == NULL || argv[0] == NULL) return -1;

    /*
     * Do not wait for udhcpc itself.
     * Some BusyBox udhcpc builds stay alive after lease acquisition to renew it.
     * If MQTT thread waits for udhcpc, it will never continue to connect broker.
     */
    pid = fork();
    if (pid < 0) {
        MQTT_SLIDESHOW_ERR("fork failed for detached %s: %s", argv[0], strerror(errno));
        return -1;
    }

    if (pid > 0) {
        if (waitpid(pid, &status, 0) < 0) {
            MQTT_SLIDESHOW_ERR("waitpid launcher failed for %s: %s", argv[0], strerror(errno));
            return -1;
        }
        return WIFEXITED(status) ? WEXITSTATUS(status) : -1;
    }

    if (setsid() < 0) {
        _exit(126);
    }

    pid2 = fork();
    if (pid2 < 0) {
        _exit(126);
    }

    if (pid2 > 0) {
        _exit(0);
    }

    execvp(argv[0], argv);
    _exit(127);
}

static int file_exists(const char *path)
{
    return (path != NULL && access(path, F_OK) == 0) ? 1 : 0;
}

static const char *find_udhcpc_script(void)
{
    static const char *candidates[] = {
        "/etc/udhcpc/default.script",
        "/usr/share/udhcpc/default.script",
        "/etc/init.d/udhcpc.script",
        "/etc/udhcpc.script",
        NULL
    };
    int i;

    for (i = 0; candidates[i] != NULL; i++) {
        if (file_exists(candidates[i])) {
            return candidates[i];
        }
    }

    return NULL;
}

static int read_pid_file(const char *pidfile, pid_t *pid_out)
{
    FILE *fp;
    long pid_long;

    if (pid_out == NULL || pidfile == NULL) return 0;
    *pid_out = -1;

    fp = fopen(pidfile, "r");
    if (fp == NULL) return 0;

    if (fscanf(fp, "%ld", &pid_long) != 1) {
        fclose(fp);
        return 0;
    }
    fclose(fp);

    if (pid_long <= 1) return 0;

    *pid_out = (pid_t)pid_long;
    return 1;
}

static int process_is_alive(pid_t pid)
{
    if (pid <= 1) return 0;
    if (kill(pid, 0) == 0) return 1;
    if (errno == EPERM) return 1;
    return 0;
}

static int udhcpc_already_running(const char *pidfile)
{
    pid_t pid;

    if (read_pid_file(pidfile, &pid) && process_is_alive(pid)) {
        return 1;
    }

    if (pidfile != NULL) {
        unlink(pidfile); /* stale pid file */
    }

    return 0;
}

static int bring_iface_up(const char *iface)
{
    int rc;
    char *argv_ip[] = { "ip", "link", "set", (char *)iface, "up", NULL };
    char *argv_ifconfig[] = { "ifconfig", (char *)iface, "up", NULL };

    rc = run_cmd_wait(argv_ip);
    if (rc == 0) return 0;

    MQTT_SLIDESHOW_ERR("ip link set %s up failed rc=%d, try ifconfig", iface, rc);
    rc = run_cmd_wait(argv_ifconfig);
    if (rc == 0) return 0;

    MQTT_SLIDESHOW_ERR("ifconfig %s up failed rc=%d", iface, rc);
    return -1;
}

int mqtt_slideshow_net_is_link_up(const char *iface)
{
    char path[128];
    FILE *fp;
    int carrier = 0;

    if (iface == NULL || iface[0] == '\0') return 0;

    snprintf(path, sizeof(path), "/sys/class/net/%s/carrier", iface);
    fp = fopen(path, "r");
    if (fp == NULL) return 0;

    if (fscanf(fp, "%d", &carrier) != 1) carrier = 0;
    fclose(fp);

    return carrier == 1 ? 1 : 0;
}

int mqtt_slideshow_net_has_ipv4(const char *iface)
{
    int fd;
    struct ifreq ifr;
    int ret = 0;

    if (iface == NULL || iface[0] == '\0') return 0;

    fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (fd < 0) return 0;

    memset(&ifr, 0, sizeof(ifr));
    snprintf(ifr.ifr_name, sizeof(ifr.ifr_name), "%s", iface);

    if (ioctl(fd, SIOCGIFADDR, &ifr) == 0 &&
        ifr.ifr_addr.sa_family == AF_INET) {
        ret = 1;
    }

    close(fd);
    return ret;
}

int mqtt_slideshow_net_has_default_route(const char *iface)
{
    FILE *fp;
    char line[256];
    char route_iface[64];
    unsigned long dest;
    unsigned long gateway;
    unsigned int flags;

    if (iface == NULL || iface[0] == '\0') return 0;

    fp = fopen("/proc/net/route", "r");
    if (fp == NULL) return 0;

    if (fgets(line, sizeof(line), fp) == NULL) {
        fclose(fp);
        return 0;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        route_iface[0] = '\0';
        dest = 0;
        gateway = 0;
        flags = 0;

        if (sscanf(line, "%63s %lx %lx %x", route_iface, &dest, &gateway, &flags) == 4) {
            /* dest == 0 means default route. flags & 0x1 means route is up. */
            if (strcmp(route_iface, iface) == 0 && dest == 0 && (flags & 0x1)) {
                fclose(fp);
                return 1;
            }
        }
    }

    fclose(fp);
    return 0;
}

int mqtt_slideshow_net_start_eth_dhcp(const char *iface)
{
    char pidfile[128];
    const char *script;
    int rc;
    static time_t s_last_spawn_time = 0;
    time_t now;

    if (iface == NULL || iface[0] == '\0') iface = MQTT_NET_IFACE;

    snprintf(pidfile, sizeof(pidfile), "/var/run/udhcpc.%s.pid", iface);

    rc = bring_iface_up(iface);
    if (rc != 0) {
        return -1;
    }

    /* Do not run DHCP when PHY carrier is down. DHCP cannot succeed
     * without a physical link, and repeated udhcpc starts only create
     * noisy logs like "sending discover" / "no lease".
     */
    if (!mqtt_slideshow_net_is_link_up(iface)) {
        MQTT_SLIDESHOW_LOG("%s carrier is down, wait cable/link before DHCP", iface);
        return -3;
    }

    if (mqtt_slideshow_net_has_ipv4(iface) && mqtt_slideshow_net_has_default_route(iface)) {
        return 0;
    }

    if (udhcpc_already_running(pidfile)) {
        MQTT_SLIDESHOW_LOG("udhcpc already running for %s", iface);
        return 0;
    }

    now = time(NULL);
    if (s_last_spawn_time != 0 && (now - s_last_spawn_time) < 10) {
        MQTT_SLIDESHOW_LOG("dhcp already requested for %s, wait result", iface);
        return 0;
    }
    s_last_spawn_time = now;

    script = find_udhcpc_script();

    if (script != NULL) {
        char *argv_udhcpc[] = {
            "udhcpc",
            "-i", (char *)iface,
            "-s", (char *)script,
            "-b",
            "-p", pidfile,
            NULL
        };

        MQTT_SLIDESHOW_LOG("start dhcp detached: udhcpc -i %s -s %s -b -p %s", iface, script, pidfile);
        rc = run_cmd_detached(argv_udhcpc);
    } else {
        char *argv_udhcpc[] = {
            "udhcpc",
            "-i", (char *)iface,
            "-b",
            "-p", pidfile,
            NULL
        };

        MQTT_SLIDESHOW_LOG("start dhcp detached: udhcpc -i %s -b -p %s", iface, pidfile);
        rc = run_cmd_detached(argv_udhcpc);
    }

    if (rc != 0) {
        MQTT_SLIDESHOW_ERR("udhcpc spawn failed rc=%d iface=%s", rc, iface);
        return -2;
    }

    return 0;
}

int mqtt_slideshow_net_wait_ready(const char *iface, int timeout_sec)
{
    int waited = 0;
    int next_log = 0;

    if (iface == NULL || iface[0] == '\0') iface = MQTT_NET_IFACE;

    while (timeout_sec < 0 || waited < timeout_sec) {
        int link = mqtt_slideshow_net_is_link_up(iface);
        int ip = mqtt_slideshow_net_has_ipv4(iface);
        int route = mqtt_slideshow_net_has_default_route(iface);

        if (link && ip && route) {
            MQTT_SLIDESHOW_LOG("network ready iface=%s link=%d ipv4=%d route=%d", iface, link, ip, route);
            return 0;
        }

        if (waited >= next_log) {
            if (!link) {
                MQTT_SLIDESHOW_LOG("waiting cable/link iface=%s link=%d ipv4=%d route=%d", iface, link, ip, route);
            } else {
                MQTT_SLIDESHOW_LOG("waiting network iface=%s link=%d ipv4=%d route=%d", iface, link, ip, route);
            }
            next_log = waited + 3;
        }

        sleep(1);
        waited++;
    }

    MQTT_SLIDESHOW_ERR("network wait timeout iface=%s", iface);
    return -1;
}
