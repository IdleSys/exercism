#include "resistor_color.h"

unsigned short color_code(resistor_band_t band_name) { return band_name; }
resistor_band_t *colors(void) {
  static resistor_band_t all[] = {BLACK, BROWN, RED,    ORANGE, YELLOW,
                                  GREEN, BLUE,  VIOLET, GREY,   WHITE};
  return all;
}
