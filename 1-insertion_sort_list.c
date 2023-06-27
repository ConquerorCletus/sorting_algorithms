#include "sort.h"

/**
 * swap_list - Swap two nodes in a listint_t list.
 * @head: A pointer to the head.
 * @a: 1st node to swap.
 * @b: 2nd node to swap.
 */
void swap_list(listint_t **head, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*head = b;
	(*a)->prev = b;
	*a = b->prev;
}

/**
 * insertion_sort_list - Sorts a list of integers
 * using insertion sort algorithm.
 * @list: head of list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		insertion = current->prev;
		while (insertion != NULL && current->n < insertion->n)
		{
			swap_list(list, &insertion, current);
			print_list((const listint_t *)*list);
		}
	}
}
