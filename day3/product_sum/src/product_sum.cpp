#include <vector>
#include <any>
#include "product_sum.h"

using namespace std;

// O(n) time / O(d) space
// where n is the no.of.elements in arr + sub array
// where d is the max depth of an array
int product_sum(vector<any> arr, int multiplier) {
  int sum = 0;

  for(auto el: arr) {
    if(el.type() == typeid(vector<any>)) {
      sum += product_sum(any_cast<vector<any>>(el), multiplier + 1);
    } else {
      sum += any_cast<int>(el);
    }
  }

  return sum * multiplier;
}
