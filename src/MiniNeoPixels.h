#ifndef MININEOPIXELS_H
#define MININEOPIXELS_H

// Include necessary libraries
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class MiniNeoPixel {
  private:
    Adafruit_NeoPixel* strip;

  public:
    MiniNeoPixel(Adafruit_NeoPixel* s);

    void set(uint16_t i, uint8_t r, uint8_t g, uint8_t b);
    void show();
    void all(uint32_t color);
    void all(uint8_t r, uint8_t g, uint8_t b);
    void one(uint16_t i, uint8_t r, uint8_t g, uint8_t b);

    void off();

    void allRed();
    void allYellow();
    void allGreen();
    void allCyan();
    void allBlue();
    void allMagenta();
};

#endif // MININEOPIXELS_H
