#include "sort.h"

/**
 * @brief Perform a single pass of the Bubble Sort algorithm.
 *
 * This function compares adjacent elements in the array and
 * swaps them if they are in the wrong order. It repeats this
 * process until the end of the array is reached.
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t counter = 0;
	int temp = 0, swapped = 0;

	while (counter < size - 1)
	{
		if (array[counter] > array[counter + 1])
		{
			temp = array[counter];
			array[counter] = array[counter + 1];
			array[counter + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}
		counter = counter + 1;
	}
	if (swapped == 0)
		return;
	bubble_sort(array, size);
}
