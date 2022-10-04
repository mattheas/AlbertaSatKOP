#include <stdlib.h>
#include "sc.h"
#include <inttypes.h>

uint16_t sc_get_voltage(void) {
  return (uint16_t) rand_range(10, 20); // 18
}

uint16_t sc_get_current(void) {
  return (uint16_t) rand_range(40, 50);
}

uint16_t sc_get_temp(void) {
  return (uint16_t) rand_range(350, 360);
}

int rand_range(int min, int max) {
  srand(time(0)+clock()+rand());
  return (uint16_t) (rand() % (max - min + 1)) + min;
}