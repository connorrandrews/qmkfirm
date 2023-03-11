// Copyright 2023 connorrandrews (@connorrandrews)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define USE_I2C
#define SOLENOID_PIN B7
#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120
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
