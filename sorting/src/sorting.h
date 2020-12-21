#ifndef SORTING_H
#define SORTING_H

#include <vector>

std::vector<int> bubble_sort(std::vector<int> arr);
std::vector<int> insertion_sort(std::vector<int> arr);
std::vector<int> selection_sort(std::vector<int> arr);
std::vector<int> quick_sort(std::vector<int> arr);
std::vector<int> heap_sort(std::vector<int> arr);
std::vector<int> merge_sort(std::vector<int> arr);

// helpers
void swap(std::vector<int> &arr, int a, int b);

#endif
