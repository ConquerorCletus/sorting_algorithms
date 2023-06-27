#include "sort.h"

/**
 * swap - This function swaps the value of array.
 * @a: 1st value.
 * @b: 2nd value.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Selects the pivot
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: left partition.
 * @right: right partition.
 *
 * Return: The Pivot.
 */
int partition(int *array, size_t size, int left, int right)
{
	int *pivot, low, high;

	pivot = array + right;
	for (low = high = left; high < right; high++)
	{
		if (array[high] < *pivot)
		{
			if (low < high)
			{
				swap(array + high, array + low);
				print_array(array, size);
			}
			low++;
		}
	}

	if (array[low] > *pivot)
	{
		swap(array + low, pivot);
		print_array(array, size);
	}

	return (low);
}

/**
 * qsort_recursive - Recursively sorts the array with
 * quicksort algorithm.
 * @array: Array to sort.
 * @size: The size of the array.
 * @left: The starting index of left array partition.
 * @right: The ending index of right array partition.
 */
void qsort_recursive(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = partition(array, size, left, right);
		qsort_recursive(array, size, left, part - 1);
		qsort_recursive(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sort an array using quicksort algorithm.
 * @array: Unsorted array.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	qsort_recursive(array, size, 0, size - 1);
}
