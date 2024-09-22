
---

# Merge Sort and MergeLeetCode

This repository contains implementations of **Merge Sort** and a class exercise called **MergeLeetCode**, both designed to help me improve my algorithmic skills, particularly around sorting and merging data.

## Files

### 1. `mergeSort.cpp`
This file contains the implementation of the **Merge Sort** algorithm. Merge Sort is a divide-and-conquer algorithm that recursively splits an array into smaller subarrays, sorts those subarrays, and merges them back together to form a final sorted array.

#### How to Compile
To compile the merge sort program, run the following command:
```bash
g++ -o merge_sort mergeSort.cpp
```

#### How to Run
After compiling, you can run the program with:
```bash
./merge_sort
```

The program will prompt you to input an array of integers, and then output the sorted array using merge sort.

### Example Output:
```
Enter the number of elements: 6
Enter 6 elements: 38 27 43 3 9 82
Sorted array: 3 9 27 38 43 82
```

### 2. `MergeLeetCode.cpp`
I worked on this file as part of a class exercise to improve my algorithm skills. The challenge, modeled after a problem on LeetCode, required merging two sorted arrays. This exercise helped me strengthen my understanding of merging techniques and efficiently handling edge cases in arrays. Completing this task allowed me to practice algorithm optimization in real-world scenarios.

#### How to Compile
To compile the `MergeLeetCode.cpp` file, use the following command:
```bash
g++ -o merge_leetcode MergeLeetCode.cpp
```

#### How to Run
After compiling, you can run the program with:
```bash
./merge_leetcode
```

The program will prompt you for two sorted arrays and then merge them into a single sorted array.

### Example Output:
```
Enter the number of elements in the first array: 4
Enter the elements of the first array: 1 3 5 7
Enter the number of elements in the second array: 3
Enter the elements of the second array: 2 4 6
Merged array: 1 2 3 4 5 6 7
```
---