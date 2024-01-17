# Learning Objectives

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## 1, At least four different sorting algorithms

### Bubble Sort:

- Algorithm: Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
- Key Characteristics: It has a relatively high time complexity, but it is easy to understand and implement.
- Time Complexity:
-- Best Case: O(n) - Occurs when the input array is already sorted, and no swaps are needed.
-- Average Case: O(n2) - Occurs when the elements are randomly ordered, resulting in multiple passes and swaps.
-- Worst Case: O(n2) - Occurs when the input array is in reverse order, leading to the maximum number of passes and swaps.

### Insertion Sort:

- Algorithm: Insertion Sort builds the final sorted array one element at a time. It takes each element from the unsorted part and inserts it into its correct position in the sorted part of the array.
- Key Characteristics: Efficient for small datasets, simple to understand and implement, works well for partially sorted data.
- Time Complexity: 
-- Best Case: O(n) - Occurs when the input array is nearly sorted or already sorted, as only a few comparisons and shifts are needed.
-- Average Case: O(n2) - Occurs in the general case when elements are randomly ordered, requiring multiple comparisons and shifts.
-- Worst Case: O(n2) - Occurs when the input array is in reverse order, leading to the maximum number of comparisons and shifts.

### Selection Sort:

- Algorithm: Selection Sort divides the input into a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first unsorted element.

- Key Characteristics:
-- Simple and easy to implement.
-- In-place algorithm (requires constant extra memory).
-- Not stable (relative order of equal elements may change).

- Time Complexity: 
-- Best Case: O(n2) - Occurs when the input array is already sorted.
-- Average Case: O(n2) - Consistently inefficient due to nested loops.
-- Worst Case: O(n2) - Occurs when the input array is in reverse order.

### Quick Sort:

- Algorithm: Quick Sort is another divide and conquer algorithm. It selects a 'pivot' element and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot.
- Key Characteristics: In-place sort, widely used due to its efficiency, but may have poor performance on already sorted data.
- Time Complexity: 
-- Best Case: O(nlogn) - Occurs when the chosen pivot consistently divides the array into roughly equal parts.
-- Average Case: O(nlogn) - Expected performance when the pivot selection and partitioning are well-balanced.
-- Worst Case: O(n2) - Occurs when the pivot consistently results in highly imbalanced partitions.

### Merge Sort:

- Algorithm: Merge Sort is a divide and conquer algorithm. It divides the input array into two halves, recursively sorts them, and then merges the sorted halves.
- Key Characteristics: Stable sort, efficient for large datasets, but requires additional space for the merging process.
- Time Complexity:
-- Best Case: O(nlogn) - Occurs in all cases due to the divide and conquer nature of the algorithm.
-- Average Case: O(nlogn) - Consistently efficient for large datasets.
-- Worst Case: O(nlogn) - Occurs in all cases due to the divide and conquer nature of the algorithm.

### Heap Sort:

- Algorithm: Heap Sort is based on the binary heap data structure. It builds a max-heap (or min-heap), repeatedly removes the maximum (or minimum) element, and places it at the end of the array.

- Key Characteristics:
-- In-place and not stable.
-- Uses a binary heap data structure.
-- Good for external sorting and when a stable sort is not required.

- Time Complexity: 
-- Best Case: O(nlogn) - Consistently efficient due to the binary heap structure.
-- Average Case: O(nlogn) - Efficient for large datasets.
-- Worst Case: O(nlogn) - Consistently efficient due to the binary heap structure.

### Counting Sort:

- Algorithm: Counting Sort is a non-comparative integer sorting algorithm. It works by counting the number of occurrences of each element and using this information to place the elements in their correct order.

- Key Characteristics:
-- Non-comparative integer sorting algorithm.
-- Linear time complexity for a limited range of input values.
-- Requires extra space proportional to the range of input values.

- Time Complexity: 
-- Best Case: O(n+k) - Occurs when the range of input values (k) is small.
-- Average Case: O(n+k) - Efficient for a limited range of input values.
-- Worst Case: O(n+k) - Efficient for a limited range of input values.

