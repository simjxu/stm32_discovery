// Utilities for various function calls

// TODO: Need to add a preprocessor macro for #ifndef, etc.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "usbd_cdc_if.h"        // need to add this to access CDC_Transmit_FS or usb_print
#include <queue>

/**
  * @brief  Convert a float to a character array. Note, no error handling. Need to ensure that outStr
  * is of sufficient size to hold values
  * @param  value: float value to convert to character array
  * @param  precision: number of digits to the right of the decimal point
  * @param  outStr: char buffer to update with the float string
  * @retval character array
  */
void usbprint_float(float value,int precision);