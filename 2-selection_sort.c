#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @arr: The array to be sorted
 * @size: Size of the array
 */
void selection_sort(int *arr, size_t size)
{
	size_t i, j, min_index;
	int temp
		
	if (arr == NULL || size < 2)
        return;
	
	for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }

        if (min_index != i)
        {
            /* Swap elements */
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;

            /* Print the array after each swap */
            print_array(arr, size);
        }
    }
}

