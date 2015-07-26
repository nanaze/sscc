#include <math.h>

#include "sine.h"

namespace sscc {

double sine(double time) {
  // 2 * pi * time gives 1hz
  return sin(2.0 * M_PI * time);
}

}
