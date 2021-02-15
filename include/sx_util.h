// Utilities for various function calls

#include <stdio.h>
#include <string.h>
#include <math.h>

/**
  * @brief  Convert a float to a character array
  * @param  value: float value to convert to character array
  * @param  precision: number of digits to the right of the decimal point
  * @param  outStr: char buffer to update with the float string
  * @retval character array
  */
void float_to_array(float value,int precision, char* outStr);