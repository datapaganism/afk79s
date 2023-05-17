# afk79s

Supports 0.20.8

![afk79s](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [datapaganism](https://github.com/datapaganism)
* Hardware Supported: Two Pro Micros
* Hardware Availability: Handwire only atm

Make example for this keyboard (after setting up your build environment):

    make afk79s:default

Flashing example for this keyboard:

    make afk79s:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


Firmware for afk79s, an afk79 but split, hence the 's'
also it sounds like a kalash so its even cooler

But this time it's split and uses two pro micros

Features include:

Page Up/Down and Home/End are accessible using the cursor keys while FUNC is held. Media Keys are accessible using FUNC and F row Alt Code support; hold AltGr and use the number row to type alt codes; no need for numpad. FUNC + 4 = £, sends an alt code macro, £ is now OS language independent. FUNC + ESC = RESET for flashing.
GUI + ESC = RESET for left side.
FUNC + DELETE = RESET.