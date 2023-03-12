# This file intentionally left blank

HAPTIC_ENABLE = yes
HAPTIC_DRIVER += SOLENOID
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
SPLIT_KEYBOARD = yes
WPM_ENABLE = yes
LTO_ENABLE = yes
CUSTOM_MATRIX = lite

SRC += matrix.c
QUANTUM_LIB_SRC += i2c_master.c