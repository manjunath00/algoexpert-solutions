#include <cmath>

struct Node {
  int data;
  Node *left;
  Node *right;
}

// average: O(logn) time / O(1) space
// worst: O(n) time / O(1) space
int find_nearest_element_in_bst_helper_recursive(Node *tree, int target, int closest) {
  Node* current_node = tree;

  while(current_node != nullptr) {
    if(abs(target - closest) > abs(target - tree->data)) {
      closest = tree->data;
    }

    if(target < current_node->data) {
      current_node = current_node->left;
    } else if(target > current_node->data) {
      current_node = current_node->right;
    } else {
      break;
    }
  }

  return closest;
}


// average: O(logn) time / O(1) space
// worst: O(n) time / O(n) space
int find_nearest_element_in_bst_helper(Node *tree, int target, int closest) {
  if (tree == nullptr) {
    return closest;
  }

  if(abs(target - closest) > abs(target - tree->data)) {
    closest = tree->data;
  }

  if(target < tree->data) {
    return find_nearest_element_in_bst_helper(tree->left, target, closest)
  } else if(target > tree->data) {
    return find_nearest_element_in_bst_helper(tree->right, target, closest)
  } else {
    return closest;
  }

}

int find_nearest_element_in_bst(Node *root, int target) { // <--- start here
  return find_nearest_element_in_bst_helper(root, target, INT_MAX)
}
