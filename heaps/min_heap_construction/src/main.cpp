#include <vector>
#include "gtest/gtest.h"
#include "min_heap.h"

using namespace std;

class MinHeapTest : public ::testing::Test {
 protected:
  void SetUp() override {
    h.remove();
  }

  MinHeap h = vector<int> {30, 102, 23, 17, 18, 9, 44, 12, 31};
};

TEST_F(MinHeapTest, TestsHeapMethods) {
  ASSERT_EQ(h.peek(), 12);

  h.insert(2);
  ASSERT_EQ(h.peek(), 2);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
