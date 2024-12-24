# MiniNeoPixels

![GitHub Release](https://img.shields.io/github/v/release/felixthecat8a/MiniNeoPixels)
[![License: MIT](https://img.shields.io/github/license/felixthecat8a/MiniNeoPixels)](https://opensource.org/licenses/MIT)
![GitHub top language](https://img.shields.io/github/languages/top/felixthecat8a/MiniNeoPixels)
![GitHub repo size](https://img.shields.io/github/repo-size/felixthecat8a/MiniNeoPixels)
![GitHub repo file or directory count](https://img.shields.io/github/directory-file-count/felixthecat8a/MiniNeoPixels)

![GitHub Release Date](https://img.shields.io/github/release-date/felixthecat8a/MiniNeoPixels)
![GitHub Created At](https://img.shields.io/github/created-at/felixthecat8a/MiniNeoPixels)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/felixthecat8a/MiniNeoPixels)
![GitHub Downloads (all assets, all releases)](https://img.shields.io/github/downloads/felixthecat8a/MiniNeoPixels/total)

A lightweight library to control NeoPixels using an easy-to-use interface.
This library wraps around `Adafruit_NeoPixel`, providing simple methods to control individual and groups of pixels with ease.

## Installation

### Install via ZIP file
1. Download the library *.zip* file from the [latest release](https://github.com/felixthecat8a/MiniNeoPixels/releases/latest/).
2. In the Arduino IDE, go to `Sketch` > `Include Library` > `Add .ZIP Library...`.
3. Select the downloaded *.zip* file.

## Usage

```cpp
#include "MiniNeoPixels.h"

#define PIXEL_PIN 3 // input pin Neopixel is attached to
#define PIXEL_COUNT 10 // number of neopixels in strip
MiniNeoPixels pixels(PIXEL_PIN, PIXEL_COUNT);

#define PIXEL_BRIGHTNESS 50 // a brightness value from 0 - 255

void setup() {
  pixels.begin(PIXEL_BRIGHTNESS);
  pixels.clear(); // off
}

void loop() {
  pixels.red();
  delay(1000);

  pixels.all(255, 100, 0); // orange
  delay(1000);

  pixels.yellow();
  delay(1000);

  pixels.green();
  delay(1000);

  pixels.cyan();
  delay(1000);

  pixels.blue();
  delay(1000);

  pixels.magenta();
  delay(1000);
}
```
