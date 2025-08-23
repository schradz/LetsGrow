#pragma once
#include <stdint.h>

class MoistureSensorInterface {
public:
    MoistureSensorInterface() = default;
    virtual ~MoistureSensorInterface() = default;
    virtual bool Init() = 0;
    virtual void Deinit() = 0;
    virtual bool SelfTest() = 0;
    // Control Functions
    // Returns the current moisture level as a percentage (0-100)
    virtual uint8_t readMoisture() const = 0;
};