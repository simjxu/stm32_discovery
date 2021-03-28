#include "sx_usbclasstest.h"
#include "usbd_cdc_if.h"                // Needed for CDC_Transmit_FS

uint8_t ExampleClass::staticuint8Value[]="A Static Class Value\r\n";
void ExampleClass::printstaticUint8() 
{
    int len = sizeof(this->staticuint8Value);
    usb_print(this->staticuint8Value,len-1);
}

void ExampleClass::printUint8() 
{
    int len = sizeof(this->uint8Value);
    uint8_t uint8out[] = "printUint8 Output: ";
    uint8_t ret[] = "\r\n";
    usb_print(uint8out, 19);
    usb_print(this->uint8Value,len-1);         // Option 1: can directly print
    usb_print(ret,sizeof(ret));
}

void ExampleClass::printChar()
{
    int len = strlen(this->charValue);
    uint8_t charout[] = "printChar Output: ";     

    usb_print(charout,18);
    usb_print((uint8_t*)this->charValue,len);
}