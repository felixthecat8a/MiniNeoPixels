#include "MiniNeoPixels.h"

MiniNeoPixel::MiniNeoPixel(Adafruit_NeoPixel* s) {
  strip = s;
}

void MiniNeoPixel::set(uint16_t i, uint8_t r, uint8_t g, uint8_t b) {
  strip->setPixelColor(i, strip->Color(r, g, b));
}

void MiniNeoPixel::show() {
  strip->show();
}

void MiniNeoPixel::all(uint32_t color) {
  strip->fill(color);
  strip->show();
}

void MiniNeoPixel::all(uint8_t r, uint8_t g, uint8_t b) {
  strip->fill(strip->Color(r, g, b));
  strip->show();
}

void MiniNeoPixel::one(uint16_t i, uint8_t r, uint8_t g, uint8_t b) {
  strip->setPixelColor(i, strip->Color(r, g, b));
  strip->show();
}

void MiniNeoPixel::off() {
  strip->clear();
  strip->show();
}

void MiniNeoPixel::allRed() {
  strip->fill(strip->Color(255, 0, 0));
  strip->show();
}

void MiniNeoPixel::allYellow() {
  strip->fill(strip->Color(255, 255, 0));
  strip->show();
}

void MiniNeoPixel::allGreen() {
  strip->fill(strip->Color(0, 255, 0));
  strip->show();
}

void MiniNeoPixel::allCyan() {
  strip->fill(strip->Color(0, 255, 255));
  strip->show();
}

void MiniNeoPixel::allBlue() {
  strip->fill(strip->Color(0, 0, 255));
  strip->show();
}

void MiniNeoPixel::allMagenta() {
  strip->fill(strip->Color(255, 0, 255));
  strip->show();
}
