#include "sort.h"

/**
 * swap - swap two elements in array
 * @array: element of array to swap
 * @array2: element of array to swap
 */
void swap(int *array, int *array2)
{
	int tmp;

	tmp = *array;
	*array = *array2;
	*array2 = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	/* check if array exist and have a length*/
	if (array == NULL || size <= 0)
		return;

	/* beginning of the unsorted array */
	for (i = 0; i < size - 1; i++)
	{
		/* look for the minimum element */
		for (j = k = i; j < size; j++)
		{
			/* set k to the new minimum element */
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		/* only if there is a new minimum element */
		if (k != i)
		{
			swap(&array[i], &array[k]);
			print_array(array, size);
		}
	}
}
