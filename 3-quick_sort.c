#include "sort.h"

/**
 * my_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm with Lomuto partition scheme
 * @arr: The array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *arr, size_t size)
{
	if (arr == NULL || size < 2)
		return;
	sort_recursive(arr, 0, size - 1, size);
}
/**
 * sort_recursive - Recursive helper function for Quick Sort
 * @arr: The array to be sorted
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: Size of the array
 */
void sort_recursive(int *arr, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = my_partition(arr, low, high, size);
		/* Recursively sort the partitions */
		sort_recursive(arr, low, pivot_index - 1, size);
		sort_recursive(arr, pivot_index + 1, high, size);
	}
}
/**
 * my_partition - Lomuto partition scheme for Quick Sort
 * @arr: The array to be sorted
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: Size of the array
 * Return: The index of the pivot after partitioning
 */
int my_partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			/* Swap elements */
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			/* Print the array after each swap */
			print_array(arr, size);
		}
	}
	/* Swap the pivot element to its correct position */
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	/* Print the array after the final swap */
	print_array(arr, size);
	return (i + 1);
}
