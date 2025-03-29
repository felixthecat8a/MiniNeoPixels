#ifndef MININEOPIXELCOLORS_H
#define MININEOPIXELCOLORS_H

#include <Arduino.h>

struct MiniRGB {
  uint8_t r;
  uint8_t g;
  uint8_t b;
};

namespace MiniNeoPixelColors {
  constexpr MiniRGB BLACK   = {0, 0, 0};
  constexpr MiniRGB WHITE   = {255, 255, 255};
  constexpr MiniRGB HOTPINK = {255, 10, 127};
  constexpr MiniRGB RED     = {255, 10, 10};
  constexpr MiniRGB ORANGE  = {255, 127, 10};
  constexpr MiniRGB YELLOW  = {255, 255, 10};
  constexpr MiniRGB LIME    = {127, 255, 10};
  constexpr MiniRGB GREEN   = {10, 255, 10};
  constexpr MiniRGB TEAL    = {10, 255, 127};
  constexpr MiniRGB CYAN    = {10, 255, 255};
  constexpr MiniRGB SKY     = {10, 127, 255};
  constexpr MiniRGB BLUE    = {10, 10, 255};
  constexpr MiniRGB VIOLET  = {127, 10, 255};
  constexpr MiniRGB MAGENTA = {255, 10, 255};
}

#endif // MININEOPIXELCOLORS_H
