#include "sort.h"

/**
 * find_max - Find the maximum value in an array of integers.
 * @array: The array.
 * @size: The size of the array.
 * Return: The maximum integer in the array.
 */
int find_max(int *array, int size)
{
	int max_val = array[0];
	int i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max_val)
			max_val = array[i];
	}

	return (max_val);
}

/**
 * counting_sort - Sort an array of integers in ascending order
 * using the counting sort algorithm.
 * @array: The array.
 * @size: The size of the array.
 */
void counting_sort(int *array, size_t size)
{
	int *sorted_array, *count_array;
	int max_val, i;

	if (array == NULL || size < 2)
		return;

	sorted_array = malloc(sizeof(int) * size);
	if (sorted_array == NULL)
		return;

	max_val = find_max(array, size);
	count_array = malloc(sizeof(int) * (max_val + 1));
	if (count_array == NULL)
	{
		free(sorted_array);
		return;
	}

	for (i = 0; i <= max_val; i++)
		count_array[i] = 0;

	for (i = 0; i < (int)size; i++)
		count_array[array[i]] += 1;

	for (i = 1; i <= max_val; i++)
		count_array[i] += count_array[i - 1];

	print_array(count_array, max_val + 1);

	for (i = size - 1; i >= 0; i--)
	{
		sorted_array[count_array[array[i]] - 1] = array[i];
		count_array[array[i]] -= 1;
	}

	for (i = 0; i < (int)size; i++)
		array[i] = sorted_array[i];

	free(sorted_array);
	free(count_array);
}

