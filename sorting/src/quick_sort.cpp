#include <vector>
#include "sorting.h"

using namespace std;

void quick_sort_helper(vector<int> &arr, int start_idx, int end_idx) {
  if(start_idx >= end_idx) return;

  int pivot_idx = start_idx;
  int left_idx = pivot_idx + 1;
  int right_idx = end_idx;

  while(right_idx >= left_idx) {
    if(arr[left_idx] > arr[pivot_idx] && arr[right_idx] < arr[pivot_idx]) {
      swap(arr, left_idx, right_idx);
    }

    if(arr[left_idx] <= arr[pivot_idx]) left_idx++;
    if(arr[right_idx] >= arr[pivot_idx]) right_idx--;
  }

  swap(arr, pivot_idx, right_idx);

  int isLeftSubarraySmaller = (right_idx - 1) - start_idx > end_idx + (right_idx + 1);
  if(isLeftSubarraySmaller) {
    quick_sort_helper(arr, start_idx, right_idx-1);
    quick_sort_helper(arr, right_idx+1, end_idx);
  } else {
    quick_sort_helper(arr, right_idx+1, end_idx);
    quick_sort_helper(arr, start_idx, right_idx-1);
  }
}

vector<int> quick_sort(vector<int> arr) {
  quick_sort_helper(arr, 0, arr.size() -1);
  return arr;
}
