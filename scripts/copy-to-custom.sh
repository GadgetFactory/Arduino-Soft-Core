#!/bin/bash -x
# Use this script to move your custom AVR8 bit file into the Arduino IDE.
# Define the base directory for your Arduino IDE installation.
arduinobase='/opt/arduino'

cp scripts/XilinxISE/Papilio_AVR8.bit $arduinobase/hardware/tools/butterfly_platform/bitstreams/custom.bit
cp scripts/XilinxISE/Papilio_AVR8_bd.bmm $arduinobase/hardware/tools/butterfly_platform/bitstreams/custom_bd.bmm
