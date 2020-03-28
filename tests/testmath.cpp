#include <gtest/gtest.h>
#include <math/math.hpp>

TEST(math, add) {
  EXPECT_EQ(add(2, 2), 4) << "2 + 2 = 4";
}

TEST(math, mult) {
  EXPECT_EQ(mult(2, 3), 6) << "2 * 2 = 4";
}

// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(factorial(0), 1);
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(factorial(1), 1);
  EXPECT_EQ(factorial(2), 2);
  EXPECT_EQ(factorial(3), 6);
  EXPECT_EQ(factorial(8), 40320);
}
