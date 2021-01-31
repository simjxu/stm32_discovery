
#include <stdint.h>
#include <string.h>

class FatherProperty {
private:
    uint8_t propValue[8];        // Option 1: keep it as a uint8_t
    // char propValue[8];        // Option 2: Use char since it is strings
    // static means that there is only one copy of propValue, no matter how many times the class is instantiated

public:
    FatherProperty(){               // Define value in constructor
        for(int i=0;i<8;i++){propValue[i]=i;};       // Option 1: Need loop
        // strcpy(propValue,"asdf\n");              // Option 2: use strcpy instead
    };
    void getProperty();
};