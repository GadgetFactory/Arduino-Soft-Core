REM Define the base directory for your Arduino IDE installation.
set arduino-base="C:\dbdev\My Dropbox\GadgetFactory\wiringIDE\trunk\build\windows\work\"

copy Papilio_AVR8.bit %arduino-base%\hardware\tools\butterfly_platform\bitstreams\custom.bit
copy Papilio_AVR8_bd.bmm %arduino-base%\hardware\tools\butterfly_platform\bitstreams\custom_bd.bmm
pause