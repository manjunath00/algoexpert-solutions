#include <vector>
#include "sorting.h"

using namespace std;

void sift_down(int current_idx, int end_idx, vector<int> &arr) {
  int child_one_idx = (current_idx * 2) + 1;

  while(child_one_idx <= end_idx) {
    int child_two_idx = (current_idx * 2) + 2 <= end_idx ? (current_idx * 2) + 2 : -1;
    int idx_to_swap = child_one_idx;

    if(child_two_idx != -1 && arr[child_two_idx] > arr[child_one_idx]) {
      idx_to_swap = child_two_idx;
    }

    if(arr[idx_to_swap] > arr[current_idx]) {
      swap(arr, current_idx, idx_to_swap);
      current_idx = idx_to_swap;
      child_one_idx = (current_idx * 2) + 1;
    } else {
      break;
    }
  }
}


void build_heap(vector<int> &arr) {
  int first_parent_idx = (arr.size() - 2) / 2;

  while(first_parent_idx >= 0) {
    sift_down(first_parent_idx, arr.size() - 1, arr);
    first_parent_idx--;
  }
}


vector<int> heap_sort(vector<int> arr) {
  build_heap(arr);

  for(int end_idx = arr.size() - 1; end_idx > 0; end_idx--) {
    swap(arr, 0, end_idx);
    sift_down(0, end_idx - 1, arr);
  }

  return arr;
}
