#include "classtest.h"
#include "usbd_cdc_if.h"

uint8_t FatherProperty::propValue[]="asdf\n";
void FatherProperty::getProperty() {CDC_Transmit_FS(this->propValue,5);}