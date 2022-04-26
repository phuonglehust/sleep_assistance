#ifndef __BLE_PROV_H__
#define __BLE_PROV_H__
#include "esp_log.h"
#include <stdbool.h>



uint8_t device_mac_addr[6];
void get_device_service_name(char *service_name, size_t max);
void ble_start();
void ble_stop_adv();
// void bonded_device_start();
// void __attribute__((unused)) remove_all_bonded_devices(void);
#endif