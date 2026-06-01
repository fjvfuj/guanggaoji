#include "lv_pro_mqtt_slideshow_http.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <curl/curl.h>
#include "cJSON.h"
#ifndef O_DIRECTORY
#define O_DIRECTORY 0
#endif

typedef struct {
    char *data;
    size_t len;
    size_t cap;
} http_buf_t;

static int fsync_parent_dir(const char *path)
{
    char dir[MQTT_SLIDESHOW_MAX_URL_LEN];
    char *slash;
    int fd;

    if (path == NULL || path[0] == '\0') return -1;

    snprintf(dir, sizeof(dir), "%s", path);
    slash = strrchr(dir, '/');
    if (slash == NULL) return -1;
    if (slash == dir) {
        slash[1] = '\0';
    } else {
        *slash = '\0';
    }

    fd = open(dir, O_RDONLY | O_DIRECTORY);
    if (fd < 0) {
        MQTT_SLIDESHOW_ERR("open parent dir failed: %s errno=%d", dir, errno);
        return -1;
    }

    if (fsync(fd) != 0) {
        MQTT_SLIDESHOW_ERR("fsync parent dir failed: %s errno=%d", dir, errno);
        close(fd);
        return -1;
    }

    close(fd);
    return 0;
}

static size_t write_mem_cb(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t n = size * nmemb;
    http_buf_t *buf = (http_buf_t *)userp;
    char *new_data;
    size_t new_cap;

    if (buf == NULL || n == 0) return 0;

    if (buf->len + n + 1 > buf->cap) {
        new_cap = buf->cap ? buf->cap : 4096;
        while (new_cap < buf->len + n + 1) new_cap *= 2;

        new_data = (char *)realloc(buf->data, new_cap);
        if (new_data == NULL) return 0;

        buf->data = new_data;
        buf->cap = new_cap;
    }

    memcpy(buf->data + buf->len, contents, n);
    buf->len += n;
    buf->data[buf->len] = '\0';
    return n;
}

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

static int is_valid_template_id(const char *s)
{
    const unsigned char *p = (const unsigned char *)s;

    if (s == NULL || s[0] == '\0') return 0;

    while (*p) {
        if (!isdigit(*p)) return 0;
        p++;
    }

    return 1;
}

int mqtt_slideshow_http_init(void)
{
    CURLcode rc = curl_global_init(CURL_GLOBAL_DEFAULT);
    if (rc != CURLE_OK) {
        MQTT_SLIDESHOW_ERR("curl_global_init failed: %s", curl_easy_strerror(rc));
        return -1;
    }
    return 0;
}

void mqtt_slideshow_http_deinit(void)
{
    curl_global_cleanup();
}

static int http_get_text(const char *url, char **out_text, long timeout_sec)
{
    CURL *curl;
    CURLcode res;
    long http_code = 0;
    http_buf_t buf;

    if (url == NULL || out_text == NULL) return -1;
    *out_text = NULL;

    memset(&buf, 0, sizeof(buf));

    curl = curl_easy_init();
    if (curl == NULL) return -2;

    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_mem_cb);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buf);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, timeout_sec);
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

    res = curl_easy_perform(curl);
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);
    curl_easy_cleanup(curl);

    if (res != CURLE_OK) {
        MQTT_SLIDESHOW_ERR("HTTP GET failed: %s, url=%s", curl_easy_strerror(res), url);
        free(buf.data);
        return -3;
    }

    if (http_code >= 400 || http_code == 0) {
        MQTT_SLIDESHOW_ERR("HTTP bad status: %ld, url=%s", http_code, url);
        free(buf.data);
        return -4;
    }

    if (buf.data == NULL) {
        buf.data = strdup("");
        if (buf.data == NULL) return -5;
    }

    *out_text = buf.data;
    return 0;
}

static void append_url_if_room(char urls[][MQTT_SLIDESHOW_MAX_URL_LEN], int *url_count, const char *url)
{
    int i;

    if (urls == NULL || url_count == NULL || url == NULL || url[0] == '\0') return;
    if (*url_count >= MQTT_SLIDESHOW_MAX_IMAGES) return;

    for (i = 0; i < *url_count; i++) {
        if (strcmp(urls[i], url) == 0) return; /* 去重 */
    }

    snprintf(urls[*url_count], MQTT_SLIDESHOW_MAX_URL_LEN, "%s", url);
    (*url_count)++;
}

static int parse_template_response_for_images(const char *json,
                                              char urls[][MQTT_SLIDESHOW_MAX_URL_LEN],
                                              int *url_count)
{
    cJSON *root;
    cJSON *data_obj;
    cJSON *options_str;
    cJSON *options_obj = NULL;
    cJSON *image_array;
    cJSON *image_item;

    if (json == NULL || urls == NULL || url_count == NULL) return -1;

    root = cJSON_Parse(json);
    if (root == NULL) {
        MQTT_SLIDESHOW_ERR("template JSON parse failed");
        return -2;
    }

    data_obj = cJSON_GetObjectItem(root, "data");
    if (!cJSON_IsObject(data_obj)) {
        cJSON_Delete(root);
        return -3;
    }

    options_str = cJSON_GetObjectItem(data_obj, "options");
    if (cJSON_IsString(options_str) && cJSON_GetStringValue(options_str) != NULL) {
        options_obj = cJSON_Parse(cJSON_GetStringValue(options_str));
    } else if (cJSON_IsObject(options_str)) {
        options_obj = cJSON_Duplicate(options_str, 1);
    }

    if (options_obj == NULL) {
        cJSON_Delete(root);
        return -4;
    }

    image_array = cJSON_GetObjectItem(options_obj, "image");
    if (cJSON_IsArray(image_array)) {
        cJSON_ArrayForEach(image_item, image_array) {
            cJSON *url_obj = cJSON_GetObjectItem(image_item, "url");
            if (cJSON_IsString(url_obj) && cJSON_GetStringValue(url_obj) != NULL) {
                append_url_if_room(urls, url_count, cJSON_GetStringValue(url_obj));
            }
            if (*url_count >= MQTT_SLIDESHOW_MAX_IMAGES) break;
        }
    }

    cJSON_Delete(options_obj);
    cJSON_Delete(root);
    return 0;
}

