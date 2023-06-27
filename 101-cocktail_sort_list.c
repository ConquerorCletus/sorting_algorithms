#include "sort.h"

/**
 * swap_ahead_node - Swap a node in a listint_t doubly-linked list
 *                   with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @current: A pointer to the current swapping node of the
 * cocktail shaker algorithm.
 */
void swap_ahead_node(listint_t **list, listint_t **tail, listint_t **current)
{
	listint_t *tmp = (*current)->next;

	if ((*current)->prev != NULL)
		(*current)->prev->next = tmp;
	else
		*list = tmp;
	tmp->prev = (*current)->prev;
	(*current)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *current;
	else
		*tail = *current;
	(*current)->prev = tmp;
	tmp->next = *current;
	*current = tmp;
}

/**
 * swap_behind_node - Swap a node in a listint_t doubly-linked
 *                    list with the node behind it.
 * @list: A pointer to the head of a doubly-linked list.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @current: A pointer to the current swapping node of the
 * cocktail shaker algorithm.
 */
void swap_behind_node(listint_t **list, listint_t **tail, listint_t **current)
{
	listint_t *tmp = (*current)->prev;

	if ((*current)->next != NULL)
		(*current)->next->prev = tmp;
	else
		*tail = tmp;
	tmp->next = (*current)->next;
	(*current)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *current;
	else
		*list = *current;
	(*current)->next = tmp;
	tmp->prev = *current;
	*current = tmp;
}

/**
 * cocktail_sort_list - Sort a listint_t doubly-linked list of integers
 *                      in ascending order using the cocktail shaker algorithm.
 * @list: A pointer to the head of a listint_t doubly-linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tail, *current;
	bool shaken_not_stirred = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (tail = *list; tail->next != NULL;)
		tail = tail->next;

	while (!shaken_not_stirred)
	{
		shaken_not_stirred = true;
		for (current = *list; current != tail; current = current->next)
		{
			if (current->n > current->next->n)
			{
				swap_ahead_node(list, &tail, &current);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
			}
		}
		for (current = current->prev; current != *list; current = current->prev)
		{
			if (current->n < current->prev->n)
			{
				swap_behind_node(list, &tail, &current);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
			}
		}
	}
}
