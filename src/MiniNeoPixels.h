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

    void setup();

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

    void scroll(uint16_t offset) {
      _strip->setPixelColor(0, _strip->getPixelColor(_strip->numPixels() - 1));
      for (uint16_t i = _strip->numPixels() - 1; i > 0; i--) {
        _strip->setPixelColor(i, _strip->getPixelColor(i - 1));
      }
      _strip->show();
    }

    void scroll(uint16_t offset, uint32_t color) {
      _strip->setPixelColor(0, color);
      for (uint16_t i = _strip->numPixels() - 1; i > 0; i--) {
        _strip->setPixelColor(i, _strip->getPixelColor(i - 1));
      }
      _strip->show();
    }
};

#endif // MININEOPIXELS_H
