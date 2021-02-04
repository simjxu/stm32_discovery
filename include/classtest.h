
#include <stdint.h>
#include <string.h>

class ExampleClass {
private:
    uint8_t uint8Value[8];        // Option 1: keep it as a uint8_t
    char charValue[16];        // Option 2: Use char since it is strings
    // static means that there is only one copy of propValue, 
    // no matter how many times the class is instantiated
    static uint8_t staticuint8Value[];  
    
public:
    // Constructor, to initialize values
    ExampleClass(){               // Define value in constructor
        for(int i=0;i<8;i++){uint8Value[i]=i;};       // Option 1: Need loop
        strcpy(charValue,"charstr\n");              // Option 2: use strcpy instead
    };
    
    void printstaticUint8();

    /**
     * @brief <enter a brief one sentence description>
     *
     * @param[in,out] <name of variable> <description of variable>
     *
     * @details <details of the function>
     */
    void printUint8();

    /**
     * @brief <enter a brief one sentence description>
     *
     * @param[in,out] <name of variable> <description of variable>
     *
     * @details <details of the function>
     */
    void printChar();

};


class UsbPrint {
private:
    static uint8_t ringbuffer[64];

public:
    // transmit part of buffer
    void transmitBuffer();
};