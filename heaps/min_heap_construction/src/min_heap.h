#ifndef MIN_HEAP_H
#define MIN_HEAP_H

#include <vector>

class MinHeap {
 std::vector<int> heap {};

 public:
  MinHeap(std::vector<int> arr);

  std::vector<int> build_heap(std::vector<int> arr);

  void sift_up(int value, int current_idx, std::vector<int> &heap);
  void sift_down(int current_idx, int end_idx, std::vector<int> &heap);


  int remove();
  void insert(int value);

  int peek();
  void swap(std::vector<int> &heap, int a, int b);
};

#endif
