# MiniNeoPixels
A lightweight library that wraps around Adafruit_NeoPixel to provide simple methods to control WS2812 LEDs.

## Installation

### Install via ZIP file

1. Download the library .zip file from this repository: '<> Code' -> 'Download ZIP'
2. In the Arduino IDE, go to Sketch > Include Library > Add .ZIP Library....
3. Select the downloaded .zip file.

## Getting Started

```cpp
#include <Adafruit_NeoPixel.h>
#include <MiniNeoPixels.h>
#include <MiniColor.h>

#define DATAPIN 6
#define NUMPIXELS 20

Adafruit_NeoPixel strip(NUMPIXELS, DATAPIN, NEO_GRB + NEO_KHZ800);
MiniNeoPixel mini(&strip);

void setup() {
  strip.begin();
  mini.brightness(33);
}

void loop() {
  mini.all(MiniColor::RED);
  delay(500);
  mini.all(MiniColor::ORANGE);
  delay(500);
  mini.all(MiniColor::YELLOW);
  delay(500);
  mini.all(MiniColor::GREEN);
  delay(500);
  mini.all(MiniColor::CYAN);
  delay(500);
  mini.all(MiniColor::BLUE);
  delay(500);
  mini.all(MiniColor::VIOLET);
  delay(500);
  mini.all(MiniColor::ROSE);
  delay(500);
}
```
