/**
 * @file MiniNeoPixelColors.h
 * @brief Provides RGB color constants and a MiniRGB structure for NeoPixel control.
 */
#ifndef MININEOPIXELCOLORS_H
#define MININEOPIXELCOLORS_H

#include <Arduino.h>

/**
 * @brief A simple RGB color structure.
 *
 * Represents a color using red, green, and blue components.
 */
struct MiniRGB {
  uint8_t r; ///< Red component (0–255)
  uint8_t g; ///< Green component (0–255)
  uint8_t b; ///< Blue component (0–255)
};

/**
 * @brief Common color definitions for use with MiniNeoPixels.
 *
 * Provides a set of predefined RGB colors for color setter methods.
 */
namespace MiniNeoPixelColors {
  constexpr MiniRGB BLACK   = {0, 0, 0};       ///< Black color
  constexpr MiniRGB WHITE   = {255, 255, 255}; ///< White color
  constexpr MiniRGB HOTPINK = {255, 10, 127};  ///< Hot pink color
  constexpr MiniRGB RED     = {255, 10, 10};   ///< Red color
  constexpr MiniRGB ORANGE  = {255, 127, 10};  ///< Orange color
  constexpr MiniRGB YELLOW  = {255, 255, 10};  ///< Yellow color
  constexpr MiniRGB LIME    = {127, 255, 10};  ///< Lime green color
  constexpr MiniRGB GREEN   = {10, 255, 10};   ///< Green color
  constexpr MiniRGB TEAL    = {10, 255, 127};  ///< Teal color
  constexpr MiniRGB CYAN    = {10, 255, 255};  ///< Cyan color
  constexpr MiniRGB SKY     = {10, 127, 255};  ///< Sky blue color
  constexpr MiniRGB BLUE    = {10, 10, 255};   ///< Blue color
  constexpr MiniRGB VIOLET  = {127, 10, 255};  ///< Violet color
  constexpr MiniRGB MAGENTA = {255, 10, 255};  ///< Magenta color
}

#endif // MININEOPIXELCOLORS_H
