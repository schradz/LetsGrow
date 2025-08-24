#pragma once
#include <stdint.h>

class HumiditySensorInterface {
public:
    HumiditySensorInterface() = default;
    virtual ~HumiditySensorInterface() = default;
    virtual bool Init() = 0;
    virtual void Deinit() = 0;
    virtual bool SelfTest() = 0;
    // Returns the current humidity as a percentage (0 - 100)
    virtual uint8_t ReadHumidity() = 0;
};
