#include "sort.h"

/*
 * File: 2-selection_sort.c
 * Author: Mohammed Ak
 */

/**
 * swap - swaps two numbers in place
 * @a: the first number
 * @b: the second number
 **/

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts array using selection the selection sort algorithm
 * @array: The array to be sorted
 * @size: Size of array to be sorted
 *
 */

void selection_sort(int *array, size_t size)
{
	unsigned int j, i, minimum;

	if (array == NULL || size < 2)
		(return)

	for (i = 0; i < size; i++)
	{
		minimum = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[minimum] > array[j])
				minimum = j;
		}

		if (minimum != i)
		{
			swap(&array[i], &array[minimum]);
			print_array(array, size);
		}
	}
}
