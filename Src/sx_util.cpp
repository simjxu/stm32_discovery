#include "sx_util.h"

void usbprint_float(float value, int precision)
{
    int integer_pt = value;
    volatile float fraction = (value-integer_pt)*pow(10,precision);
    int fraction_pt = fraction;

    // count number of digits
    volatile int count_int = 0;
    volatile int count_fract = 0;
    int n = integer_pt;
    while (n != 0) {
        n /= 10;  
        ++count_int;
    }
    n = fraction_pt;
    while (n != 0) {
        n /= 10;  
        ++count_fract;
    }

    // Convert integer and fraction parts to char buffers
    char int_buf[8];                        // NOTE: MAX integer length of 8
    char fract_buf[8];                      // NOTE: MAX decimal length of 8

    snprintf(int_buf,10,"%d",integer_pt);
    snprintf(fract_buf,10,"%d",fraction_pt);

    // Add on the decimal point
    strcat(int_buf,".");
    // Add the newline
    strcat(fract_buf,"\n");

    char outStr[16];
    // Put the characters into the array
    for(int i=0;i<count_int+1;i++){
        outStr[i] = int_buf[i];
    }
    for(int i=0;i<=count_fract+1;i++){
        outStr[count_int+1+i] = fract_buf[i];
    }

    usb_print((uint8_t*)outStr,count_int+count_fract+2);
    
}