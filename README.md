### This utility is part of the Sunxi-tools project
https://github.com/linux-sunxi/sunxi-tools


### sunxi-fel
script interface for USB communication with the FEL handler built in to
the CPU. You usually activate [FEL mode] by pushing the _uboot_ / _recovery_
button at poweron, or by having your device "fail over" to FEL when no other
boot option is available. See http://linux-sunxi.org/FEL/USBBoot for a detailed
usage guide.

When called with no arguments, _sunxi-fel_ will display a short usage summary.

_Note:_ Unless you select a specific device using the `--dev` or `--sid`
options, the tool will access the first Allwinner device (in FEL mode) that it
finds. You can print a list of all FEL devices currently connected/detected
with `./sunxi-fel --list --verbose`.
