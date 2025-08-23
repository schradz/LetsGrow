#pragma once
#include <stdint.h>

class LightInterface {
public:
    LightInterface() = default;
    virtual ~LightInterface() = default;
    virtual bool Init() = 0;
    virtual void Deinit() = 0;
    virtual bool SelfTest() = 0;
    //Control Functions
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    // Set brightness percentage(0 - 100)
    virtual void SetBrightness(uint8_t level) = 0;
    // Get current brightness (0 - 100)
    virtual uint8_t GetBrightness() const = 0;
    // Check if the light is currently on
    virtual bool IsOn() const = 0;
};