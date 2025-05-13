/**
 * @file MiniNeoPixels.h
 * @brief A lightweight wrapper class around Adafruit_NeoPixel for easier usage with common colors.
 * Depends on: Adafruit_NeoPixel, MiniNeoPixelColors.h
 */

#ifndef MININEOPIXELS_H
#define MININEOPIXELS_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "MiniNeoPixelColors.h"

/**
 * @class MiniNeoPixels
 * @brief Simplified interface for controlling NeoPixel LED strips.
 */
class MiniNeoPixels {
private:
  Adafruit_NeoPixel neopixels;
  int _count; ///< Number of NeoPixels

public:
  /**
   * @brief Construct with default NeoPixel type (NEO_GRB + NEO_KHZ800).
   * @param pin The GPIO pin connected to the NeoPixel strip.
   * @param count Number of pixels in the strip.
   */
  MiniNeoPixels(int pin, int count);

  /**
   * @brief Construct with specified NeoPixel type.
   * @param pin The GPIO pin connected to the NeoPixel strip.
   * @param count Number of pixels in the strip.
   * @param t Pixel type (e.g., NEO_GRB + NEO_KHZ800).
   */
  MiniNeoPixels(int pin, int count, neoPixelType t);

  /** @brief Initialize the NeoPixel strip. */
  void begin();

  /**
   * @brief Initialize and set brightness.
   * @param brightness Brightness value (0–255).
   */
  void begin(int brightness);

  /** @brief Get the number of pixels. */
  int count() const;

  /**
   * @brief Set brightness level.
   * @param brightness Brightness (0–255).
   */
  void brightness(int brightness);

  /**
   * @brief Convert RGB values to NeoPixel color format.
   * @param red Red component (0–255).
   * @param green Green component (0–255).
   * @param blue Blue component (0–255).
   * @return Encoded 32-bit color.
   */
  uint32_t color(int red, int green, int blue) const;

  /**
   * @brief Convert RGB values to NeoPixel color format.
   * @param red Red component (0–255).
   * @param green Green component (0–255).
   * @param blue Blue component (0–255).
   * @param white White component (0–255).
   * @return Encoded 32-bit color.
   */
  uint32_t color(int red, int green, int blue, int white) const;

  /**
   * @brief Set a pixel color using an encoded 32-bit value.
   * @param num Pixel index.
   * @param color Encoded 32-bit color.
   */
  void setPixelColor(int num, int color);

  /**
   * @brief Set a pixel color using RGB values.
   * @param num Pixel index.
   * @param red Red (0–255).
   * @param green Green (0–255).
   * @param blue Blue (0–255).
   */
  void setPixelColor(int num, int red, int green, int blue);

  /**
   * @brief Set a pixel color using RGBW values.
   * @param num Pixel index.
   * @param red Red (0–255).
   * @param green Green (0–255).
   * @param blue Blue (0–255).
   * @param white White (0–255).
   */
  void setPixelColor(int num, int red, int green, int blue, int white);

  /** @brief Push pixel data to the LED strip. */
  void show();

  /** @brief Clear all pixel colors. */
  void clear();

  void all(int red, int green, int blue);
  void all(int color);
  void all(const MiniRGB& rgb);

  void one(int num, int red, int green, int blue);
  void one(int num, int color);
  void one(int num, const MiniRGB& rgb);

  /**
   * @brief Fill strip with an HSV color.
   * @param deg Hue degree (0–360).
   * @param sat Saturation (0–255).
   * @param val Value/Brightness (0–255).
   */
  void hsv(int deg, int sat, int val);

  /**
   * @brief Set a pixel to an HSV color.
   * @param num Pixel index.
   * @param deg Hue degree (0–360).
   * @param sat Saturation (0–255).
   * @param val Value/Brightness (0–255).
   */
  void hsv(int num, int deg, int sat, int val);

  /** @brief Turn off all pixels. */
  void off();

  /** @brief Set all pixels to white. */
  void white();

  /** @brief Set one pixel to white. */
  void white(int num);

  // @name color Setter Methods (all and individual pixel variants)
  /// @{
  void pink();     void pink(int num);
  void red();      void red(int num);
  void orange();   void orange(int num);
  void yellow();   void yellow(int num);
  void lime();     void lime(int num);
  void green();    void green(int num);
  void teal();     void teal(int num);
  void cyan();     void cyan(int num);
  void sky();      void sky(int num);
  void blue();     void blue(int num);
  void purple();   void purple(int num);
  void violet();   void violet(int num);
  void magenta();  void magenta(int num);
  /// @}
};

#endif // MININEOPIXELS_H
