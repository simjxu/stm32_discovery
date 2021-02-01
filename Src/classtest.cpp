#include "classtest.h"
#include "usbd_cdc_if.h"                // Needed for CDC_Transmit_FS

uint8_t ExampleClass::staticuint8Value[]="A Static Class Value\n";
void ExampleClass::printstaticUint8() 
{
    int len = sizeof(this->staticuint8Value);
    CDC_Transmit_FS(this->staticuint8Value,len-1);
    HAL_Delay(5);
}

void ExampleClass::printUint8() 
{
    int len = sizeof(this->uint8Value);
    uint8_t uint8out[] = "printUint8 Output: ";
    uint8_t ret[] = "\n";
    CDC_Transmit_FS(uint8out, 19);
    HAL_Delay(5);                      // Delay needed because need to wait for USB to not be in use. Is there a better way?
    CDC_Transmit_FS(this->uint8Value,len-1);         // Option 1: can directly print
    HAL_Delay(5);
    CDC_Transmit_FS(ret,1);
    HAL_Delay(5);
}

void ExampleClass::printChar()
{
    int len = strlen(this->charValue);
    uint8_t charout[] = "printChar Output: ";
    CDC_Transmit_FS(charout, 18);
    HAL_Delay(5);                      // Delay needed because need to wait for USB to not be in use. Is there a better way?
    CDC_Transmit_FS((uint8_t*)this->charValue,len);        
    HAL_Delay(5);
}