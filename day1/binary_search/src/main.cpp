#include <vector>
#include "gtest/gtest.h"
#include "binary_search.h"

using namespace std;

TEST(BinarySearchTest, ReturnsIndexWhenFound) {
	vector<int> arr {0, 1, 21, 33, 45, 61, 71, 72, 73};
	ASSERT_EQ(binary_search_iterative(arr, 33), 3);
}

TEST(BinarySearchTest, ReturnsNegativeOneWhenNotFound) {
	vector<int> arr {0, 1, 21, 33, 45, 61, 71, 72, 73};
	ASSERT_EQ(binary_search_recursive(arr, 74), -1);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
