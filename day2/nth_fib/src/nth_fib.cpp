#include <unordered_map>
#include "nth_fib.h"

using namespace std;

// O(2^n) time / O(n) space
int nth_fib_naive(int n) {
  if(n == 2) {
    return 1;
  } else if(n == 1) {
    return 0;
  } else {
    return nth_fib_naive(n - 1) + nth_fib_naive(n - 2);
  }
}

// O(n) time / O(n) space
int nth_fib_memoize_helper(int n, unordered_map<int, int> &memoize) {
  if (memoize.count(n)) {
    return memoize[n];
  } else {
    memoize[n] = nth_fib_memoize_helper(n - 1, memoize) + nth_fib_memoize_helper(n - 2, memoize);
    return memoize[n];
  }
}

int nth_fib_memoize(int n) {
  unordered_map<int, int> memoize;
  memoize[1] = 0;
  memoize[2] = 1;

  return nth_fib_memoize_helper(n, memoize);
}

// O(n) time / O(1) space
int nth_fib_iterative(int n) {
  int last_two[] {0, 1};
  int counter = 3;

  while(counter <= n) {
    int nth_fib = last_two[0] + last_two[1];
    last_two[0] = last_two[1];
    last_two[1] = nth_fib;
    counter++;
  }

  return n > 1 ? last_two[1] : last_two[0];
}
