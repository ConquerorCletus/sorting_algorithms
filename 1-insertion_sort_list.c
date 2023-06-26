#include "sort.h"

/**
 * swapNodes - This function is to swap nodes
 * @a: 1st node
 * @b: 2nd node
 * @head: pointer to the head
 * Return: void
 */
void swapNodes(listint_t **head, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;

	if ((*a)->next != NULL)
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
 * insertion_sort_list - This sort according to the jion
 * algorithm
 * @list: pointer to the head
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *tmp;

	if (list == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		j = i->prev;
		while (j != NULL && i->n < j->n)
		{
			swapNodes(list, &j, i);
			print_list((const listint_t *)*list);
		}
	}
}
