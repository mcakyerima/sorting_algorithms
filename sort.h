#ifndef SORT_H
#define SORT_H


#include <stdlib.h>
#include <stdio.h>




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

void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);


#endif /* SORT_H */
