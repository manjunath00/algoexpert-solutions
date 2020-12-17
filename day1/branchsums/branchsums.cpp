#include <cstddef>
#include <vector>

struct Node {
  int data;
  Node *left;
  Node *right;
}

void calculate_branch_sums(Node *tree, int runningSum, vector<int> &sums) {
  if(tree == NULL) return;

  runningSum += tree->data;
  if(tree->left == NULL && tree->right == NULL) {
    sums.push_back(runningSum)
    return;
  }

  calculate_branch_sums(tree->left, runningSum, sums);
  calculate_branch_sums(tree->right, runningSum, sums);
}

// O(n) time / O(n) space <--- start here
vector<int> branch_sums(Node *root) {
  vector<int> sums {};
  calculate_branch_sums(root, 0, sums)
  return sums;
}
