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

/* Structure for a doubly linked list node */
typedef struct listint_s {
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
}listint_t;

/* Function to print a doubly linked list */
void print_list(const listint_t *list);

/* Function to perform Insertion Sort on a doubly linked list */
void insertion_sort_list(listint_t **list);

/* Function to sort an array of integers using Selection sort */
void selection_sort(int *arr, size_t size);

/* Function to sort an array of integers using my_sort (Quick sort) */
void my_sort(int *arr, size_t size);

/* Recursive helper function for Quick Sort */
void sort_recursive(int *arr, int low, int high, size_t size);

/* Lomuto partition scheme for Quick Sort */
int my_partition(int *arr, int low, int high, size_t size);

#endif /* SORT_H */
