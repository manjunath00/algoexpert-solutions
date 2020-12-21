#include <vector>
#include "min_heap.h"

using namespace std;

MinHeap::MinHeap(vector<int> arr) {
  this->heap = this->build_heap(arr);
}

// O(n) time / O(1) space
vector<int> MinHeap::build_heap(vector<int> arr) {
  int parent_idx = (arr.size() - 2) / 2;

  while(parent_idx >= 0) {
    this->sift_down(parent_idx, arr.size() - 1, arr);
    parent_idx--;
  }

  return arr;
}

// O(nlogn) time / O(1) space
void MinHeap::sift_down(int parent_idx, int end_idx, vector<int> &heap) {
  int child_one_idx = (parent_idx * 2) + 1;

  while(child_one_idx <= end_idx) {
    int child_two_idx = (parent_idx * 2) + 2 <= end_idx ? (parent_idx * 2) + 2 : -1;
    int idx_to_swap = child_one_idx;

    if(child_two_idx != -1 && heap[child_two_idx] < heap[child_one_idx]) {
      idx_to_swap = child_two_idx;
    }

    if(heap[idx_to_swap] < heap[parent_idx]) {
      this->swap(heap, parent_idx, idx_to_swap);
      parent_idx = idx_to_swap;
      child_one_idx = (parent_idx * 2) + 1;
    } else {
      break;
    }
  }
}

// O(nlogn) time / O(1) space
void MinHeap::sift_up(int value, int current_idx, vector<int> &heap) {
  int parent_idx = (current_idx - 1) / 2;

  while (current_idx > 0 && heap[current_idx] < heap[parent_idx]) {
    this->swap(heap, current_idx, parent_idx);
    current_idx = parent_idx;
    parent_idx = (current_idx - 1) / 2;
  }
}

void MinHeap::insert(int value) {
  this->heap.push_back(value);
  this->sift_up(value, this->heap.size() - 1, this->heap);
}

int MinHeap::remove() {
  this->swap(this->heap, 0, this->heap.size() - 1);

  int value_to_remove = this->heap.back();
  this->heap.pop_back();

  this->sift_down(0, this->heap.size() - 1, this->heap);

  return value_to_remove;
}

int MinHeap::peek() {
  return this->heap[0];
}

void MinHeap::swap(vector<int> &heap, int a, int b) {
  int temp = heap[a];
  heap[a] = heap[b];
  heap[b] = temp;
}
