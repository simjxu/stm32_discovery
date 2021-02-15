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

void Sensors::printAccel() 
{
    uint8_t ret[] = "\n";
    int16_t accel_readings[3];
    BSP_ACCELERO_AccGetXYZ(accel_readings);

    uint8_t uint8out1[] = "Accel X: ";
    usb_print(uint8out1, sizeof(uint8out1)-1);
    usbprint_float((float)accel_readings[0],0);

    uint8_t uint8out2[] = ", Y: ";
    usb_print(uint8out2, sizeof(uint8out2)-1);
    usbprint_float((float)accel_readings[1],0);

    uint8_t uint8out3[] = ", Z: ";
    usb_print(uint8out3, sizeof(uint8out3)-1);
    usbprint_float((float)accel_readings[2],0);

    usb_print(ret,1);
}

void Sensors::printGyro()
{
    uint8_t ret[] = "\n";
    float gyro_readings[3];
    BSP_GYRO_GetXYZ(gyro_readings);

    uint8_t uint8out1[] = "Gyro X: ";
    usb_print(uint8out1, sizeof(uint8out1)-1);
    usbprint_float((float)gyro_readings[0],0);

    uint8_t uint8out2[] = ", Y: ";
    usb_print(uint8out2, sizeof(uint8out2)-1);
    usbprint_float((float)gyro_readings[1],0);

    uint8_t uint8out3[] = ", Z: ";
    usb_print(uint8out3, sizeof(uint8out3)-1);
    usbprint_float((float)gyro_readings[2],0);

    usb_print(ret,1);
}

void Sensors::printMagneto()
{
    uint8_t ret[] = "\n";
    int16_t magneto_readings[3];
    BSP_MAGNETO_GetXYZ(magneto_readings);

    uint8_t uint8out1[] = "Magneto X: ";
    usb_print(uint8out1, sizeof(uint8out1)-1);
    usbprint_float((float)magneto_readings[0],0);

    uint8_t uint8out2[] = ", Y: ";
    usb_print(uint8out2, sizeof(uint8out2)-1);
    usbprint_float((float)magneto_readings[1],0);

    uint8_t uint8out3[] = ", Z: ";
    usb_print(uint8out3, sizeof(uint8out3)-1);
    usbprint_float((float)magneto_readings[2],0);

    usb_print(ret,1);
}