#include "sort.h"

/**
 * swapNodes - Swap two nodes in a listint_t list.
 * @head: Pointer to the head of the list
 * @a: 1st node to swap
 * @b: 2nd node to swap
 */
void swapNodes(listint_t **head, listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	else
		*head = b;

	if (b->next != NULL)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 * using the Cocktail Shaker Sort algorithm
 * @head: Pointer to the head of the list
 */
void cocktail_sort_list(listint_t **head)
{
	listint_t *start = *head;
	listint_t *end = NULL;
	int updatedIdx = 1;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;

	while (updatedIdx != 0)
	{
		updatedIdx = 0;

		while (start->next != end)
		{
			if (start->n > start->next->n)
			{
				swapNodes(head, start, start->next);
				updatedIdx = 1;
				print_list(*head);
			}
			else
				start = start->next;
		}

		end = start;

		if (updatedIdx == 0)
			break;
		while (start->prev != NULL)
		{
			if (start->n < start->prev->n)
			{
				swapNodes(head, start->prev, start);
				updatedIdx = 1;
				print_list(*head);
			}
			else
				start = start->prev;
		}
		start = start->next;
	}
}
