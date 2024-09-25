#pragma once

enum VehicleState
{
    Disconnected = 1,
    Connected = 2,
    Charging = 4
};

class IWallbox
{
public:
    virtual ~IWallbox() {}

    virtual void Init() = 0;

    // Read functions
    virtual VehicleState GetState() = 0;
    virtual float GetChargingCurrentLimit() = 0;
    virtual float GetEnergyMeterValue() = 0;
    virtual float GetFailsafeCurrent() = 0;
    virtual float GetChargingPower() = 0;
    virtual float GetTemperature() = 0;
    virtual bool GetChargingCurrents(float &c1A, float &c2A, float &c3A) = 0;
    virtual bool GetChargingVoltages(float &v1V, float &v2V, float &v3V) = 0;

    // Write functions
    virtual bool SetChargingCurrentLimit(float currentLimitA) = 0;
};