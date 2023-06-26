#include "sort.h"

/**
 * swapNodes - This function is to swap nodes
 * @a: 1st node
 * @b: 2nd node
 * @head: pointer to the head
 * Return: void
 */
void swapNodes(listint_t **head, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	else
		*head = b;

	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;

	print_list(*head);
}

/**
 * insertion_sort_list - This sort according to the jion
 * algorithm
 * @list: pointer to the head
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	i = (*list)->next;
	while (i)
	{
		tmp = i;
		i = i->next;

		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			swapNodes(list, tmp->prev, tmp);
		}
	}
}
