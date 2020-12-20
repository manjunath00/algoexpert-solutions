#include<vector>
#include "sorting.h"

using namespace std;

void swap(vector<int> &arr, int a, int b) {
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}
