#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <vector>

int binary_search_recursive(std::vector<int> arr, int target);
int binary_search_recursive_helper(std::vector<int> arr, int target, int left, int right);
int binary_search_iterative(std::vector<int> arr, int target);

#endif
