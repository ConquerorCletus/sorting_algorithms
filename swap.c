#include "sort.h"
/**
 * swap - This function swap the values of array
 * @a: 1st values
 * @b: 2nd value
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
