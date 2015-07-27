#include "scale.h"

#include <functional>

using std::function;

namespace sscc {

function<double(double)> scale(function<double(double)> f,
                               double scale_factor) {
  return [&f, scale_factor](double time) { return f(time * scale_factor); };
}

} // namespace sscc
