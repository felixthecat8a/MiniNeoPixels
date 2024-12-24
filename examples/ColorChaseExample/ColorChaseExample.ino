/**
 * ColorChaseExample.ino
 * 
 * This sketch will sweep different colors across the strip and display the color name.
*/

#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#include <MiniNeoPixels.h>
#define PIXEL_PIN 3 // input pin Neopixel is attached to
#define PIXEL_COUNT 10 // number of neopixels in strip
MiniNeoPixels pixels(PIXEL_PIN, PIXEL_COUNT);

#define PIXEL_BRIGHTNESS 50 // a brightness value from 0 - 255

#define NUM_COLORS 7

struct Color {
  const char* name; int red; int green; int blue;
};

Color colors[NUM_COLORS] = {
  {"red", 255, 0, 0},
  {"orange", 255, 100, 0},
  {"yellow", 255, 255, 0},
  {"green", 0, 255, 0},
  {"cyan", 0, 255, 255},
  {"blue", 0, 0, 255},
  {"magenta", 255, 0, 255}
};

void setup() {
  lcd.begin(16, 2);
  pixels.begin(PIXEL_BRIGHTNESS);
  pixels.all(0, 0, 0);
}

void loop() {
  int r = random(0, NUM_COLORS);
  lcd.clear(); lcd.setCursor(0, 0); lcd.print(colors[r].name);
  for (int i = 0; i < PIXEL_COUNT; i++) {
    pixels.one(i, colors[r].red, colors[r].green, colors[r].blue);
    delay(500);
  }
}
