# otes10's Workspace

## Dactyl Manuform 5x6

### Layout Configuration

Option 1: Use QMK Configurator

Visit https://config.qmk.fm/#/handwired/dactyl_manuform/5x6/LAYOUT_5x6 and download the keymap.json

Using MSYS, run the command `qmk json2c <json path> > <keymap.c path>`

Option 2: Editing manually

In `keyboards/handwired/dactyl_manuform/5x6/keymaps/` copy and paste a folder to work from (e.g. default)

Edit the `keymap.c` file

### Home Row Modifiers Setup

Required code can be generated here: https://precondition.github.io/home-row-mods#qmk-home-row-mods-code-generator

`TAPPING_TERM` - how many ms before the modifier activates

`QUICK_TAP_TERM` - how many ms between pressing a key twice to trigger auto-repeat. Set to 0ms to disable auto-repeat.

### Binary File Compilation

`qmk compile -kb handwired/dactyl_manuform/5x6 -km <keymap folder name>`

### Flashing

1. Disconnect USB-C and RJ9 cables
2. Unscrew baseplates
3. Open QMK Toolbox and select the hex file to flash. It should be generated in the root of this repository. Set Auto-Flash on
4. Connect USB-C cable to left half, short GND and RST
5. Check Toolbox command line output that the left half has been successfully flashed
6. Connect a USB micro cable to right half, repeat 4 and 5
7. Under Tools, use the Key Tester to verify that the keyboard has been successfully flashed

![pinout](.\dactyl_manuform\ATMEGA32U4_pinout.png)

## Jmacro

### Layer Specific Rotary Encoders

See `keyboards\jmacro\keymaps\sdvx\keymap.c`

Write user-specific code in `encoder_update_user()` function

Use `get_highest_layer(layer_state)` to determine the current layer

Use `tap_code(<key>)` to trigger a key stroke
