#include "gtest/gtest.h"
#include "nth_fib.h"

TEST(NthFibTest, TestsNaiveSolution) {
  EXPECT_EQ(nth_fib_memoize(1), 0);
  EXPECT_EQ(nth_fib_memoize(2), 1);
  EXPECT_EQ(nth_fib_memoize(6), 5);
}

TEST(NthFibTest, TestsMemoizeSolution) {
  EXPECT_EQ(nth_fib_memoize(1), 0);
  EXPECT_EQ(nth_fib_memoize(2), 1);
  EXPECT_EQ(nth_fib_memoize(6), 5);
}

TEST(NthFibTest, TestsIterativeSolution) {
  EXPECT_EQ(nth_fib_iterative(1), 0);
  EXPECT_EQ(nth_fib_iterative(2), 1);
  EXPECT_EQ(nth_fib_iterative(6), 5);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
