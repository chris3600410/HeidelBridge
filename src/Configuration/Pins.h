#pragma once

namespace Pins
{
    // Pin connections:
    // ESP32 GPIO18 -> MAXRS485 RO (Receiver Output)
    // ESP32 GPIO19 -> MAXRS485 DI (Driver Input)
    // ESP32 GPIO21 -> MAXRS485 DE+RE
    // Pin connections M5 RS485:
    // ESP32 GPIO22 -> RX / ATOMIC RS485 Base (Receiver Output)
    // ESP32 GPIO19 -> TX / ATOMIC RS485 Base (Driver Input)
    // ESP32 GPIO21 -> MAXRS485 DE+RE


    constexpr uint8_t PinRX = GPIO_NUM_22;
    constexpr uint8_t PinTX = GPIO_NUM_19;
    constexpr uint8_t PinRTS = GPIO_NUM_21;
};
