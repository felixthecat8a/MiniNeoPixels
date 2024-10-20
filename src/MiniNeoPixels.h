// MiniNeoPixels.h
#ifndef MININEOPIXELS_H
#define MININEOPIXELS_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class MiniNeoPixels {
private:
  Adafruit_NeoPixel neopixels;
  int _count;

public:
  MiniNeoPixels(int pin,int count):neopixels(count, pin, NEO_GRB + NEO_KHZ800) {
    _count = count; // number of pixels
  }
  void begin() {
    neopixels.begin();
  }
  void begin(int brightness) {
    neopixels.begin();
    neopixels.setBrightness(brightness);
  }
  void adjustBrightness(int brightness) {
    neopixels.setBrightness(brightness);
  }
  void colorAll(int red, int green, int blue) {
    for (int i = 0; i < _count; i++) {
      neopixels.setPixelColor(i, red, green, blue);
    }
    neopixels.show();
  }
  void colorOne(int num, int red, int green, int blue) {
    if (num >= 0 && num < _count) {
      neopixels.setPixelColor(num, red, green, blue);
      neopixels.show();
    }
  }
};

#endif
