#include "sort.h"

/*
 * File: 0-bubble_sort.c
 * Author: Mohammed Ak
 */

/**
 * bubble_sort - Sorts an array wity the bubble sort algorithm
 * @size: The size of the array to sort
 * @array: The array to be sorted
 * Return: Null
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t j, i;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
