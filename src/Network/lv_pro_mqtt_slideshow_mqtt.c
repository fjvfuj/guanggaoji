#include "lv_pro_mqtt_slideshow_mqtt.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>
#include <mosquitto.h>
#include "cJSON.h"

#include "lv_pro_mqtt_slideshow_config.h"
#include "lv_pro_mqtt_slideshow_worker.h"
#include "lv_pro_mqtt_slideshow_net.h"

static pthread_t s_mqtt_thread;
static pthread_mutex_t s_mqtt_lock = PTHREAD_MUTEX_INITIALIZER;

static struct mosquitto *s_mosq = NULL;
static bool s_started = false;
static bool s_running = false;
static bool s_connected = false;
static bool s_mosquitto_lib_inited = false;

static char s_device_sn[64] = {0};
static char s_topic[160] = {0};
static int s_last_heartbeat_mid = -1;

static long now_seconds(void)
{
    return (long)time(NULL);
}

static int mqtt_should_run(void)
{
    int ret;
    pthread_mutex_lock(&s_mqtt_lock);
    ret = s_running ? 1 : 0;
    pthread_mutex_unlock(&s_mqtt_lock);
    return ret;
}

static char *trim_payload(char *s)
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

static int read_device_sn_file(const char *path, char *out, size_t out_size)
{
    FILE *fp;
    char *p;

    if (path == NULL || out == NULL || out_size <= 1) {
        return -1;
    }

    fp = fopen(path, "r");
    if (fp == NULL) {
        return -1;
    }

    if (fgets(out, (int)out_size, fp) == NULL) {
        fclose(fp);
        out[0] = '\0';
        return -1;
    }

    fclose(fp);

    p = trim_payload(out);
    if (p != out) {
        memmove(out, p, strlen(p) + 1);
    }

    return out[0] ? 0 : -1;
}

static void resolve_device_sn_and_topic(void)
{
    const char *env_snum = getenv("snum");
    const char *env_sn = getenv("SN");
    const char *sn = NULL;
    char file_sn[64];

    /*
     * Production priority:
     * 1. /usr/share/lv_projector/device_sn
     * 2. /data/device_sn
     * 3. /etc/device_sn
     * 4. env snum / SN, only for debug
     * 5. MQTT_DEFAULT_DEVICE_SN fallback
     */
    if (read_device_sn_file(MQTT_DEVICE_SN_FILE, file_sn, sizeof(file_sn)) == 0) {
        sn = file_sn;
        MQTT_SLIDESHOW_LOG("device_sn source=file path=%s value=%s", MQTT_DEVICE_SN_FILE, sn);
    } else if (read_device_sn_file(MQTT_DEVICE_SN_FILE_FALLBACK1, file_sn, sizeof(file_sn)) == 0) {
        sn = file_sn;
        MQTT_SLIDESHOW_LOG("device_sn source=file path=%s value=%s", MQTT_DEVICE_SN_FILE_FALLBACK1, sn);
    } else if (read_device_sn_file(MQTT_DEVICE_SN_FILE_FALLBACK2, file_sn, sizeof(file_sn)) == 0) {
        sn = file_sn;
        MQTT_SLIDESHOW_LOG("device_sn source=file path=%s value=%s", MQTT_DEVICE_SN_FILE_FALLBACK2, sn);
    } else if (env_snum && env_snum[0]) {
        sn = env_snum;
        MQTT_SLIDESHOW_LOG("device_sn source=env snum value=%s", sn);
    } else if (env_sn && env_sn[0]) {
        sn = env_sn;
        MQTT_SLIDESHOW_LOG("device_sn source=env SN value=%s", sn);
    } else {
        sn = MQTT_DEFAULT_DEVICE_SN;
        MQTT_SLIDESHOW_LOG("device_sn source=default value=%s", sn);
    }

    snprintf(s_device_sn, sizeof(s_device_sn), "%s", sn);
    snprintf(s_topic, sizeof(s_topic), "%s/%s", MQTT_TOPIC_PREFIX, s_device_sn);
}

