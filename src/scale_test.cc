#include "gtest/gtest.h"
#include "scale.h"

using sscc::scale;

void ExpectNear(double expected, double actual) {
  EXPECT_NEAR(expected, actual, 10e-10);
}

double identity(double val) { return val; }

TEST(ScaleTest, TestScaledValues) {
  auto scaled_identity = scale(identity, 5);

  EXPECT_EQ(0, identity(0));
  ExpectNear(0, scaled_identity(0));

  EXPECT_EQ(1, identity(1));
  ExpectNear(5, scaled_identity(1));

  EXPECT_EQ(2, identity(2));
  ExpectNear(10, scaled_identity(2));

  EXPECT_EQ(3, identity(3));
  ExpectNear(15, scaled_identity(3));
}
