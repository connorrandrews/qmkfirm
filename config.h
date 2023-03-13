// Copyright 2023 connorrandrews (@connorrandrews)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define USE_I2C
#define SOLENOID_PIN B7
#define OLED_TIMEOUT 0
#define MATRIX_ROWS 8
#define MATRIX_COLS 10

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

// wiring
#define MATRIX_ROW_PINS_MCU \
    { B3, D3, D5, B0, B2, B1 }
#define MATRIX_COL_PINS_MCU \
    { B4, C6, C7, D6, D7, F0, F1 }
#define MATRIX_ROW_PINS_MCP \
    { A5, A4, A3, A2, A1, A0 }
#define MATRIX_COL_PINS_MCP \
    { B7, B6, B5, B4, B3, B2, B1, B0, A7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

/* i2c settings */

#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN D0
#define I2C1_SDA_PIN D1
#define I2C1_TIMINGR_PRESC 2U
#define I2C1_TIMINGR_SCLDEL 1U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 9U
#define I2C1_TIMINGR_SCLL 26U
#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1



/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
