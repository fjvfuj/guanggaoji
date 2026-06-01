#include "emb_source.h"
#include "emb_event.h"
#include "emb_storage.h"

#include <stdio.h>
#include <string.h>

static emb_source_status_t emb_source_status = {
    .current = EMB_SOURCE_NONE,
};

static int emb_read_int_file(const char *path, int *value)
{
    FILE *fp;
    int tmp;

    if (path == NULL || value == NULL) return -1;

    fp = fopen(path, "r");
    if (fp == NULL) return -1;

    if (fscanf(fp, "%d", &tmp) != 1) {
        fclose(fp);
        return -1;
    }

    fclose(fp);
    *value = tmp;
    return 0;
}

static int emb_hdmi_connected(void)
{
    int value;

    if (emb_read_int_file("/sys/class/switch/hdmi/state", &value) == 0) {
        return value > 0;
    }

    if (emb_read_int_file("/sys/class/extcon/hdmi/state", &value) == 0) {
        return value > 0;
    }

    return 0;
}

emb_result_t emb_source_get_status(emb_source_status_t *status)
{
    int inserted = 0;

    if (status == NULL) return EMB_ERR_INVALID_PARAM;

    emb_source_status.hdmi_connected = emb_hdmi_connected();

    if (emb_storage_is_usb_inserted(&inserted) == EMB_OK) {
        emb_source_status.usb_inserted = inserted;
    }

    inserted = 0;
    if (emb_storage_is_tf_inserted(&inserted) == EMB_OK) {
        emb_source_status.tf_inserted = inserted;
    }

    if (emb_source_status.hdmi_connected) {
        snprintf(emb_source_status.hdmi_resolution,
                 sizeof(emb_source_status.hdmi_resolution), "%s", "connected");
    } else {
        emb_source_status.hdmi_resolution[0] = '\0';
    }

    memcpy(status, &emb_source_status, sizeof(*status));
    return EMB_OK;
}

emb_result_t emb_source_set(emb_source_t source)
{
    if (source < EMB_SOURCE_NONE || source > EMB_SOURCE_TF) return EMB_ERR_INVALID_PARAM;
    emb_source_status.current = source;
    emb_event_emit(EMB_EVENT_SOURCE_CHANGED, &emb_source_status);
    return EMB_OK;
}
