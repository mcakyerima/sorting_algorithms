#include "sort.h"
/**
 * File: 1-insertion_sort_list.c
 * Author: Mohammed Ak
 */

/**
 * swap_backward - swaps two nodes from the right  and left position
 * @c: the list pointer
 *
 **/
void swap_backward(listint_t *c)
{
	listint_t *temp, *head;

	while (c->prev != NULL)
	{
		if (c->n < c->prev->n)
		{
			temp = c->prev->prev;
			c->prev->next = c->next;
			c->next = c->prev;
			c->prev->prev = c;
			c->prev = temp;
			c->next->next->prev = c->next;
			if (temp != NULL)
				temp->next = c;
			head = c;
			while (head->prev != NULL)
				head = head->prev;
			print_list(head);
		}
		else
			c = c->prev;
	}
}
/**
 * swap_forward - swap two nodes from the left rigth position
 * @c: the list pointer
 *
 **/
void swap_forward(listint_t *c)
{
	listint_t *temp, *head;

	temp = c->prev;

	if (temp != NULL)
	{
		temp->next = c->next;
		c->next->prev = temp;
	}
	else
		c->next->prev = NULL;
	c->prev = c->next;
	if (c->next->next != NULL)
	{
		c->next = c->next->next;
		c->prev->next = c;
		c->next->prev = c;
	}
	else
	{
		c->next->next = c;
		c->next = NULL;
	}
	head = c;
	while (head->prev != NULL)
		head = head->prev;
	print_list(head);
	swap_backward(c->prev);
}
/**
 * insertion_sort_list - sorts a doubly linked list using the  insertion algorithm
 * @list: the list to be sorted
 *
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *c;

	if ((list == NULL) || (*list == NULL) || ((*list)->next == NULL))
		return;
	c = *list;

	while (c->next != NULL)
	{
		if (c->n > c->next->n)
		{
			swap_forward(c);
		}
		else
			c = c->next;
	}
	while ((*list)->prev != NULL)
		*list = (*list)->prev;
}
