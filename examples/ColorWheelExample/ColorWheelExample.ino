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
  pixels.off();
}

void loop() {
  for (int hue = 1; hue <= 360; hue++) {
    pixels.hsv(hue);
    delay(50);
  }
}
