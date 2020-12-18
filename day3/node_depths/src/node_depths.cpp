#include <vector>
#include "utils/bst.h"

using namespace std;

struct level {
  BST *node;
  int depth;
};

// O(n) time / O(h) space
int node_depths_iterative(BST *root) {
  int sum_of_depths = 0;

  vector<level> stack;
  stack.push_back(level{root, 0});

  while(stack.size() > 0) {
    BST *node = stack.back().node;
    int depth = stack.back().depth;

    stack.pop_back();

    if(node == nullptr) continue;

    sum_of_depths += depth;
    stack.push_back(level{node->left, depth+1});
    stack.push_back(level{node->right, depth+1});
  }

  return sum_of_depths;
}

// O(n) time / O(h) space
int node_depths_recursive(BST *root, int depth) {
  if(root == nullptr) return 0;

  return depth + node_depths_recursive(root->left, depth + 1) + node_depths_recursive(root->right, depth + 1);
}
