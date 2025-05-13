// MiniNeoPixels.cpp
#include "MiniNeoPixels.h"

MiniNeoPixels::MiniNeoPixels(int pin, int count)
  : neopixels(count, pin, NEO_GRB + NEO_KHZ800), _count(count) {}

MiniNeoPixels::MiniNeoPixels(int pin, int count, neoPixelType t)
  : neopixels(count, pin, t), _count(count) {}

void MiniNeoPixels::begin() {
  neopixels.begin();
  neopixels.show();
}

void MiniNeoPixels::begin(int brightness) {
  neopixels.begin();
  neopixels.show();
  neopixels.setBrightness(brightness);
}

int MiniNeoPixels::count() const {
  return _count;
}

void MiniNeoPixels::brightness(int brightness) {
  brightness = constrain(brightness, 0, 255);
  neopixels.setBrightness(brightness);
}

uint32_t  MiniNeoPixels::color(int red, int green, int blue) const {
  return neopixels.Color(red, green, blue);
}

uint32_t  MiniNeoPixels::color(int red, int green, int blue, int white) const {
  return neopixels.Color(red, green, blue, white);
}

void MiniNeoPixels::setPixelColor(int num, int color) {
  neopixels.setPixelColor(num, color);
}

void MiniNeoPixels::setPixelColor(int num, int red, int green, int blue) {
  neopixels.setPixelColor(num, red, green, blue);
}

void MiniNeoPixels::setPixelColor(int num, int red, int green, int blue, int white) {
  neopixels.setPixelColor(num, red, green, blue, white);
}

void MiniNeoPixels::show() {
  neopixels.show();
}

void MiniNeoPixels::clear() {
  neopixels.clear();
}

void MiniNeoPixels::all(int red, int green, int blue) {
  for (int i = 0; i < _count; i++) {
    setPixelColor(i, color(red, green, blue));
  }
  show();
}

void MiniNeoPixels::all(int color) {
  for (int i = 0; i < _count; i++) {
    setPixelColor(i, color);
  }
  show();
}

void MiniNeoPixels::all(const MiniRGB& rgb) {
  for (int i = 0; i < _count; i++) {
    setPixelColor(i, color(rgb.r, rgb.g, rgb.b));
  }
  show();
}

void MiniNeoPixels::one(int num, int red, int green, int blue) {
  if (num >= 0 && num < _count) {
    setPixelColor(num, color(red, green, blue));
    show();
  }
}

void MiniNeoPixels::one(int num, int color) {
  if (num >= 0 && num < _count) {
    setPixelColor(num, color);
    show();
  }
}

void MiniNeoPixels::one(int num, const MiniRGB& rgb) {
  if (num >= 0 && num < _count) {
    setPixelColor(num, color(rgb.r, rgb.g, rgb.b));
    show();
  }
}

void MiniNeoPixels::hsv(int deg, int sat, int val) {
  deg = constrain(deg, 0, 359);
  sat = constrain(sat, 0, 255);
  val = constrain(val, 0, 255);
  long hue = (long)deg * 65535 / 360;
  all(neopixels.ColorHSV(hue, sat, val));
}

void MiniNeoPixels::hsv(int num, int deg, int sat, int val) {
  deg = constrain(deg, 0, 359);
  sat = constrain(sat, 0, 255);
  val = constrain(val, 0, 255);
  long hue = (long)deg * 65535 / 360;
  one(num, neopixels.ColorHSV(hue, sat, val));
}

void MiniNeoPixels::off() {
  all(MiniNeoPixelColors::BLACK);
}

void MiniNeoPixels::white() {
  all(MiniNeoPixelColors::WHITE);
}

void MiniNeoPixels::white(int num) {
  one(num, MiniNeoPixelColors::WHITE);
}

void MiniNeoPixels::pink() {
  all(MiniNeoPixelColors::HOTPINK);
}

void MiniNeoPixels::pink(int num) {
  one(num, MiniNeoPixelColors::HOTPINK);
}

void MiniNeoPixels::red() {
  all(MiniNeoPixelColors::RED);
}

void MiniNeoPixels::red(int num) {
  one(num, MiniNeoPixelColors::RED);
}

void MiniNeoPixels::orange() {
  all(MiniNeoPixelColors::ORANGE);
}

void MiniNeoPixels::orange(int num) {
  one(num, MiniNeoPixelColors::ORANGE);
}

void MiniNeoPixels::yellow() {
  all(MiniNeoPixelColors::YELLOW);
}

void MiniNeoPixels::yellow(int num) {
  one(num, MiniNeoPixelColors::YELLOW);
}

void MiniNeoPixels::lime() {
  all(MiniNeoPixelColors::LIME);
}

void MiniNeoPixels::lime(int num) {
  one(num, MiniNeoPixelColors::LIME);
}

void MiniNeoPixels::green() {
  all(MiniNeoPixelColors::GREEN);
}

void MiniNeoPixels::green(int num) {
  one(num, MiniNeoPixelColors::GREEN);
}

void MiniNeoPixels::teal() {
  all(MiniNeoPixelColors::TEAL);
}

void MiniNeoPixels::teal(int num) {
  one(num, MiniNeoPixelColors::TEAL);
}

void MiniNeoPixels::cyan() {
  all(MiniNeoPixelColors::CYAN);
}

void MiniNeoPixels::cyan(int num) {
  one(num, MiniNeoPixelColors::CYAN);
}

void MiniNeoPixels::sky() {
  all(MiniNeoPixelColors::SKY);
}

void MiniNeoPixels::sky(int num) {
  one(num, MiniNeoPixelColors::SKY);
}

void MiniNeoPixels::blue() {
  all(MiniNeoPixelColors::BLUE);
}

void MiniNeoPixels::blue(int num) {
  one(num, MiniNeoPixelColors::BLUE);
}

void MiniNeoPixels::purple() {
  all(128, 0, 128);
}

void MiniNeoPixels::purple(int num) {
  one(num, 128, 0, 128);
}

void MiniNeoPixels::violet() {
  all(MiniNeoPixelColors::VIOLET);
}

void MiniNeoPixels::violet(int num) {
  one(num, MiniNeoPixelColors::VIOLET);
}

void MiniNeoPixels::magenta() {
  all(MiniNeoPixelColors::MAGENTA);
}

void MiniNeoPixels::magenta(int num) {
  one(num, MiniNeoPixelColors::MAGENTA);
}
