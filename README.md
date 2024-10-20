[![License: MIT](https://img.shields.io/github/license/felixthecat8a/MiniNeoPixels)](https://opensource.org/licenses/MIT)

# MiniNeoPixels

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
  pixels.colorAll(0, 0, 0); // off
}

void loop() {
  pixels.colorAll(255, 0, 0); // red
  delay(1000);

  pixels.colorAll(0, 255, 0); // green
  delay(1000);

  pixels.colorAll(0, 255, 255); // Cyan
  delay(1000);

  pixels.colorAll(0, 0, 255); //blue
  delay(1000);
}
```
