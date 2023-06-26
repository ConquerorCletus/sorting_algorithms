#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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

void swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubblesort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL && size == 0)
		return;
	for(i = 0; i < size - 1; ++i)
	{
		for(j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}

		}
	}
}


int main(void)
{
	int array[] = {4,7,8,3,1,6};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);

}