static int fetch_one_template(const char *template_id,
                              char urls[][MQTT_SLIDESHOW_MAX_URL_LEN],
                              int *url_count)
{
    char api_url[MQTT_SLIDESHOW_MAX_URL_LEN];
    char *body = NULL;
    int rc;

    snprintf(api_url, sizeof(api_url), HTTP_TEMPLATE_URL, template_id);
    MQTT_SLIDESHOW_LOG("Requesting template: %s", api_url);

    rc = http_get_text(api_url, &body, HTTP_TEMPLATE_TIMEOUT_SECONDS);
    if (rc != 0) return rc;

    rc = parse_template_response_for_images(body, urls, url_count);
    free(body);

    if (rc != 0) {
        MQTT_SLIDESHOW_ERR("parse template failed, id=%s rc=%d", template_id, rc);
        return rc;
    }

    return 0;
}

int mqtt_slideshow_http_collect_image_urls(const char *template_payload,
                                           char urls[][MQTT_SLIDESHOW_MAX_URL_LEN],
                                           int *url_count)
{
    char copy[MQTT_SLIDESHOW_MAX_TEMPLATE_PAYLOAD];
    char *saveptr = NULL;
    char *token;
    int failed = 0;

    if (template_payload == NULL || urls == NULL || url_count == NULL) return -1;

    memset(urls, 0, sizeof(char) * MQTT_SLIDESHOW_MAX_IMAGES * MQTT_SLIDESHOW_MAX_URL_LEN);
    *url_count = 0;

    snprintf(copy, sizeof(copy), "%s", template_payload);

    token = strtok_r(copy, ",", &saveptr);
    while (token != NULL && *url_count < MQTT_SLIDESHOW_MAX_IMAGES) {
        char *id = trim_inplace(token);

        if (id[0] != '\0') {
            if (!is_valid_template_id(id)) {
                MQTT_SLIDESHOW_ERR("ignore invalid template id: %s", id);
            } else if (fetch_one_template(id, urls, url_count) != 0) {
                failed++;
            }
        }

        token = strtok_r(NULL, ",", &saveptr);
    }

    if (*url_count <= 0) {
        MQTT_SLIDESHOW_ERR("no valid image url found, payload=%s", template_payload);
        return failed ? -2 : -3;
    }

    MQTT_SLIDESHOW_LOG("Collected image urls: %d", *url_count);
    return 0;
}

int mqtt_slideshow_http_download_file(const char *url, const char *filename)
{
    CURL *curl;
    CURLcode res;
    FILE *fp;
    char temp_file[MQTT_SLIDESHOW_MAX_URL_LEN];
    long http_code = 0;
    struct stat st;
    int fd;

    if (url == NULL || filename == NULL) return -1;

    snprintf(temp_file, sizeof(temp_file), "%s.tmp", filename);

    /* 上次突然断电可能留下 .tmp，先删掉，避免误用半文件。 */
    remove(temp_file);

    curl = curl_easy_init();
    if (curl == NULL) return -2;

    fp = fopen(temp_file, "wb");
    if (fp == NULL) {
        MQTT_SLIDESHOW_ERR("open download temp failed: %s errno=%d", temp_file, errno);
        curl_easy_cleanup(curl);
        return -3;
    }

    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, HTTP_IMAGE_TIMEOUT_SECONDS);
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

    res = curl_easy_perform(curl);
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);

    /* 关键：下载完立刻刷入磁盘。突然断电时，最多丢 .tmp，不破坏原 jpg。 */
    fflush(fp);
    fd = fileno(fp);
    if (fd >= 0) {
        fsync(fd);
    }
    fclose(fp);
    curl_easy_cleanup(curl);

    if (res != CURLE_OK || http_code >= 400 || http_code == 0) {
        MQTT_SLIDESHOW_ERR("download failed: res=%d http=%ld url=%s", (int)res, http_code, url);
        remove(temp_file);
        fsync_parent_dir(filename);
        return -4;
    }

    if (stat(temp_file, &st) != 0 || st.st_size <= 0) {
        MQTT_SLIDESHOW_ERR("download empty/bad temp file: %s url=%s", temp_file, url);
        remove(temp_file);
        fsync_parent_dir(filename);
        return -6;
    }

    /* 原子替换：只有完整 .tmp 已经 fsync 后，才替换正式 jpg。 */
    if (rename(temp_file, filename) != 0) {
        MQTT_SLIDESHOW_ERR("rename download file failed: %s -> %s errno=%d", temp_file, filename, errno);
        remove(temp_file);
        fsync_parent_dir(filename);
        return -5;
    }

    /* 关键：rename 后 fsync 目录，保证断电后目录项也落盘。 */
    fsync_parent_dir(filename);
    sync();

    MQTT_SLIDESHOW_LOG("download committed: %s size=%ld", filename, (long)st.st_size);
    return 0;
}
