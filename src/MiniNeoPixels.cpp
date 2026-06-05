#include "MiniNeoPixels.h"

MiniNeoPixel::MiniNeoPixel(Adafruit_NeoPixel* s) {
  _strip = s;
}

void MiniNeoPixel::set(uint16_t i, uint8_t r, uint8_t g, uint8_t b) {
  _strip->setPixelColor(i, _strip->Color(r, g, b));
}

void MiniNeoPixel::show() {
  _strip->show();
}

void MiniNeoPixel::all(uint32_t color) {
  _strip->fill(color);
  _strip->show();
}

void MiniNeoPixel::all(uint8_t r, uint8_t g, uint8_t b) {
  _strip->fill(_strip->Color(r, g, b));
  _strip->show();
}

void MiniNeoPixel::one(uint16_t i, uint8_t r, uint8_t g, uint8_t b) {
  _strip->setPixelColor(i, _strip->Color(r, g, b));
  _strip->show();
}

void MiniNeoPixel::brightness(uint8_t b) {
  _strip->setBrightness(b);
  _strip->show();
}

void MiniNeoPixel::off() {
  _strip->clear();
  _strip->show();
}

void MiniNeoPixel::allWhite() {
  _strip->fill(_strip->Color(255, 255, 255));
  _strip->show();
}

void MiniNeoPixel::allRed() {
  _strip->fill(_strip->Color(255, 0, 0));
  _strip->show();
}

void MiniNeoPixel::allYellow() {
  _strip->fill(_strip->Color(255, 255, 0));
  _strip->show();
}

void MiniNeoPixel::allGreen() {
  _strip->fill(_strip->Color(0, 255, 0));
  _strip->show();
}

void MiniNeoPixel::allCyan() {
  _strip->fill(_strip->Color(0, 255, 255));
  _strip->show();
}

void MiniNeoPixel::allBlue() {
  _strip->fill(_strip->Color(0, 0, 255));
  _strip->show();
}

void MiniNeoPixel::allMagenta() {
  _strip->fill(_strip->Color(255, 0, 255));
  _strip->show();
}

void MiniNeoPixel::hue(uint16_t hue) {
  for (uint16_t i = 0; i < _strip->numPixels(); i++) {
    _strip->setPixelColor(i, _strip->ColorHSV(hue));
  }
  _strip->show();
}
