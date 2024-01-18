#include "sort.h"

/*
 * node_swapper - Swap adjacent nodes if needed
 * @list: Pointer to the current node
 * @root: Pointer to the root of the linked list
 *
 * This function swaps the current node with its next node if the current
 * node's value is greater than the next node's value. It updates the root
 * pointer if the first element is swapped.
 * The list is printed after each swap.
 *
 * Return: Pointer to the current node after swapping.
 */

listint_t *node_swapper(listint_t *list, listint_t **root)
{
	listint_t *temp_next, *temp_prev;

	if (list == NULL)
		return (NULL);

	if (list->n > list->next->n)
	{
		temp_next = list->next;
		temp_prev = list->prev;
		/* make current node tobe next node*/
		list->next = temp_next->next;
		list->prev = temp_next;

		/* make next node tobe current node*/
		temp_next->next = list;
		temp_next->prev = temp_prev;
		if (temp_prev)
			temp_prev->next = temp_next;
		else
			*root = temp_next;
		print_list(*root);
		list->prev = node_swapper(temp_prev, root);
		if (list->prev == NULL)
			list->prev = *root;
		return (list);
	}
	return (list->next);
}

/*
 * insertion_sort_list - Sort a doubly linked list using insertion
 * sort algorithm
 * @list: Pointer to the head of the linked list
 *
 * This function sorts a doubly linked list in ascending order using the
 * insertion sort algorithm. The list is modified in place.
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;

	while (current->next)
	{
		if (current->next != NULL)
		{
			current = node_swapper(current, list);
		}
	}
}
