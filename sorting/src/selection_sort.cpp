#include <vector>
#include "sorting.h"

using namespace std;

// O(n^2) time / O(1) space
vector<int> selection_sort(vector<int> arr) {
  int current_idx = 0;

  while(current_idx < arr.size() - 1) {
    int smallest_idx = current_idx;

    for(int i = current_idx + 1; i < arr.size(); i++) {
      if(arr[smallest_idx] > arr[i]) {
        smallest_idx = i;
      }
    }

    swap(arr, current_idx, smallest_idx);
    current_idx++;
  }

  return arr;
}
