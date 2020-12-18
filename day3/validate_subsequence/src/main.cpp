#include "gtest/gtest.h"
#include "validate_subsequence.h"

using namespace std;

TEST(ValidateSubsequence, ReturnsTrue) {
  vector<int> arr {5, 1, 22, 25, 6, -1, 8, 10};
  vector<int> sequence {1, 6, -1, 10};

  ASSERT_TRUE(validate_subsequence(arr, sequence));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
