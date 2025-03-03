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
  void adjustBrightness(int brightness) {
    neopixels.setBrightness(brightness);
  }
  void colorAll(int red, int green, int blue) {
    for (int i = 0; i < _count; i++) {
      neopixels.setPixelColor(i, red, green, blue);
    }
    neopixels.show();
  }
  void colorAll(int color) {
    for (int i = 0; i < _count; i++) {
      neopixels.setPixelColor(i, color);
    }
    neopixels.show();
  }
  void colorOne(int num, int red, int green, int blue) {
    if (num >= 0 && num < _count) {
      neopixels.setPixelColor(num, red, green, blue);
      neopixels.show();
    }
  }
  void colorOne(int num, int color) {
    if (num >= 0 && num < _count) {
      neopixels.setPixelColor(num, color);
      neopixels.show();
    }
  }
  int color(int red, int green, int blue) {
    return neopixels.Color(red, green, blue);
  }
  int colorHSV(int hue, int sat, int val) {
    // hue can be a value from 0 to 65535
    return neopixels.ColorHSV(hue, sat, val);
  }
  int colorHSV(int hue) {
    return neopixels.ColorHSV(hue);
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
    colorAll(red, green, blue);
  }
  void one(int num, int red, int green, int blue) {
    colorOne(num, red, green, blue);
  }
  void brightness(int brightness) {
    adjustBrightness(brightness);
  }
  void off() {
    colorAll(0, 0, 0);
  }
  void hsv(int deg, int sat = 255, int val = 255) {
    deg = constrain(deg, 0, 360);
    int hue = map(deg, 0, 360, 0, 65535);
    colorAll(colorHSV(hue, sat, val));
  }
  void pink() {
    colorAll(255,0,127);
  }
  void pink(int num) {
    colorOne(num,255,0,127);
  }
  void red() {
    colorAll(255,0,0);
  }
  void red(int num) {
    colorOne(num,255,0,0);
  }
  void orange() {
    colorAll(255,127,0);
  }
  void orange(int num) {
    colorOne(num,255,127,0);
  }
  void yellow() {
    colorAll(255,255,0);
  }
  void yellow(int num) {
    colorOne(num,255,255,0);
  }
  void lime() {
    colorAll(127,255,0);
  }
  void lime(int num) {
    colorOne(num,127,255,0);
  }
  void green() {
    colorAll(0,255,0);
  }
  void green(int num) {
    colorOne(num,0,255,0);
  }
  void teal() {
    colorAll(0,255,127);
  }
  void teal(int num) {
    colorOne(num,0,255,127);
  }
  void cyan() {
    colorAll(0,255,255);
  }
  void cyan(int num) {
    colorOne(num,0,255,255);
  }
  void sky() {
    colorAll(0,127,255);
  }
  void sky(int num) {
    colorOne(num,0,127,255);
  }
  void blue() {
    colorAll(0,0,255);
  }
  void blue(int num) {
    colorOne(num,0,0,255);
  }
  void purple() {
    colorAll(127,0,128);
  }
  void purple(int num) {
    colorOne(num,127,0,128);
  }
  void violet() {
    colorAll(127,0,255);
  }
  void violet(int num) {
    colorOne(num,127,0,255);
  }
  void magenta() {
    colorAll(255,0,255);
  }
  void magenta(int num) {
    colorOne(num,255,0,255);
  }
};

#endif
