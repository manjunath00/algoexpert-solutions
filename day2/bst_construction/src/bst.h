#ifndef BST_H
#define BST_H

class BST {
	int value;
	BST *left;
	BST *right;

	public:
		BST(int value);
		void insert(int value);
		bool contains(int value);
		int get_min_val();
};

#endif
