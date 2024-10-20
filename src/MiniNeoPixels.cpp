// MiniNeoPixels.cpp
#include "MiniNeoPixels.h"

MiniNeoPixels::MiniNeoPixels(int pin, int count) {
  pixels = Adafruit_NeoPixel (count, pin, NEO_GRB + NEO_KHZ800);
  _count = count;
}

void MiniNeoPixels::begin() {
  pixels.begin();
}

void MiniNeoPixels::begin(int brightness) {
  pixels.begin();
  pixels.setBrightness(brightness);
}

void MiniNeoPixels::adjustBrightness(int brightness) {
  pixels.setBrightness(brightness);
}

void MiniNeoPixels::colorAll(int red, int green, int blue) {
  for (int i = 0; i < _count; i++) {
    pixels.setPixelColor(i, red, green, blue);
  }
  pixels.show();
}

void MiniNeoPixels::colorOne(int num, int red, int green, int blue) {
  if (num >= 0 && num < _count) {
    pixels.setPixelColor(num, red, green, blue);
    pixels.show();
  }
}
