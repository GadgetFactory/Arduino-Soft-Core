REM Use this script to move your custom AVR8 bit file into the Arduino IDE.
REM Define the base directory for your Arduino IDE installation.
set arduino-base="C:\arduino"

copy XilinxISE\papilio_avr8.bit %arduino-base%\hardware\tools\butterfly_platform\bitstreams\custom.bit
copy XilinxISE\papilio_avr8_bd.bmm %arduino-base%\hardware\tools\butterfly_platform\bitstreams\custom_bd.bmm
pause