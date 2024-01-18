#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description:
 * This function implements the selection sort algorithm to
 * sort the elements of the array in ascending order. The algorithm
 * divides the array into a sorted and an unsorted region. In each
 * iteration, it finds the minimum element in the unsorted region
 * and swaps it with the first element of the unsorted region.
 * This process continues until the entire array is sorted.
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t counter = 0, selected = 0, inner_counter = 1,
	temp, sub_counter = 0, found_index;

	while (counter < size)
	{
		while (inner_counter < size)
		{
			if (array[sub_counter] > array[inner_counter])
			{
				temp = array[inner_counter];
				found_index = inner_counter;
				sub_counter = inner_counter;
				selected = 1;
			}
			inner_counter++;
		}
		if (selected)
		{
			array[found_index] = array[counter];
			array[counter] = temp;
			selected = 0;
			print_array(array, size);
		}
		counter++;
		sub_counter = counter;
		inner_counter = counter + 1;
	}
}
