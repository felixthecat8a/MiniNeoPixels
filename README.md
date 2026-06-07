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

#define DATA_PIN 6
#define NUM_PIXELS 20

Adafruit_NeoPixel strip(NUM_PIXELS, DATA_PIN, NEO_GRB + NEO_KHZ800);
MiniNeoPixel mini(&strip);

#define LED_BRIGHTNESS 33

void setup() {
  mini.setup(LED_BRIGHTNESS);
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
