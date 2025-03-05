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
  void brightness(int brightness) {
    neopixels.setBrightness(brightness);
  }
  int color(int red, int green, int blue) {
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
    all(0, 0, 0);
  }
  void white() {
    all(255,255,255);
  }
  void white(int num) {
    one(num,255,255,255);
  }
  void pink() {
    all(255,0,127);
  }
  void pink(int num) {
    one(num,255,0,127);
  }
  void red() {
    all(255,0,0);
  }
  void red(int num) {
    one(num,255,0,0);
  }
  void orange() {
    all(255,127,0);
  }
  void orange(int num) {
    one(num,255,127,0);
  }
  void yellow() {
    all(255,255,0);
  }
  void yellow(int num) {
    one(num,255,255,0);
  }
  void lime() {
    all(127,255,0);
  }
  void lime(int num) {
    one(num,127,255,0);
  }
  void green() {
    all(0,255,0);
  }
  void green(int num) {
    one(num,0,255,0);
  }
  void teal() {
    all(0,255,127);
  }
  void teal(int num) {
    one(num,0,255,127);
  }
  void cyan() {
    all(0,255,255);
  }
  void cyan(int num) {
    one(num,0,255,255);
  }
  void sky() {
    all(0,127,255);
  }
  void sky(int num) {
    one(num,0,127,255);
  }
  void blue() {
    all(0,0,255);
  }
  void blue(int num) {
    one(num,0,0,255);
  }
  void purple() {
    all(127,0,128);
  }
  void purple(int num) {
    one(num,127,0,128);
  }
  void violet() {
    all(127,0,255);
  }
  void violet(int num) {
    one(num,127,0,255);
  }
  void magenta() {
    all(255,0,255);
  }
  void magenta(int num) {
    one(num,255,0,255);
  }
};

#endif
