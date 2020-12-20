#include <vector>
#include "gtest/gtest.h"
#include "group_anagrams.h"

using namespace std;

TEST(GroupAnagramsTest, ReturnGroupsOfAnagrams) {
  vector<string> words = {"eat","tea","tan","ate","nat","bat"};
  vector<vector<string>> expected = {{ "bat" }, {"tan", "nat"}, {"eat", "tea", "ate"}};
  ASSERT_EQ(group_anagrams(words), expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

