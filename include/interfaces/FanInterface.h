#pragma once
#include <stdint.h>

class FanInterface {
public:
    FanInterface() = default;
    virtual ~FanInterface() = default;
    virtual bool Init() = 0;
    virtual bool Deinit() = 0;
    virtual bool SelfTest() = 0;
    // Control functions
    virtual void SetSpeed(uint8_t percent) = 0;
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual uint8_t  GetSpeed() const = 0;
    virtual bool IsOn() const = 0;
    virtual int  GetRPM() const = 0;
};
