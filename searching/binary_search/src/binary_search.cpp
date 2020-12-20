#include <vector>
#include "binary_search.h"

using namespace std;

int binary_search_recursive_helper(vector<int> arr, int target, int left, int right) {
  if(left > right) {
    return -1;
  }

  int middle = (left + right) / 2;
  int current_match = arr[middle];

  if(current_match == target) {
    return middle;
  } else if(current_match > target) {
    return binary_search_recursive_helper(arr, target, left, middle - 1);
  } else {
    return binary_search_recursive_helper(arr, target, middle + 1, right);
  }
}

// recursive solution: Olog(N) time / Olog(N) space
int binary_search_recursive(vector<int> arr, int target) {
  int left = 0;
  int right = arr.size();

  return binary_search_recursive_helper(arr, target, left, right);
}

// iterative solution: Olog(N) time / O(1) space
int binary_search_iterative(vector<int> arr, int target) {
  int left = 0;
  int right = arr.size();

  while(left <= right) {
    int middle = (left + right) / 2;
    int current_match = arr[middle];

    if(current_match == target) {
      return middle;
    } else if(current_match > target) {
      right = middle - 1;
    } else {
      left = middle + 1;
    }
  }

  return -1;
}
