#include "classtest.h"
#include "usbd_cdc_if.h"                // Needed for CDC_Transmit_FS

// uint8_t FatherProperty::propValue[]="asdf\n";
void FatherProperty::getProperty() 
{
    int len = sizeof(this->propValue);
    CDC_Transmit_FS(this->propValue,len-1);         // Option 1: can directly print
    // CDC_Transmit_FS((uint8_t*)this->propValue,len-1);         // Option 2: require a type conversion

}