static int parse_broker(const char *broker, char *host, size_t host_size, int *port)
{
    const char *p;
    char *colon;
    char temp[256];

    if (broker == NULL || host == NULL || port == NULL) return -1;

    p = broker;
    if (strncmp(p, "tcp://", 6) == 0) p += 6;

    snprintf(temp, sizeof(temp), "%s", p);
    colon = strrchr(temp, ':');
    if (colon != NULL) {
        *colon = '\0';
        *port = atoi(colon + 1);
        if (*port <= 0) *port = 1883;
    } else {
        *port = 1883;
    }

    snprintf(host, host_size, "%s", temp);
    return host[0] ? 0 : -2;
}

static void publish_heartbeat_locked(const char *reason)
{
    char payload[160];
    int rc;
    int mid = 0;

    if (s_mosq == NULL || !s_connected || s_device_sn[0] == '\0') {
        fprintf(stderr,
                "\033[31m[MQTT Slideshow][HEARTBEAT][SKIP] reason=%s mosq=%p connected=%d sn=%s\033[0m\n",
                reason ? reason : "unknown",
                (void *)s_mosq,
                s_connected ? 1 : 0,
                s_device_sn);
        fflush(stderr);
        return;
    }

    /* Backend verified protocol: topic=device_heartbeat qos=1 payload={"sn":"xxx"}. */
    snprintf(payload, sizeof(payload), "{\"sn\":\"%s\"}", s_device_sn);

    fprintf(stderr,
            "\033[31m[MQTT Slideshow][HEARTBEAT][TRY] reason=%s topic=%s qos=%d payload=%s\033[0m\n",
            reason ? reason : "unknown", MQTT_HEARTBEAT_TOPIC, MQTT_HEARTBEAT_QOS, payload);
    fflush(stderr);

    rc = mosquitto_publish(s_mosq, &mid, MQTT_HEARTBEAT_TOPIC,
                           (int)strlen(payload), payload, MQTT_HEARTBEAT_QOS, false);

    if (rc == MOSQ_ERR_SUCCESS) {
        s_last_heartbeat_mid = mid;
        fprintf(stderr,
                "\033[31m[MQTT Slideshow][HEARTBEAT][QUEUED] mid=%d topic=%s qos=%d payload=%s\033[0m\n",
                mid, MQTT_HEARTBEAT_TOPIC, MQTT_HEARTBEAT_QOS, payload);
        fflush(stderr);
    } else {
        fprintf(stderr,
                "\033[31m[MQTT Slideshow][HEARTBEAT][ERR] publish failed rc=%d %s topic=%s payload=%s\033[0m\n",
                rc, mosquitto_strerror(rc), MQTT_HEARTBEAT_TOPIC, payload);
        fflush(stderr);
    }
}

static void on_connect(struct mosquitto *mosq, void *userdata, int result)
{
    int rc;
    (void)userdata;

    if (result != 0) {
        MQTT_SLIDESHOW_ERR("MQTT connect failed: %s", mosquitto_connack_string(result));
        pthread_mutex_lock(&s_mqtt_lock);
        s_connected = false;
        pthread_mutex_unlock(&s_mqtt_lock);
        return;
    }

    pthread_mutex_lock(&s_mqtt_lock);
    s_connected = true;
    pthread_mutex_unlock(&s_mqtt_lock);

    MQTT_SLIDESHOW_LOG("Connected to MQTT broker");

    rc = mosquitto_subscribe(mosq, NULL, s_topic, MQTT_SUBSCRIBE_QOS);
    if (rc != MOSQ_ERR_SUCCESS) {
        MQTT_SLIDESHOW_ERR("subscribe request failed: %s topic=%s", mosquitto_strerror(rc), s_topic);
    } else {
        MQTT_SLIDESHOW_LOG("Subscribe requested topic=%s qos=%d", s_topic, MQTT_SUBSCRIBE_QOS);
    }

    pthread_mutex_lock(&s_mqtt_lock);
    publish_heartbeat_locked("connect");
    pthread_mutex_unlock(&s_mqtt_lock);
}

