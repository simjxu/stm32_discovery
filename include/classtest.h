
#include <stdint.h>

class FatherProperty {
private:
    static uint8_t propValue[];        // I need to declare this as static, why?

public:
    void getProperty();
};