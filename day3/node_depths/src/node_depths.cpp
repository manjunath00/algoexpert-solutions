#include <vector>
#include <unordered_map>
#include "utils/bst.h"

using namespace std;

// O(n) time / O(h) space
int node_depths(BST *root, int depth) {
  if(root == nullptr) return 0;

  return depth + node_depths(root->left, depth + 1) + node_depths(root->right, depth + 1);
}
