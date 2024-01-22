#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size);

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Size of the array
 */
void print_array(const int *array, size_t size);

#endif /* SORT_H */