static void on_subscribe(struct mosquitto *mosq, void *userdata, int mid, int qos_count, const int *granted_qos)
{
    (void)mosq;
    (void)userdata;

    if (qos_count > 0 && granted_qos != NULL) {
        MQTT_SLIDESHOW_LOG("Subscribed OK mid=%d granted_qos=%d topic=%s", mid, granted_qos[0], s_topic);
    } else {
        MQTT_SLIDESHOW_LOG("Subscribed OK mid=%d topic=%s", mid, s_topic);
    }
}

static void on_publish(struct mosquitto *mosq, void *userdata, int mid)
{
    (void)mosq;
    (void)userdata;

    if (mid == s_last_heartbeat_mid) {
        fprintf(stderr,
                "\033[31m[MQTT Slideshow][HEARTBEAT][ACK] mid=%d broker_ack=1\033[0m\n",
                mid);
        fflush(stderr);
    } else {
        MQTT_SLIDESHOW_LOG("MQTT publish ack mid=%d", mid);
    }
}

static void on_disconnect(struct mosquitto *mosq, void *userdata, int rc)
{
    (void)mosq;
    (void)userdata;

    pthread_mutex_lock(&s_mqtt_lock);
    s_connected = false;
    pthread_mutex_unlock(&s_mqtt_lock);

    if (rc != 0) {
        MQTT_SLIDESHOW_ERR("Disconnected unexpectedly rc=%d", rc);
    } else {
        MQTT_SLIDESHOW_LOG("Disconnected normally");
    }
}

static void on_message(struct mosquitto *mosq, void *userdata, const struct mosquitto_message *message)
{
    char payload[MQTT_SLIDESHOW_MAX_TEMPLATE_PAYLOAD];
    char *trimmed;
    int copy_len;

    (void)mosq;
    (void)userdata;

    if (message == NULL || message->topic == NULL || message->payload == NULL) return;

    if (strcmp(message->topic, s_topic) != 0) {
        MQTT_SLIDESHOW_LOG("Ignore topic=%s", message->topic);
        return;
    }

    copy_len = message->payloadlen;
    if (copy_len <= 0) return;
    if (copy_len >= (int)sizeof(payload)) copy_len = (int)sizeof(payload) - 1;

    memcpy(payload, message->payload, (size_t)copy_len);
    payload[copy_len] = '\0';

    trimmed = trim_payload(payload);
    if (trimmed == NULL || trimmed[0] == '\0') return;

    MQTT_SLIDESHOW_LOG("Received MQTT message [%s]: %s", message->topic, trimmed);

    if (mqtt_slideshow_worker_post_template(trimmed) != 0) {
        MQTT_SLIDESHOW_ERR("worker post failed, payload=%s", trimmed);
    }
}

static int wait_network_before_connect(void)
{
    int link;
    int ip;
    int route;
    int rc;

#if MQTT_NET_AUTO_DHCP
    /* Bring eth0 up and start DHCP only when carrier exists. */
    rc = mqtt_slideshow_net_start_eth_dhcp(MQTT_NET_IFACE);
    if (rc == -3) {
        MQTT_SLIDESHOW_LOG("network cable/link not ready, skip MQTT connect this round");
        return -2;
    }
#endif

    link = mqtt_slideshow_net_is_link_up(MQTT_NET_IFACE);
    ip = mqtt_slideshow_net_has_ipv4(MQTT_NET_IFACE);
    route = mqtt_slideshow_net_has_default_route(MQTT_NET_IFACE);

    if (link && ip && route) {
        MQTT_SLIDESHOW_LOG("network ready iface=%s link=%d ipv4=%d route=%d",
                           MQTT_NET_IFACE, link, ip, route);
        return 0;
    }

    /* Wait for udhcpc/default.script to apply IP and default route. */
    mqtt_slideshow_net_wait_ready(MQTT_NET_IFACE, 12);

    link = mqtt_slideshow_net_is_link_up(MQTT_NET_IFACE);
    ip = mqtt_slideshow_net_has_ipv4(MQTT_NET_IFACE);
    route = mqtt_slideshow_net_has_default_route(MQTT_NET_IFACE);

    if (link && ip && route) {
        MQTT_SLIDESHOW_LOG("network ready after wait iface=%s link=%d ipv4=%d route=%d",
                           MQTT_NET_IFACE, link, ip, route);
        return 0;
    }

    if (!link) {
        MQTT_SLIDESHOW_LOG("network not ready: eth0 carrier=0, skip MQTT connect");
        return -2;
    }

    MQTT_SLIDESHOW_LOG("network not ready iface=%s link=%d ipv4=%d route=%d, skip MQTT connect",
                       MQTT_NET_IFACE, link, ip, route);
    return -2;
}

