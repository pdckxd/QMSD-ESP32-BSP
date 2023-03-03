#pragma once

#define QMSD_SCREEN_WIDTH 480
#define QMSD_SCREEN_HIGHT 272

#define QMSD_SCREEN_BK_FREQ     500

#define QMSD_RGB_CLK_FREQ           (11000000)
#define QMSD_RGB_HSYNC_PULSE_WIDTH  (10)
#define QMSD_RGB_HSYNC_BACK_PORCH   (30)
#define QMSD_RGB_HSYNC_FRONT_PORCH  (20)
#define QMSD_RGB_VSYNC_PULSE_WIDTH  (10)
#define QMSD_RGB_VSYNC_BACK_PORCH   (30)
#define QMSD_RGB_VSYNC_FRONT_PORCH  (10)

#define QMSD_SCREEN_DIR_0       0
#define QMSD_SCREEN_DIR_90      (QMSD_SCREEN_DIR_0 ^ SCR_MIRROR_X ^ SCR_SWAP_XY)
#define QMSD_SCREEN_DIR_180     (QMSD_SCREEN_DIR_0 ^ SCR_MIRROR_X ^ SCR_MIRROR_Y)
#define QMSD_SCREEN_DIR_270     (QMSD_SCREEN_DIR_0 ^ SCR_MIRROR_Y ^ SCR_SWAP_XY)

#define QMSD_TOUCH_DIR_0        0
#define QMSD_TOUCH_DIR_90       (QMSD_TOUCH_DIR_0 ^ TOUCH_MIRROR_X ^ TOUCH_SWAP_XY)
#define QMSD_TOUCH_DIR_180      (QMSD_TOUCH_DIR_0 ^ TOUCH_MIRROR_X ^ TOUCH_MIRROR_Y)
#define QMSD_TOUCH_DIR_270      (QMSD_TOUCH_DIR_0 ^ TOUCH_MIRROR_Y ^ TOUCH_SWAP_XY)
