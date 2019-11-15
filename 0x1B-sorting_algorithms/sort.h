#ifndef __SORT_H__
#define __SORT_H__

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *a, int *b);
/* Methods Functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_list(listint_t **n1, listint_t **n2);
void selection_sort(int *array, size_t size);
void quickSort(int *array, int low, int high, int size);
int partition(int *array, int low, int high, int size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
int create_array(int *array, int **ptr, int size);
int create_array(int *array, int **ptr, int size);
void merge_sort(int *array, size_t size);

#endif /* __SORT_H__ */
