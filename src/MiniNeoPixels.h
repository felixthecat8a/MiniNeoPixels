#ifndef MININEOPIXELS_H
#define MININEOPIXELS_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#include "MiniColor.h"

class MiniNeoPixel {
  private:
    Adafruit_NeoPixel* _strip;

  public:
    MiniNeoPixel(Adafruit_NeoPixel* strip);

    void set(uint16_t i, uint8_t r, uint8_t g, uint8_t b);
    void set(uint16_t i, uint32_t color);
    void set(uint8_t r, uint8_t g, uint8_t b);
    void set(uint32_t color);
    void show();

    void all(uint8_t r, uint8_t g, uint8_t b);
    void all(uint32_t color);
    void one(uint16_t i, uint8_t r, uint8_t g, uint8_t b);
    void one(uint16_t i, uint32_t color);

    void off();

    void brightness(uint8_t b);

    void hue(uint16_t hue);
};

#endif // MININEOPIXELS_H
