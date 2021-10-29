Firmware for afk79s, an afk79 but split, hence the 's'
also it sounds like a kalash so its even cooler

But this time it's split and uses two pro micros

Features include:

Page Up/Down, Home/End accessable using the cursor keys while FUNC is held.
Media Keys are accessable using FUNC and F row
Alt Code support, hold altgr and and use the number row to type alt codes, no need for numpad.
FUNC + 4 = £, sends an alt code macro, £ is now OS language independant.
FUNC + ESC = RESET, for flashing.
GUI + ESC = RESET for left side
FUNC + DELETE = RESET

To use,

QMK Version used = 0.14.29
may need to update qmk, remember to use `qmk clean` afterwards too.

Git clone this repo into qmk_firmware/keyboards

chmod +x flash.sh

./flash.sh
