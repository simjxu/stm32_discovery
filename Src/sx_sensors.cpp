#include "sx_sensors.h"

void Sensors::printTemp(int precision) 
{
    uint8_t uint8out[] = "Temperature Reading: ";
    usb_print(uint8out, sizeof(uint8out)-1);
    float temp_reading = BSP_TSENSOR_ReadTemp();
    usbprint_float(temp_reading,precision);
}