#include "gtest/gtest.h"
#include "utils/bst.h"
#include "node_depths.h"

class NodeDepthsTest : public ::testing::Test {
 protected:
  void SetUp() override {
    t->insert(5);
    t->insert(15);
    t->insert(2);
    t->insert(13);
    t->insert(22);
  }

  BST bst = 10;
  BST *t = &bst;
};

TEST_F(NodeDepthsTest, ReturnsNodeDepth) {
  EXPECT_EQ(node_depths_recursive(t), 8);
  EXPECT_EQ(node_depths_iterative(t), 8);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

