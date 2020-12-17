#include <cmath>
#include "bst.h"

// average: O(logn) time / O(1) space
// worst: O(n) time / O(1) space
int nearest_element_in_bst_iterative(BST *tree, int target, int closest) {
  BST* current_node = tree;

  while(current_node != nullptr) {
    if(abs(target - closest) > abs(target - current_node->value)) {
      closest = current_node->value;
    }

    if(target < current_node->value) {
      current_node = current_node->left;
    } else if(target > current_node->value) {
      current_node = current_node->right;
    } else {
      break;
    }
  }

  return closest;
}

// average: O(logn) time / O(1) space
// worst: O(n) time / O(n) space
int nearest_element_in_bst_recursive(BST *tree, int target, int closest) {
  if (tree == nullptr) {
    return closest;
  }

  if(abs(target - closest) > abs(target - tree->value)) {
    closest = tree->value;
  }

  if(target < tree->value) {
    return nearest_element_in_bst_recursive(tree->left, target, closest);
  } else if(target > tree->value) {
    return nearest_element_in_bst_recursive(tree->right, target, closest);
  } else {
    return target;
  }
}
