#include "sort.h"

/**
 * swap - This function swap the values of array
 * @a: 1st value
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

/**
 * selection_sort - Sorts an array of integers using
 * the Selection sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		size_t indexArray = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[indexArray])
				indexArray = j;
		}
		if (indexArray != i)
		{
			swap(&array[i], &array[indexArray]);
			print_array(array, size);
		}
	}
}
