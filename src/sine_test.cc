#include "gtest/gtest.h"
#include "sine.h"

using sscc::sine;

void ExpectNear(double expected, double actual) {
  EXPECT_NEAR(expected, actual, 10e-10);
}

TEST(SineTest, TestKnownValues) {
  ExpectNear(0, sine(0));
  ExpectNear(1, sine(0.25));
  ExpectNear(0, sine(.5));
  ExpectNear(-1, sine(.75));
  ExpectNear(0, sine(1));
  ExpectNear(0, sine(2));
}
