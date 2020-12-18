#include <vector>
#include <any>
#include "gtest/gtest.h"
#include "product_sum.h"

using namespace std;

TEST(ProductSumTest, ReturnsProductSum) {
  vector<any> input = {6};
  input.push_back(vector<any> {-13, 8});
  input.push_back(4);

  vector<any> arr {5, 2};
  arr.push_back(vector<any> {7, -1});
  arr.push_back(3);
  arr.push_back(input);


  ASSERT_EQ(product_sum(arr), 12);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