static int connect_async_with_network(struct mosquitto *mosq, const char *host, int port)
{
    int rc;

    if (wait_network_before_connect() != 0) {
        return -1;
    }

    /* Do NOT use blocking mosquitto_connect() on this board.
     * It can block after DHCP succeeds, so the log stops after
     * "network ready after wait". Use async connect and drive it
     * with mosquitto_loop(). on_connect() will subscribe after CONNACK.
     */
    MQTT_SLIDESHOW_LOG("MQTT async connect request broker=%s:%d", host, port);

    errno = 0;
    rc = mosquitto_connect_async(mosq, host, port, MQTT_KEEPALIVE_SECONDS);
    if (rc == MOSQ_ERR_SUCCESS) {
        return 0;
    }

    if (rc == MOSQ_ERR_ERRNO) {
        MQTT_SLIDESHOW_ERR("connect_async failed: %s errno=%d %s",
                           mosquitto_strerror(rc), errno, strerror(errno));
    } else {
        MQTT_SLIDESHOW_ERR("connect_async failed: %s", mosquitto_strerror(rc));
    }

    return -2;
}

static int reconnect_async_with_network(struct mosquitto *mosq, const char *host, int port)
{
    int rc;

    if (wait_network_before_connect() != 0) {
        return -1;
    }

    MQTT_SLIDESHOW_LOG("MQTT async reconnect request broker=%s:%d", host, port);

    errno = 0;
    rc = mosquitto_reconnect_async(mosq);
    if (rc == MOSQ_ERR_SUCCESS) {
        return 0;
    }

    MQTT_SLIDESHOW_ERR("reconnect_async failed: %s, try connect_async", mosquitto_strerror(rc));

    errno = 0;
    rc = mosquitto_connect_async(mosq, host, port, MQTT_KEEPALIVE_SECONDS);
    if (rc == MOSQ_ERR_SUCCESS) {
        return 0;
    }

    if (rc == MOSQ_ERR_ERRNO) {
        MQTT_SLIDESHOW_ERR("connect_async retry failed: %s errno=%d %s",
                           mosquitto_strerror(rc), errno, strerror(errno));
    } else {
        MQTT_SLIDESHOW_ERR("connect_async retry failed: %s", mosquitto_strerror(rc));
    }

    return -2;
}

