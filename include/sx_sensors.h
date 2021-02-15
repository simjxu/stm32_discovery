#include "stm32l475e_iot01_tsensor.h"
#include "stm32l475e_iot01_hsensor.h"
#include "stm32l475e_iot01_psensor.h"
#include "stm32l475e_iot01_accelero.h"
#include "stm32l475e_iot01_gyro.h"
#include "stm32l475e_iot01_magneto.h"
#include "sx_util.h"

// TODO: Average the different sensor values

class Sensors {
private:

public:
    // Initialize sensors in constructor
    Sensors()
    {
        // Initialize all sensors
        BSP_TSENSOR_Init();
        BSP_HSENSOR_Init();
        BSP_PSENSOR_Init();
        BSP_ACCELERO_Init();
        BSP_GYRO_Init();
        BSP_MAGNETO_Init();
    }

    /**
     * @brief Prints the temperature sensor reading in Celsius
     *
     * @param precision: Number of decimal places to the right of decimal to print
     * 
     */
    void printTemp(int precision);

    /**
     * @brief Prints the humidity sensor reading in % relative humidity
     *
     * @param precision: Number of decimal places to the right of decimal to print
     * 
     */
    void printHumid(int precision);

    /**
     * @brief Prints the pressure sensor reading (lps22hb --> check units)
     *
     * @param precision: Number of decimal places to the right of decimal to print
     * 
     */
    void printPressure(int precision);

    /**
     * @brief Prints the accelerometer sensor reading, looks like it is in units of milli-g's
     * 
     */
    void printAccel();

    /**
     * @brief Prints the gyro sensor reading
     *
     * @param precision: Number of decimal places to the right of decimal to print
     * 
     */
    void printGyro();

    /**
     * @brief Prints the magnetometer reading
     *
     * @param precision: Number of decimal places to the right of decimal to print
     * 
     */
    void printMagneto();
};
