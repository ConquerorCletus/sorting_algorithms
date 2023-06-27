#include "sort.h"

/**
 * swap - This function swap the values of array
 * @a: 1st value.
 * @b: 2nd value
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * max_heapify - Converts a binary tree into a max heap.
 * @array: Array representing the binary tree.
 * @size: Size of the array/tree.
 * @first: Index of the first row of the tree.
 * @parent_index: Index of the root node of the binary tree.
 */
void max_heapify(int *array, size_t size, size_t first, size_t parent_index)
{
	size_t j, k, largest;

	j = 2 * parent_index + 1;
	k = 2 * parent_index + 2;
	largest = parent_index;

	if (j < first && array[j] > array[largest])
		largest = j;
	if (k < first && array[k] > array[largest])
		largest = k;

	if (largest != parent_index)
	{
		swap(&array[parent_index], &array[largest]);
		print_array(array, size);
		max_heapify(array, size, first, largest);
	}
}

/**
 * heap_sort - Sorts an array of integers using
 * the heap sort algorithm.
 * @array: Array of integers to be sorted.
 * @size: Size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		max_heapify(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		max_heapify(array, size, i, 0);
	}
}
