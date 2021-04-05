This code is meant to be run on the B-L475EIOT01A1 STM32 Discovery kit IoT node
Best used with the platform.io extension for VSCode.
See bl475.ioc file, to be opened with STM32CubeMX to see settings

List of To do:
- Create a queue for the interrupt handler: The best way to handle interrupts is to enqueue the interrupt calls into a queue, so that the interrupt handler can go through all of the calls (for example, if I press the button multiple times)
- In the interrupt handler, distinguish between a user pushbutton interrupt and a different interrupt
- Add a debounce to the user push button, right now the program frequently registers multiple pushes.


2/7/21
TODO: in usbd_cdc_if.c, created a new function usb_print(), originally intending to use a busy wait. However, when I do this, the LED doesn't blink anymore, unless I have the serial port open.

1/23/21
v1 created: this version to output "Hello World!" over serial on the OTG port of the discovery board. For this to work, it requires a USB connector plugged into both the STLink usb port as well as the OTG port. Open a serial monitor (you can use "screen" on mac or use platform.io's serial monitor)
