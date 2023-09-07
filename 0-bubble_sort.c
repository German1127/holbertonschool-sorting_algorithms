#include "sort.h"

/**
* bubble_sort - Function that sorts an array of numbers using the bubble sort algorithm
* @array: array of numbers to be reordered
* @size: size of the array
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, m;
	int temp, swap;

	for (m = size, swap = 1; m > 0 && swap; m--)
	{
		swap = 0;
		for (i = 0; (i + 1) < m; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
