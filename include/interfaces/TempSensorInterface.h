#pragma once

class TempSensorInterface {
public:
    TempSensorInterface() = default;
    virtual ~TempSensorInterface() = default;
    virtual bool Init() = 0;
    virtual void Deinit() = 0;
    virtual bool SelfTest() = 0;
    //Control Functions
    // Returns the current temperature in Celsius.
    virtual float ReadTemperature() const = 0;
};