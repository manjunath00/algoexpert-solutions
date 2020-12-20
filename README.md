# AlgoExpert Solutions

![AlgoExpert](https://res.cloudinary.com/tylerdurden/image/upload/v1608262817/random/banner_kkv617.png)

This repository contains the solution to the problems present in [algoexpert](http://algoexpert.com). As you can see from the banner above, the problems are solved using C++ backed by unit testing.

## Directory Structure

```bash
searching/binary_search/
├── question.md
└── src
    ├── binary_search.cpp
    ├── binary_search.h
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
  g++ --std=c++17 -c *.cpp

  g++ --std=c++17 -o main *.o -lgtest

  ./main
  ```

## Array problems

| Problems             | Links                                                           |
| -------------------- | --------------------------------------------------------------- |
| Validate Subsequence | [visit](arrays/validate_subsequence/src/validate_subsequence.cpp) |

## Searching

| Problems      | Links                                             |
| ------------- | ------------------------------------------------- |
| Binary Search | [visit](searching/binary_search/src/binary_search.cpp) |

## Tree problems

| Problems                    | Links                                                               |
| --------------------------- | ------------------------------------------------------------------- |
| BST Construction            | [visit](trees/bst_construction/src/bst.cpp)                          |
| Branch Sums                 | [visit](trees/branchsums/branchsums.cpp)                             |
| Find nearest element in BST | [visit](trees/nearest_element_in_bst/src/nearest_element_in_bst.cpp) |
| Node Depths                 | [visit](trees/node_depths/src/node_depths.cpp)                       |

## String problems

| Problems       | Links                                               |
| -------------- | --------------------------------------------------- |
| Group Anagrams | [visit](strings/group_anagrams/src/group_anagrams.cpp) |

## Recursion

| Problems       | Links                                         |
| -------------- | --------------------------------------------- |
| Nth Fibonaccit | [visit](recursion/nth_fib/src/nth_fib.cpp)         |
| Product Sum    | [visit](recursion/product_sum/src/product_sum.cpp) |
