#include "sort.h"
/**
 * swap - This function swaps the value of an array.
 * @a: 1st value.
 * @b: 2nd value.
 * Return: void.
 */
void swap(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

/**
 * shell_sort - Sorts an array of integers
 * using the shell sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
        size_t gap, i, j;

        if (array == NULL || size < 2)
                return;

        for (gap = 1; gap < (size / 3);)
                gap = gap * 3 + 1;

        for (; gap >= 1; gap /= 3)
        {
                for (i = gap; i < size; i++)
                {
                        j = i;
                        while (j >= gap && array[j - gap] > array[j])
                        {
                                swap(array + j, array + (j - gap));
                                j -= gap;
                        }
                }
                print_array(array, size);
        }
}

