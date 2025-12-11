#include "sort.h"

/**
 * selection_sort - sort array using selection sort
 * @array: pointer to array
 * @size: number of element
 * Return: Fabulous array
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t swap;
	size_t numsmall;

	for (i = 0; i < size - 1; i++)
	{
		numsmall = i;

		for (j = i + 1; j < size; j++)
		{

			if (array[j] < array[numsmall])
			{
				numsmall = j;
			}
		}

		if (numsmall != i)
		{
			swap = array[i];
			array[i] = array[numsmall];
			array[numsmall] = swap;
			print_array(array, size);
		}
	}
}
