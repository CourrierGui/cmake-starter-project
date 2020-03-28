#include <gtest/gtest.h>
#include <math/math.hpp>

TEST(Math, add) {
  EXPECT_TRUE(add(2, 2) == 4);
}

TEST(math, mult) {
  EXPECT_TRUE(mult(2, 3) == 6);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
