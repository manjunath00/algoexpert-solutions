#include <vector>
#include "gtest/gtest.h"
#include "sorting.h"

using namespace std;

TEST(BubbleSortTest, SortElements) {
  vector<int> arr {8, 5, 2, 9, 5, 6, 3};
  vector<int> expected {2, 3, 5, 5, 6, 8, 9};

  ASSERT_EQ(bubble_sort(arr), expected);
}

TEST(InsertionSortTest, SortElements) {
  vector<int> arr {8, 5, 2, 9, 5, 6, 3};
  vector<int> expected {2, 3, 5, 5, 6, 8, 9};

  ASSERT_EQ(insertion_sort(arr), expected);
}

TEST(SelectionSortTest, SortElements) {
  vector<int> arr {8, 5, 2, 9, 5, 6, 3};
  vector<int> expected {2, 3, 5, 5, 6, 8, 9};

  ASSERT_EQ(selection_sort(arr), expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
