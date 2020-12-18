# AlgoExpert Solutions

![AlgoExpert](https://res.cloudinary.com/tylerdurden/image/upload/v1608262817/random/banner_kkv617.png)

This repository contains the solution to the problems present in [algoexpert](http://algoexpert.com). As you can see from the banner above, the problems are solved using C++ backed by unit testing.

## Directory Structure

```bash
day2/bst_construction/
├── question.md
└── src
    ├── bst.cpp
    ├── bst.h
    └── main.cpp
```

- The <code>question.md</code> file contains the question for the problem.
- The cpp source code will be in <code>src</code> directory.
- Each problem will have it's own header file and source file.
- The <code>main.cpp</code> file is used for executing test cases.

## Running locally

- Make sure to install [gtest](https://github.com/google/googletest) in your machine
- Go to any src directory and execute the following command:

  ```bash
  g++ -c *.cpp && g++ -o main *.o -lgtest && ./main
  ```

## Array problems

| Problems             | Links                                             |
| -------------------- | ------------------------------------------------- |
| Binary Search        | [visit](day1/binary_search/src/binary_search.cpp) |
| Validate Subsequence | [visit](day3/validate_subsequence/src/validate_subsequence.cpp) |

## Tree problems

| Problems                    | Links                                                               |
| --------------------------- | ------------------------------------------------------------------- |
| BST Construction            | [visit](day2/bst_construction/src/bst.cpp)                          |
| Branch Sums                 | [visit](day1/branchsums/branchsums.cpp)                             |
| Find nearest element in BST | [visit](day1/nearest_element_in_bst/src/nearest_element_in_bst.cpp) |
| Node Depths                 | [visit](day3/node_depths/src/node_depths.cpp)                       |

## Data Structure implementation

| Problems         | Links                                      |
| ---------------- | ------------------------------------------ |
| BST Construction | [visit](day2/bst_construction/src/bst.cpp) |

## String problems

| Problems       | Links                                               |
| -------------- | --------------------------------------------------- |
| Group Anagrams | [visit](day2/group_anagrams/src/group_anagrams.cpp) |

## Others

| Problems       | Links                                 |
| -------------- | ------------------------------------- |
| Nth Fibonaccit | [visit](day2/nth_fib/src/nth_fib.cpp) |
