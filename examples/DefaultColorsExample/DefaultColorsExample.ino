/**
 * DefaultColorsExample.ino
 *
 * This sketch will flash through the default colors on the strip.
*/

#include <MiniNeoPixels.h>
#define PIXEL_PIN 3 // input pin Neopixel is attached to
#define PIXEL_COUNT 10 // number of neopixels in strip
MiniNeoPixels pixels(PIXEL_PIN, PIXEL_COUNT);

#define PIXEL_BRIGHTNESS 50 // a brightness value from 0 - 255

void setup() {
  pixels.begin(PIXEL_BRIGHTNESS);
  pixels.clear();
}

void loop() {
    pixels.red();
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
