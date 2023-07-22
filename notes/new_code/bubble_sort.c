#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp;

	/* a = tmp; */
	/* tmp = b; */
	/* b = a; */

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(int *arr, size_t n)
{
	size_t i, j;

	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[ j], &arr[j + 1]);
		}

	}
}
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}


int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    /* array = bubble(array, n); */
	print_array(array, n);
    printf("\n");
    bubble(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}

