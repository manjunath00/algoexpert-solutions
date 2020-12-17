#include <iostream>

using namespace std;

int binary_search_helper(int arr[], int target, int left, int right);

// recursive solution: Olog(N) time / Olog(N) space
int binary_search_recursive(int arr[], int target, int left, int right) {
	return binary_search_helper(arr, target, left, right);
}

int binary_search_helper(int arr[], int target, int left, int right) {
	if(left > right) {
		return -1;
	}

	int middle = (left + right) / 2;
	int current_match = arr[middle];

	if(current_match == target) {
		return middle;
	} else if(current_match > target) {
		return binary_search_helper(arr, target, left, middle - 1);
	} else {
		return binary_search_helper(arr, target, middle + 1, right);
	}
}

// iterative solution: Olog(N) time / O(1) space
int binary_search(int arr[], int target, int left, int right) {
	while(left <= right) {
		int middle = (left + right) / 2;
		int current_match = arr[middle];

		if(current_match == target) {
			return middle;
		} else if(current_match > target) {
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}

	return -1;
}

int main() {
	int arr[] {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
	int target = 33;

	int left = 0;
	int right = sizeof(arr) / sizeof(int) - 1;

	cout << binary_search(arr, target, left, right) << endl;
}

/* prerequisite: the array elements must be sorted */
