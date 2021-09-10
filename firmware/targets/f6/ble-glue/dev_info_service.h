#pragma once

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DEV_INFO_MANUFACTURER_NAME              "Flipper Devices Inc."
#define DEV_INFO_SERIAL_NUMBER                  "1.0"
#define DEV_INFO_FIRMWARE_REVISION_NUMBER       TARGET
#define DEV_INFO_SOFTWARE_REVISION_NUMBER       GIT_COMMIT " " GIT_BRANCH " " GIT_BRANCH_NUM " " BUILD_DATE


bool dev_info_service_init();

#ifdef __cplusplus
}
#endif