// MiniNeoPixels.h
#ifndef MININEOPIXELS_H
#define MININEOPIXELS_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class MiniNeoPixels {
private:
  int _count; // Number of LEDs

public:
  Adafruit_NeoPixel pixels;
  MiniNeoPixels(int pin,int count);
  void begin();
  void begin(int brightness);
  void colorAll(int red, int green, int blue);
  void colorOne(int num, int red, int green, int blue);
};

#endif
