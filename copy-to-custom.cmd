REM Define the base directory for your Arduino IDE installation.
set arduino-base="C:\arduino"

copy scripts\XilinxISE\Papilio_AVR8.bit %arduino-base%\hardware\tools\butterfly_platform\bitstreams\custom.bit
copy scripts\XilinxISE\Papilio_AVR8_bd.bmm %arduino-base%\hardware\tools\butterfly_platform\bitstreams\custom_bd.bmm
pause