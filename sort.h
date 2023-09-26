#ifndef SORT_H
#define SORT_H


#include <stdlib.h>
#include <stdio.h>


void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

/**
 * struct listint_s - A Doubly linked list node
 *
 * @n: The Integer stored in the node
 * @prev: A pointer to the previous element of the list
 * @next: A pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;




#endif /* SORT_H */
