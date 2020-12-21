#include <vector>
#include "sorting.h"

using namespace std;

typedef vector<int>::iterator vec_iter;

vector<int> slice(vec_iter start, vec_iter end) {
  vector<int> result;

  for(vec_iter cur = start; cur != end; cur++) {
    result.push_back(*cur);
  }

  return result;
}

vector<int> merge(vector<int> left_half, vector<int> right_half) {
  vector<int> result(left_half.size() + right_half.size(), 0);
  int i = 0, j = 0, k = 0;

  while(i < left_half.size() && j < right_half.size()) {
    if(left_half[i] <= right_half[j]) {
      result[k++] =	left_half[i++];
    } else {
      result[k++] = right_half[j++];
    }
  }

  while(i < left_half.size()) {
    result[k++] =	left_half[i++];
  }

  while(j < right_half.size()) {
    result[k++] = right_half[j++];
  }

  return result;
}

// O(nlogn) time / O(nlogn) space
vector<int> merge_sort(vector<int> arr) {
  if(arr.size() == 1) {
    return arr;
  }

  int middle_idx = arr.size() / 2;
  vector<int> left_half = slice(arr.begin(), arr.begin() + middle_idx);
  vector<int> right_half = slice(arr.begin() + middle_idx, arr.end());

  return merge(merge_sort(left_half), merge_sort(right_half));
}
