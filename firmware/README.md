# Injection Controller Firmware

## Build
The project uses code and compilers from the Arduino project 
(files came with the Arduino IDE download). 
It is necessary to install the Arduino IDE and to adapt the paths in
the makefile (default is $HOME/.arduino) in order to build this firmware.

All the files were copied to this repo, only the compilers and upload
utilities are needed from the Arduino IDE. 
It is theoretically possible to use your system's
arm-none-eabi toolchain and Teensy-loader utilities without having to install 
the IDE. This is untested, however.

To initiate the build process, run
``` make ``

This will build and upload the firmware to the Teensy.

## IDs/IP Addresses
The IDs and IPv4 addressed used to differentiate different injection
controllers are hard-coded. Adapt `src/http.cpp` accordingly before
flashing your injection controllers.
