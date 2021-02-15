#include "stm32l475e_iot01_tsensor.h"
#include "sx_util.h"

// TODO: Average the different sensor values

class Sensors {
private:

public:
    // Initialize sensors in constructor
    Sensors()
    {
        // Initialize temperature sensor
        BSP_TSENSOR_Init();
    }

    /**
     * @brief <enter a brief one sentence description>
     *
     * @param[in,out] <name of variable> <description of variable>
     *
     * @details <details of the function>
     */
    void printTemp(int precision);
};
