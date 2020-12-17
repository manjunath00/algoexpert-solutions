#ifndef NEAREST_ELEMENT_IN_BST_H
#define NEAREST_ELEMENT_IN_BST_H

#include <climits>
#include "bst.h"

int nearest_element_in_bst_iterative(BST *root, int target, int closest = INT_MAX);
int nearest_element_in_bst_recursive(BST *root, int target, int closest = INT_MAX);

#endif
