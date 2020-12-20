#include <vector>
#include "sorting.h"

using namespace std;

// O(n^2) time / O(1) space
vector<int> bubble_sort(vector<int> arr) {
  bool is_sorted = false;
  int counter = 0;

  while(!is_sorted) {
    is_sorted = true;

    for(int i = 0; i < arr.size() - 1 - counter; i++) {
      if(arr[i] > arr[i + 1]) {
        swap(arr, i, i + 1);
        is_sorted = false;
      }
    }

    counter += 1;
  }

  return arr;
}
