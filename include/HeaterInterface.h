#pragma once
#include <stdint.h>

class HeaterInterface {
public:
    HeaterInterface() = default;
    virtual ~HeaterInterface() = default;
    virtual bool Init() = 0;
    virtual bool Deinit() = 0;
    virtual bool SelfTest() = 0;

    //Control functions
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual void SetPowerLevelPercentage(uint8_t level) = 0;
    virtual uint8_t GetPowerLevelPercentage() const = 0;
    virtual bool IsOn() const = 0;
};