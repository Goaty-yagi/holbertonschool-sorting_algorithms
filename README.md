# Sorting Algorithms

This repository contains various sorting algorithms implemented in C. These algorithms are commonly used to arrange elements in a specific order within an array or list.

## Sorting Algorithms Included:

- Bubble Sort
- Insertion Sort
- Selection Sort
- Quick Sort

## Overview

### Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Insertion Sort

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

### Selection Sort

Selection Sort is an in-place comparison sorting algorithm. It has O(n^2) time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort.

### Quick Sort

Quick Sort is a divide-and-conquer algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.


## Details

### Quick sort
- Prototype: void quick_sort(int *array, size_t size);
- You must implement the Lomuto partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the array after each time you swap two elements (See example below)

expected outout

```bash
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

- pivot 7, PI -1:

7, 48, 99, 71, 13, 52, 96, 73, 86, 19

** 19 and 7 are swapped.

- pivot 7, PI -1 to 0: 7 can not find num less than itself so 7 will be the left(partition_index++). #swapped
- pivot 7 to 19, PI 0 to 1: no left subarray so goes to right subarray.

7, 13, 99, 71, 48, 52, 96, 73, 86, 19

** 13 and 48 are swapped.

- pivot 19 PI 1 to 2: 19 found 13(less than itself) then 13 goes to the left(PE++) in the subarray. #swapped

7, 13, 19, 71, 48, 52, 96, 73, 86, 99

** 19 and 99 are swapped.

- pivot 19 to 99 PI 2: 19 could not find more so move to the left(PE++). #swapped
left subarray is already sorted so do nothing(pivot and PI should move that is omitted here.) and goes to the right subarray.
- right subarray should not include the previous pivot.
[71, 48, 52, 96, 73, 86, 99]

7, 13, 19, 71, 48, 52, 73, 96, 86, 99

** 73 and 96 are swapped.

- pivot 99 to 86, PI 3 to 9 to 3: compare from left(71), all num are less than 99.
so all nums stay where they are.
then goes to the left subarray of the pivot 99 [71, 48, 52, 96, 73, 86].
- pivot 86 PI 3 to 5: found 71 to 52 and steyed at PI position.
- pivot 86 PI 5 to 6: found 73 and swapped with the num 96 where PI located. #swapped

7, 13, 19, 71, 48, 52, 73, 86, 96, 99

** 86 and 96 are swapped. 

- pivot 86 PI 6 to 7: no more found less than 86 so goes to the left(PI++) #swapped
- right subarray are sorted at this point.(pivot and PI should move that is omitted here.)

7, 13, 19, 48, 71, 52, 73, 86, 96, 99

** 48 and 71 are swapped. 

- pivot 73 PI 3 to 5: all nums are less than 73 so all nums stay where they are.
- right subarray are sorted so do nothing.
- pivot 52 PI 3 to 4:  found 48 and goes to the lrft(PI++). #swapped

7, 13, 19, 48, 52, 71, 73, 86, 96, 99

** 52 and 71 are swapped.

- pivot 52 PI 4: no more found less than 52 so goes to the left(PI++) #swapped

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```
