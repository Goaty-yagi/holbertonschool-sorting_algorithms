#include "sort.h"

/**
 * swap - Swaps two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of two integers.
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Partitions an array using the Lomuto scheme.
 *
 * @array: The array to be partitioned.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 *
 * Description: This function implements the Lomuto partition scheme
 * for Quick Sort. It selects the last element as the pivot and
 * rearranges the elements such that all elements less than or equal
 * to the pivot are on the left, and all elements greater than the
 * pivot are on the right.
 *
 * Return: The final position of the pivot.
 */

size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high]; /* pivot is the last int of the array or subarray */
	size_t partition_index = low - 1, inner_counter = low;

	while (inner_counter <= high - 1)
	{
		if (array[inner_counter] <= pivot)
		{
			partition_index = partition_index + 1;
			if (array[partition_index] != array[inner_counter])
			{
				swap(&array[partition_index], &array[inner_counter]);
				print_array(array, size);
			}
		}
		inner_counter = inner_counter + 1;
	}
	swap(&array[partition_index + 1], &array[high]);
	print_array(array, size);
	return (partition_index + 1); /*no less than pivot*/
}

/**
 * quick_sort_recursive - Recursively sorts an array using Quick Sort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the array or subarray.
 * @high: The ending index of the array or subarray.
 *
 * Description: This function is a recursive implementation of the
 * Quick Sort algorithm. It repeatedly partitions the array and
 * sorts the subarrays until the entire array is sorted.
 *
 * Return: void
 */

void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)
{
	size_t partition_index;

	if (low < high)
	{
		partition_index = lomuto_partition(array, low, high, size);

		if (partition_index > 0)
		{
			quick_sort_recursive(array, low, partition_index - 1, size);
		}
		quick_sort_recursive(array, partition_index + 1, high, size); /*new pivot*/
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description: This is the main function to sort an array using Quick Sort.
 * It checks for invalid or already sorted arrays and then calls the
 * recursive sorting function.
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	{
		return;
	}
	quick_sort_recursive(array, 0, size - 1, size);
}
