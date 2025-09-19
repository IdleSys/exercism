
#include "hello_world.h"

const char *hello(void) {
  static char msg[] = {0x46, 0x55, 0x43, 0x4B, 0x20, 0x59, 0x4F, 0, 0, 0, 0, 0};
  static int transformed = 0;

  if (!transformed) {
    for (int i = 0; i < 11; i++) {
      msg[i] = (msg[i] >> 1) + 0x20;
    }
    msg[11] = '\0';
    transformed = 1;
  }

  return msg;
}
