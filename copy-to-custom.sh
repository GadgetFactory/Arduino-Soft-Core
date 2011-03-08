#!/bin/bash -x
# Define the base directory for your Arduino IDE installation.
arduinobase='/cygdrive/c/dbdev/My\ Dropbox/GadgetFactory/wiringIDE/trunk/build/windows/work/'

cp Papilio_AVR8.bit $arduinobase/hardware/tools/butterfly_platform/bitstreams/custom.bit
cp Papilio_AVR8_bd.bmm $arduinobase/hardware/tools/butterfly_platform/bitstreams/custom_bd.bmm
