# Holberton School Sorting Algorithms

This repository contains implementations of various sorting algorithms in C, as part of the Holberton School curriculum. Each algorithm is implemented in a separate C file, and the repository includes a header file defining function prototypes and structures.

# Sorting Algorithms Included:

Bubble Sort
Insertion Sort
Selection Sort
Quick Sort

# Usage:

Each sorting algorithm is showcased in a dedicated C file along with a main function demonstrating its usage. The algorithms can be compiled and executed independently for educational purposes and practical understanding of sorting techniques.

# Descriptions

## Quick sort
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
- pivot 7, PI -1 to 0: 7 can not find num less than itself so 17 will be the left(partition_index++). #swapped
- pivot 7 to 19, PI 0 to 1: no left subarray so goes to right subarray.

7, 13, 99, 71, 48, 52, 96, 73, 86, 19
** 13 and 48 are swapped.
- pivot 19 PI 1 to 2: 19 found 13(less than itself) then 13 goes to the left(PE++) in the subarray. #swapped

7, 13, 19, 71, 48, 52, 96, 73, 86, 99
** 19 and 99 are swapped.
- pivot 19 to 99 PI 2: 19 could not find more so move to the left(PE++). #swapped
left subarray is already sorted so do nothing(pivot and PI should move that is omitted here.) and goes to the right subarray.
- right subarray should not include the previous pivot.
[71, 48, 52, 73, 86, 99]

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