### Radix Sort:

- Algorithm: Radix Sort processes the digits of the elements from the least significant to the most significant. It uses a stable sort as a subroutine to sort each digit position.

- Key Characteristics:
-- Non-comparative integer sorting algorithm.
-- Distributes elements into buckets according to their digits.
-- Efficient for a limited number of digits.

- Time Complexity: 
Best Case: O(nk) - Occurs when the number of digits (k) is small.
Average Case: O(nk) - Efficient for a limited number of digits.
Worst Case: O(nk) - Efficient for a limited number of digits.

### Shell Sort:

- Algorithm:
Shell Sort starts by sorting pairs of elements far apart from each other, then progressively reduces the gap between elements to be compared. It uses the insertion sort algorithm for each gap. The final pass of the algorithm is a regular insertion sort with a gap of 1.

- Key Characteristics:
-- In-place and adaptive (performance improves with partially sorted data).
-- Time complexity depends on the gap sequence chosen.
-- Relatively easy to implement.

- Time Complexity: 
Best Case: O(nlogn) - Occurs when the input is nearly sorted, and the gap sequence is chosen optimally.
Average Case: Depends on the gap sequence but typically between O(n3/2) and O(n2).
Worst Case: O(n2) - Occurs when the gap sequence is poor, and elements are far from their final position.

### Bucket Sort:

- Algorithm:
Bucket Sort divides the input into a fixed number of buckets and then separately sorts the elements within each bucket, typically using another sorting algorithm (e.g., insertion sort). Finally, the sorted buckets are concatenated to produce the final sorted array.

- Key Characteristics:
-- Efficient for uniformly distributed input.
-- Can be stable with additional steps.
-- Time complexity depends on the number and distribution of elements in the buckets.

- Time Complexity: 
-- Best Case: O(n+k) - Occurs when the input is uniformly distributed and each element goes directly to its bucket.
- Average Case: O(n+n2 / k+k) - Where k is the number of buckets. Efficiency depends on the distribution of the input.
-- Worst Case: O(n2) - Occurs when all elements are placed in a single bucket, and a quadratic sorting algorithm is used to sort the bucket.

### Tim Sort:

- Algorithm:
Tim Sort is a hybrid sorting algorithm derived from merging principles of Merge Sort and insertion-based techniques. It divides the array into small chunks (or "runs"), sorts them using Insertion Sort, and then merges these runs using a modified Merge Sort.

- Key Characteristics:
-- Hybrid approach combining Merge Sort and Insertion Sort.
-- Designed to handle real-world data efficiently.
-- Stable and adaptive.
-- Widely used and implemented in various programming languages.

- Time Complexity: 
-- Best Case: O(n) - Occurs when the input array is already partially ordered, and the length of the runs is optimal.
-- Average Case: O(nlogn) - Combines the efficiency of Merge Sort with the adaptability of Insertion Sort.
-- Worst Case: O(nlogn) - Same as the average case, as Tim Sort aims to minimize the number of comparisons during merging.###

## 2, What is the Big O notation, and how to evaluate the time complexity of an algorithm

- O(1): Constant time complexity. The algorithm's performance does not depend on the input size.

- O(log n): Logarithmic time complexity. Common in algorithms that divide the input in each step, such as binary search.

- O(n): Linear time complexity. The running time is directly proportional to the size of the input.

- O(n log n): Linearithmic time complexity. Common in efficient sorting algorithms like Merge Sort and Heap Sort.

- O(n^2): Quadratic time complexity. Common in algorithms with nested iterations.

- O(n^k): Polynomial time complexity, where k is a constant exponent greater than 2.

- O(2^n): Exponential time complexity. Common in recursive algorithms that solve a problem of size n by solving two smaller problems.

- O(n!): Factorial time complexity. Common in brute-force algorithms that generate all possible permutations or combinations.

## 3, How to select the best sorting algorithm for a given input

## 4, What is a stable sorting algorithm