static void *mqtt_thread_main(void *arg)
{
    char host[256];
    int port = 1883;
    char client_id[160];
    int rc;
    int backoff = MQTT_RECONNECT_MIN_SECONDS;
    long next_heartbeat = 0;

    (void)arg;

    resolve_device_sn_and_topic();
    parse_broker(MQTT_BROKER_TCP, host, sizeof(host), &port);

    mosquitto_lib_init();
    s_mosquitto_lib_inited = true;

    snprintf(client_id, sizeof(client_id), MQTT_CLIENT_ID_TEMPLATE, s_device_sn);

    MQTT_SLIDESHOW_LOG("BUILD_TAG=mqtt_slideshow_v16_heartbeat_try_queue_ack");
    MQTT_SLIDESHOW_LOG("MQTT device_sn=%s client_id=%s topic=%s broker=%s:%d iface=%s auto_dhcp=%d user=%s heartbeat_topic=%s heartbeat_qos=%d",
                       s_device_sn, client_id, s_topic, host, port, MQTT_NET_IFACE, MQTT_NET_AUTO_DHCP, MQTT_USERNAME,
                       MQTT_HEARTBEAT_TOPIC, MQTT_HEARTBEAT_QOS);

    s_mosq = mosquitto_new(client_id, true, NULL);
    if (s_mosq == NULL) {
        MQTT_SLIDESHOW_ERR("mosquitto_new failed");
        goto out;
    }

    /* Safe when another thread publishes error logs while mosquitto_loop is active. */
    mosquitto_threaded_set(s_mosq, true);

    rc = mosquitto_username_pw_set(s_mosq, MQTT_USERNAME, MQTT_PASSWORD);
    if (rc != MOSQ_ERR_SUCCESS) {
        MQTT_SLIDESHOW_ERR("mosquitto_username_pw_set failed: %s", mosquitto_strerror(rc));
        goto out;
    }
    mosquitto_connect_callback_set(s_mosq, on_connect);
    mosquitto_subscribe_callback_set(s_mosq, on_subscribe);
    mosquitto_disconnect_callback_set(s_mosq, on_disconnect);
    mosquitto_publish_callback_set(s_mosq, on_publish);
    mosquitto_message_callback_set(s_mosq, on_message);
    mosquitto_reconnect_delay_set(s_mosq, MQTT_RECONNECT_MIN_SECONDS, MQTT_RECONNECT_MAX_SECONDS, true);

    while (mqtt_should_run()) {
        rc = connect_async_with_network(s_mosq, host, port);
        if (rc == 0) {
            break;
        }

        MQTT_SLIDESHOW_LOG("MQTT initial async connect retry in %d sec", backoff);
        sleep((unsigned int)backoff);
        if (backoff < MQTT_RECONNECT_MAX_SECONDS) backoff *= 2;
        if (backoff > MQTT_RECONNECT_MAX_SECONDS) backoff = MQTT_RECONNECT_MAX_SECONDS;
    }

    next_heartbeat = now_seconds() + MQTT_APP_HEARTBEAT_SECONDS;
    backoff = MQTT_RECONNECT_MIN_SECONDS;

    while (mqtt_should_run()) {
        static long next_connecting_log = 0;

        rc = mosquitto_loop(s_mosq, 1000, 1);
        if (rc != MOSQ_ERR_SUCCESS) {
            pthread_mutex_lock(&s_mqtt_lock);
            s_connected = false;
            pthread_mutex_unlock(&s_mqtt_lock);

            MQTT_SLIDESHOW_ERR("mosquitto_loop rc=%d %s", rc, mosquitto_strerror(rc));

            if (!mqtt_should_run()) break;

            MQTT_SLIDESHOW_LOG("MQTT reconnect in %d sec", backoff);
            sleep((unsigned int)backoff);
            if (!mqtt_should_run()) break;

            if (reconnect_async_with_network(s_mosq, host, port) != 0) {
                if (backoff < MQTT_RECONNECT_MAX_SECONDS) backoff *= 2;
                if (backoff > MQTT_RECONNECT_MAX_SECONDS) backoff = MQTT_RECONNECT_MAX_SECONDS;
            } else {
                backoff = MQTT_RECONNECT_MIN_SECONDS;
            }
        } else {
            int connected_now;

            pthread_mutex_lock(&s_mqtt_lock);
            connected_now = s_connected ? 1 : 0;
            pthread_mutex_unlock(&s_mqtt_lock);

            if (!connected_now && now_seconds() >= next_connecting_log) {
                MQTT_SLIDESHOW_LOG("MQTT connecting... waiting CONNACK from broker=%s:%d", host, port);
                next_connecting_log = now_seconds() + 5;
            }

            if (connected_now) {
                backoff = MQTT_RECONNECT_MIN_SECONDS;
            }
        }

        if (now_seconds() >= next_heartbeat) {
            pthread_mutex_lock(&s_mqtt_lock);
            publish_heartbeat_locked("periodic");
            pthread_mutex_unlock(&s_mqtt_lock);
            next_heartbeat = now_seconds() + MQTT_APP_HEARTBEAT_SECONDS;
        }
    }

out:
    if (s_mosq != NULL) {
        mosquitto_disconnect(s_mosq);
        mosquitto_destroy(s_mosq);
        s_mosq = NULL;
    }

    if (s_mosquitto_lib_inited) {
        mosquitto_lib_cleanup();
        s_mosquitto_lib_inited = false;
    }

    pthread_mutex_lock(&s_mqtt_lock);
    s_connected = false;
    s_running = false;
    pthread_mutex_unlock(&s_mqtt_lock);

    return NULL;
}

