#include "sx_sensors.h"

void Sensors::printTemp(int precision) 
{
    uint8_t uint8out[] = "Temperature Reading: ";
    usb_print(uint8out, sizeof(uint8out)-1);
    float temp_reading = BSP_TSENSOR_ReadTemp();
    usbprint_float(temp_reading,precision);
}

void Sensors::printHumid(int precision) 
{
    uint8_t uint8out[] = "Humidity Reading: ";
    usb_print(uint8out, sizeof(uint8out)-1);
    float humid_reading = BSP_HSENSOR_ReadHumidity();
    usbprint_float(humid_reading,precision);
}

void Sensors::printPressure(int precision) 
{
    uint8_t uint8out[] = "Pressure Reading: ";
    usb_print(uint8out, sizeof(uint8out)-1);
    float pressure_reading = BSP_PSENSOR_ReadPressure();
    usbprint_float(pressure_reading,precision);
}