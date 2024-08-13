#include "Arduino.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lv_demo_widgets.h"
#include "qmsd_board.h"
#include "qmsd_utils.h"
#include "string.h"
#include <stdio.h>

#define TAG "QMSD-MAIN"

#ifdef CONFIG_QMSD_GUI_LVGL_V7
#error "example not support lvgl 7 now"
#endif

void gui_user_init() { lv_demo_widgets(); }

extern "C" void app_main(void) {
  initArduino();

  gpio_install_isr_service(ESP_INTR_FLAG_SHARED);
  qmsd_board_config_t config = QMSD_BOARD_DEFAULT_CONFIG;
  config.gui.refresh_task.core = 1;
  qmsd_board_init(&config);
  printf("Fine qmsd!\r\n");

  // Arduino-like loop()
  while (true) {
    // Serial.println("loop");
  }
}
