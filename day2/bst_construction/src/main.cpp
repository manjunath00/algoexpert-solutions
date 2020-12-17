#include "gtest/gtest.h"
#include "bst.h"

class BinarySearchTest : public ::testing::Test {
	protected:
		void SetUp() override {
			bst.insert(5);
			bst.insert(15);
		}

	BST bst = 10;
};

TEST_F(BinarySearchTest, ContainsReturnsTrueIfFound) {
	ASSERT_TRUE(bst.contains(5));
}

TEST_F(BinarySearchTest, ContainsReturnsFalseIfNotFound) {
	ASSERT_FALSE(bst.contains(11));
}

TEST_F(BinarySearchTest, ReturnsMinValue) {
	ASSERT_EQ(5, bst.get_min_val());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
