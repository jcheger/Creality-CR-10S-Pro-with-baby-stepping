# Introduction

Creality CR-10S Pro is a great machine, but I am really disappointed by the Z homing. The capacitive sensor has fairly random measurements, depending on the environment, and each first layer is a gamble. Is it any way to set the Z offset on this printer ? However, usual printing and changing the bed requires to fine tune the screw on the sensor too often to make me happy.

Although, Marlin has a dynamic Z offset functionality, called Baby Stepping. In v1.1.6 (used by Creality), the offset must be done from the screen while printing - Creality don't use a driven screen by Marlin, which prevents the use of baby stepping. But on later versions, there is a function to do this: [M290](http://marlinfw.org/docs/gcode/M290.html).

This firmware is based on the official Creality’s one, with those modifications:

* [M48](http://marlinfw.org/docs/gcode/M048.html) - probe accurary test
* [M290](http://marlinfw.org/docs/gcode/M290.html) - baby step (backported from v1.1.9)
* BABYSTEP_ZPROBE_OFFSET - [M290](http://marlinfw.org/docs/gcode/M290.html) (baby step) applies the new setting to [M851](http://marlinfw.org/docs/gcode/M851.html) (Z offset)
* syntax correction in includes, for other OSes than Windows
* made the platformio profile

Stock firmware comes from https://www.creality3d.cn/download/firmware_c0001.

Screen code is closed source. Don't hope any support from the embed screen.

# Flashing the firmware

The is a plenty of tutorials around the web how to flash the firmware and about all the tools that can help.

On my own, I only use the CLI:

```bash
avrdude -v -p m2560 -c wiring -P /dev/ttyUSB0 -D -U flash:w:firmware.hex:i
```



# Octoprint custom functions

![](octoprint-babystepping.webp)

Here is how to configure and control baby stepping.

* click on « **offset** » to read the current value ([M851](http://marlinfw.org/docs/gcode/M851.html))
* home your XYZ as usual
* put a sheet of paper under the nozzle, and then click « **Z0** » Z0 to mode the Z at 0
* adjust the height with « **🢃 0.05** » and « **🢁 0.05** »
* « **save** » will save the Z offset in EEPROM (else will be lost at next reboot)
* « **reset** » will reset the Z offset to 0

You can also change the offset while printing the first layer.

## Configuration

In /home/pi/.octoprint/config.yaml:

```yaml
controls:
- children:
  - command: G0 Z0
    name: Z0
  - commands:
    - M290 Z-0.05
    - M851
    name: "\U0001F883 0.05"
  - commands:
    - M290 Z0.05
    - M851
    name: "\U0001F881 0.05"
  - command: M500
    name: save
  - commands:
    - M851 Z0
    - M851
    confirm: null
    name: reset
  - command: M851
    confirm: null
    default: ''
    name: offset
    regex: Z Offset.*[:=] ([0-9.-]+)
    template: 'Z offset: {0}'
    type: feedback_command
  layout: horizontal
  name: baby stepping
```