int mqtt_slideshow_mqtt_start(void)
{
    pthread_mutex_lock(&s_mqtt_lock);
    if (s_started) {
        pthread_mutex_unlock(&s_mqtt_lock);
        return 0;
    }

    s_running = true;
    s_started = true;
    pthread_mutex_unlock(&s_mqtt_lock);

    if (pthread_create(&s_mqtt_thread, NULL, mqtt_thread_main, NULL) != 0) {
        pthread_mutex_lock(&s_mqtt_lock);
        s_running = false;
        s_started = false;
        pthread_mutex_unlock(&s_mqtt_lock);
        return -1;
    }

    return 0;
}

void mqtt_slideshow_mqtt_stop(void)
{
    bool need_join;

    pthread_mutex_lock(&s_mqtt_lock);
    need_join = s_started;
    s_running = false;
    pthread_mutex_unlock(&s_mqtt_lock);

    if (s_mosq != NULL) {
        mosquitto_disconnect(s_mosq);
    }

    if (need_join) {
        pthread_join(s_mqtt_thread, NULL);
    }

    pthread_mutex_lock(&s_mqtt_lock);
    s_started = false;
    pthread_mutex_unlock(&s_mqtt_lock);
}

int mqtt_slideshow_mqtt_is_running(void)
{
    int ret;
    pthread_mutex_lock(&s_mqtt_lock);
    ret = s_running ? 1 : 0;
    pthread_mutex_unlock(&s_mqtt_lock);
    return ret;
}

const char *mqtt_slideshow_mqtt_device_sn(void)
{
    return s_device_sn;
}

int mqtt_slideshow_mqtt_publish_error_log(const char *error_msg)
{
    FILE *fp;
    long file_size;
    long read_size;
    char log_content[MAX_LOG_SIZE + 1];
    cJSON *root;
    char *json_str;
    int rc = -1;

    if (error_msg == NULL) error_msg = "unknown";

    pthread_mutex_lock(&s_mqtt_lock);
    if (s_mosq == NULL || !s_connected || s_device_sn[0] == '\0') {
        pthread_mutex_unlock(&s_mqtt_lock);
        return -1;
    }
    pthread_mutex_unlock(&s_mqtt_lock);

    memset(log_content, 0, sizeof(log_content));
    fp = fopen(LOG_FILE_PATH, "r");
    if (fp != NULL) {
        fseek(fp, 0, SEEK_END);
        file_size = ftell(fp);
        read_size = file_size > MAX_LOG_SIZE ? MAX_LOG_SIZE : file_size;
        if (read_size < 0) read_size = 0;
        fseek(fp, file_size - read_size, SEEK_SET);
        fread(log_content, 1, (size_t)read_size, fp);
        fclose(fp);
    }

    root = cJSON_CreateObject();
    if (root == NULL) return -2;

    cJSON_AddStringToObject(root, "sn", s_device_sn);
    cJSON_AddStringToObject(root, "error", error_msg);
    cJSON_AddStringToObject(root, "log", log_content);
    cJSON_AddNumberToObject(root, "timestamp", (double)time(NULL));

    json_str = cJSON_PrintUnformatted(root);
    if (json_str != NULL) {
        pthread_mutex_lock(&s_mqtt_lock);
        if (s_mosq != NULL && s_connected) {
            rc = mosquitto_publish(s_mosq, NULL, MQTT_LOG_ERROR_TOPIC,
                                   (int)strlen(json_str), json_str, MQTT_LOG_ERROR_QOS, false);
        }
        pthread_mutex_unlock(&s_mqtt_lock);
        free(json_str);
    }

    cJSON_Delete(root);
    return rc == MOSQ_ERR_SUCCESS ? 0 : -3;
}
