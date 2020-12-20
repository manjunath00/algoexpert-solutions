#include "gtest/gtest.h"
#include "nearest_element_in_bst.h"
#include "bst.h"

using namespace std;

class NearestElementTest : public ::testing::Test {
protected:
  void SetUp() override {
    bst.insert(5);
    bst.insert(15);
    bst.insert(2);
    bst.insert(13);
  }

  BST bst = 10;
  BST* t = &bst;
};

TEST_F(NearestElementTest, ReturnsNearestElement) {
  EXPECT_EQ(nearest_element_in_bst_iterative(t, 15), 15);
  EXPECT_EQ(nearest_element_in_bst_iterative(t, 14), 15);
  EXPECT_EQ(nearest_element_in_bst_iterative(t, 4), 5);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
