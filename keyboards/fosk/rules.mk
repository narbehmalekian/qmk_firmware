# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes  # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes	# Mouse keys
KEY_LOCK_ENABLE = yes	# Press to hold next key
ENCODER_ENABLE = yes	# Rotary encoder support
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = yes	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
NKRO_ENABLE = yes       # Enable N-Key Rollover
BACKLIGHT_ENABLE = no  	# Enable keyboard backlight functionality
AUDIO_ENABLE = no
# RGBLIGHT_ENABLE = yes
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
LTO_ENABLE = yes		# Smaller compile size, takes longer

VIA_ENABLE = yes		# Use via to customize keymaps

# SRC += fosk.c