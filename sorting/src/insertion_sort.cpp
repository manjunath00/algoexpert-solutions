#include <vector>
#include "sorting.h"

using namespace std;

// O(n^2) time / O(1) space
vector<int> insertion_sort(vector<int> arr) {
  for(int i = 1; i < arr.size(); i++) {
    int j = i;

    while (j > 0 && arr[j] < arr[j - 1]) {
      swap(arr, j, j-1);
      j--;
    }
  }

  return arr;
}
