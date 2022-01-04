#include <stdio.h>

#include "component_a.h"

#include "esp_log.h"

static const char *TAG = "component_manager";

void app_main(void)
{
  int a = 2;
  int b = 3;
  ESP_LOGI(TAG, "Sum of %d and %d is %d", a, b, add(a,b));
}
