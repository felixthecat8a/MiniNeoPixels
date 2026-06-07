#include "MiniNeoPixels.h"

MiniNeoPixel::MiniNeoPixel(Adafruit_NeoPixel* strip) {
  _strip = strip;
}

void MiniNeoPixel::setup() {
  _strip->begin();
  _strip->show();
}

void MiniNeoPixel::set(uint16_t i, uint8_t r, uint8_t g, uint8_t b) {
  _strip->setPixelColor(i, _strip->Color(r, g, b));
}

void MiniNeoPixel::set(uint16_t i, uint32_t color) {
  _strip->setPixelColor(i, color);
}

void MiniNeoPixel::set(uint8_t r, uint8_t g, uint8_t b) {
  _strip->fill(_strip->Color(r, g, b));
}

void MiniNeoPixel::set(uint32_t color) {
  _strip->fill(color);
}

void MiniNeoPixel::show() {
  _strip->show();
}

void MiniNeoPixel::all(uint8_t r, uint8_t g, uint8_t b) {
  _strip->fill(_strip->Color(r, g, b));
  _strip->show();
}

void MiniNeoPixel::all(uint32_t color) {
  _strip->fill(color);
  _strip->show();
}

void MiniNeoPixel::one(uint16_t i, uint8_t r, uint8_t g, uint8_t b) {
  _strip->setPixelColor(i, _strip->Color(r, g, b));
  _strip->show();
}

void MiniNeoPixel::one(uint16_t i, uint32_t color) {
  _strip->setPixelColor(i, color);
  _strip->show();
}

void MiniNeoPixel::off() {
  _strip->clear();
  _strip->show();
}

void MiniNeoPixel::brightness(uint8_t b) {
  _strip->setBrightness(b);
  _strip->show();
}

void MiniNeoPixel::hue(uint16_t hue) {
  for (uint16_t i = 0; i < _strip->numPixels(); i++) {
    _strip->setPixelColor(i, _strip->ColorHSV(hue));
  }
  _strip->show();
}
