ESP32 based controller for a rotary table on my micro mill.
<br>Written on VSCode with PlatformIO.
<br>GUI code written on EEZ Studio for LVGL with EEZ Flow.
<br>Includes all required non-standard libraries.

Outputs are on the CN1 connector:
<br>>GND
<br>>IO22 = DIR
<br>>IO27 = STEP
<br>>3.3V

I run a A4988 stepper driver module 4 to a Nema17 motor with a supply of only 12V.
The driver is set to microsteps.
This runs plenty fast enough for my application, 80 degrees/sec velocity with acceleration of 100 degrees/sec^2.