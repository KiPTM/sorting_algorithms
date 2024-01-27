#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int my_temp;
	int swpped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swpped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap elements */
				my_temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = my_temp;
				swpped = 1;
				/* Print the array after each swap */
				print_array(array, size);
			}
		}
		/* If no two elements were swapped by inner loop, the array is sorted */
		if (swpped == 0)
			break;
	}
}
