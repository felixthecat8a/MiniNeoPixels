// MiniNeoPixels.h
#ifndef MININEOPIXELS_H
#define MININEOPIXELS_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "MiniNeoPixelColors.h"

class MiniNeoPixels {
private:
  Adafruit_NeoPixel neopixels;
  int _count;

public:
  MiniNeoPixels(int pin,int count):neopixels(count, pin, NEO_GRB + NEO_KHZ800) {
    _count = count; // number of pixels
  }
  MiniNeoPixels(int pin,int count, neoPixelType t):neopixels(count, pin, t) {
    _count = count; // number of pixels
  }
  void begin() {
    neopixels.begin();
  }
  void begin(int brightness) {
    neopixels.begin();
    neopixels.setBrightness(brightness);
  }
  int count() const {
    return _count;
  }
  void brightness(int brightness) {
    neopixels.setBrightness(brightness);
  }
  int color(int red, int green, int blue) const {
    return neopixels.Color(red, green, blue);
  }
  void setPixelColor(int num, int color) {
    neopixels.setPixelColor(num, color);
  }
  void setPixelColor(int num, int red, int green, int blue) {
    neopixels.setPixelColor(num, red, green, blue);
  }
  void setPixelColor(int num, int red, int green, int blue, int white) {
    neopixels.setPixelColor(num, red, green, blue, white);
  }
  void show() {
    neopixels.show();
  }
  void clear() {
    neopixels.clear();
  }
  void all(int red, int green, int blue) {
    for (int i = 0; i < _count; i++) {
      neopixels.setPixelColor(i, color(red, green, blue));
    }
    neopixels.show();
  }
  void all(int color) {
    for (int i = 0; i < _count; i++) {
      neopixels.setPixelColor(i, color);
    }
    neopixels.show();
  }
  void all(const MiniRGB& rgb) {
    for (int i = 0; i < _count; i++) {
      neopixels.setPixelColor(i, color(rgb.r, rgb.g, rgb.b));
    }
    neopixels.show();
  }
  void one(int num, int red, int green, int blue) {
    if (num >= 0 && num < _count) {
      neopixels.setPixelColor(num, color(red, green, blue));
      neopixels.show();
    }
  }
  void one(int num, int color) {
    if (num >= 0 && num < _count) {
      neopixels.setPixelColor(num, color);
      neopixels.show();
    }
  }
  void one(int num, const MiniRGB& rgb) {
    if (num >= 0 && num < _count) {
      neopixels.setPixelColor(num, color(rgb.r, rgb.g, rgb.b));
      neopixels.show();
    }
  }
  void hsv(int deg, int sat, int val) {
    deg = constrain(deg, 0, 360);
    sat = constrain(sat, 0, 255);
    val = constrain(val, 0, 255);
    int hue = map(deg, 0, 360, 0, 65535);
    all(neopixels.ColorHSV(hue, sat, val));
  }
  void hsv(int num, int deg, int sat, int val) {
    deg = constrain(deg, 0, 360);
    sat = constrain(sat, 0, 255);
    val = constrain(val, 0, 255);
    int hue = map(deg, 0, 360, 0, 65535);
    one(num, neopixels.ColorHSV(hue, sat, val));
  }
  void off() {
    all(MiniNeoPixelColors::BLACK);
  }
  void white() {
    all(MiniNeoPixelColors::WHITE);
  }
  void white(int num) {
    one(num,MiniNeoPixelColors::WHITE);
  }
  void pink() {
    all(MiniNeoPixelColors::HOTPINK);
  }
  void pink(int num) {
    one(num,MiniNeoPixelColors::HOTPINK);
  }
  void red() {
    all(MiniNeoPixelColors::RED);
  }
  void red(int num) {
    one(num,MiniNeoPixelColors::RED);
  }
  void orange() {
    all(MiniNeoPixelColors::ORANGE);
  }
  void orange(int num) {
    one(num,MiniNeoPixelColors::ORANGE);
  }
  void yellow() {
    all(MiniNeoPixelColors::YELLOW);
  }
  void yellow(int num) {
    one(num,MiniNeoPixelColors::YELLOW);
  }
  void lime() {
    all(MiniNeoPixelColors::LIME);
  }
  void lime(int num) {
    one(num,MiniNeoPixelColors::LIME);
  }
  void green() {
    all(MiniNeoPixelColors::GREEN);
  }
  void green(int num) {
    one(num,MiniNeoPixelColors::GREEN);
  }
  void teal() {
    all(MiniNeoPixelColors::TEAL);
  }
  void teal(int num) {
    one(num,MiniNeoPixelColors::TEAL);
  }
  void cyan() {
    all(MiniNeoPixelColors::CYAN);
  }
  void cyan(int num) {
    one(num,MiniNeoPixelColors::CYAN);
  }
  void sky() {
    all(MiniNeoPixelColors::SKY);
  }
  void sky(int num) {
    one(num,MiniNeoPixelColors::SKY);
  }
  void blue() {
    all(MiniNeoPixelColors::BLUE);
  }
  void blue(int num) {
    one(num,MiniNeoPixelColors::BLUE);
  }
  void purple() {
    all(128,0,128);
  }
  void purple(int num) {
    one(num,128,0,128);
  }
  void violet() {
    all(MiniNeoPixelColors::VIOLET);
  }
  void violet(int num) {
    one(num,MiniNeoPixelColors::VIOLET);
  }
  void magenta() {
    all(MiniNeoPixelColors::MAGENTA);
  }
  void magenta(int num) {
    one(num,MiniNeoPixelColors::MAGENTA);
  }
};

#endif
