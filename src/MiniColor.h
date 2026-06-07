#ifndef MINICOLOR_H
#define MINICOLOR_H

#include <Arduino.h>

class MiniColor {
  public:
    static inline uint8_t red(uint32_t c)   { return (c >> 16) & 0xFF; }
    static inline uint8_t green(uint32_t c) { return (c >> 8) & 0xFF; }
    static inline uint8_t blue(uint32_t c)  { return c & 0xFF; }

    static inline uint32_t rgb(uint8_t r, uint8_t g, uint8_t b) {
      return ((uint32_t)r << 16) | ((uint32_t)g << 8) | b;
    }

    static inline uint32_t scale(uint32_t c, uint8_t s) {
      return rgb((uint16_t)red(c) * s / 255, (uint16_t)green(c) * s / 255, (uint16_t)blue(c) * s / 255);
    }

    static inline uint32_t hsv(uint8_t h, uint8_t s, uint8_t v) {
      uint8_t region = h / 43; // 0 to 5
      uint8_t remainder = (h - (region * 43)) * 6;

      uint8_t p = (v * (255 - s)) >> 8;
      uint8_t q = (v * (255 - ((s * remainder) >> 8))) >> 8;
      uint8_t t = (v * (255 - ((s * (255 - remainder)) >> 8))) >> 8;

      switch (region) {
        case 0: return rgb(v, t, p);
        case 1: return rgb(q, v, p);
        case 2: return rgb(p, v, t);
        case 3: return rgb(p, q, v);
        case 4: return rgb(t, p, v);
        default: return rgb(v, p, q);
      }
    }

    static constexpr uint32_t BLACK        = 0x000000;
    static constexpr uint32_t WHITE        = 0xFFFFFF;
    static constexpr uint32_t RED          = 0xFF0000;
    static constexpr uint32_t VERMILION    = 0xFF4000;
    static constexpr uint32_t ORANGE       = 0xFF8000;
    static constexpr uint32_t AMBER        = 0xFFBF00;
    static constexpr uint32_t YELLOW       = 0xFFFF00;
    static constexpr uint32_t LIME         = 0xBFFF00;
    static constexpr uint32_t CHARTREUSE   = 0x80FF00;
    static constexpr uint32_t HARLEQUIN    = 0x40FF00;
    static constexpr uint32_t GREEN        = 0x00FF00;
    static constexpr uint32_t MINT         = 0x00FF40;
    static constexpr uint32_t SPRING_GREEN = 0x00FF80;
    static constexpr uint32_t TURQUOISE    = 0x00FFBF;
    static constexpr uint32_t CYAN         = 0x00FFFF;
    static constexpr uint32_t SKY_BLUE     = 0x00BFFF;
    static constexpr uint32_t AZURE        = 0x0080FF;
    static constexpr uint32_t SAPPHIRE     = 0x0040FF;
    static constexpr uint32_t BLUE         = 0x0000FF;
    static constexpr uint32_t INDIGO       = 0x4000FF;
    static constexpr uint32_t VIOLET       = 0x8000FF;
    static constexpr uint32_t PURPLE       = 0xBF00FF;
    static constexpr uint32_t MAGENTA      = 0xFF00FF;
    static constexpr uint32_t HOT_PINK     = 0xFF00BF;
    static constexpr uint32_t ROSE         = 0xFF0080;
    static constexpr uint32_t CRIMSON      = 0xFF0040;

    static constexpr uint32_t OFF = BLACK;
};

#endif // MINICOLOR_H
