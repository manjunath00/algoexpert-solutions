#include "validate_subsequence.h"

using namespace std;

bool validate_subsequence(vector<int> arr, vector<int> sequence) {
  int arr_idx = 0;
  int seq_idx = 0;

  while(arr_idx < arr.size() && seq_idx < sequence.size()) {
    if(arr[arr_idx] == sequence[seq_idx]) {
      seq_idx++;
    }

    arr_idx++;
  }

  return seq_idx == sequence.size();
}
