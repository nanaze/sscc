#pragma once

#include <functional>

namespace sscc {

// "scale" a function by time.
// For example, a sine wave of 1hz scaled by 2 would be a sine wave
// 2 hz.
std::function<double(double)> scale(std::function<double(double)> f,
                                    double scale_factor);
}
