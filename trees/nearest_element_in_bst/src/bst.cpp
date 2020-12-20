#include "bst.h"

using namespace std;

BST::BST(int value) {
  this->value = value;
  this->left = nullptr;
  this->right = nullptr;
}

// average: O(logn) time / O(1) space
// worst: O(n) time / O(1) space
void BST::insert(int value) {
  BST *current_tree = this;

  while(true) {
    if(value < current_tree->value) {
      if(current_tree->left == nullptr) {
        current_tree->left = new BST(value);
        break;
      } else {
        current_tree = current_tree->left;
      }
    } else {
      if(current_tree->right == nullptr) {
        current_tree->right = new BST(value);
        break;
      } else {
        current_tree = current_tree->right;
      }
    }
  }
}

// average: O(logn) time / O(1) space
// worst: O(n) time / O(1) space
bool BST::contains(int value) {
  BST *current_tree = this;

  while(current_tree != nullptr) {
    if(value < current_tree->value) {
      current_tree = current_tree->left;
    } else if(value > current_tree->value) {
      current_tree = current_tree->right;
    } else {
      return true;
    }
  }

  return false;
}

int BST::get_min_val() {
  BST *current_tree = this;

  while(current_tree->left != nullptr) {
    current_tree = current_tree->left;
  }

  return current_tree->value;
}
