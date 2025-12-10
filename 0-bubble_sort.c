#include "sort.h"

/**
 * bubble_sort - array order using bubble sort algorithm
 * @array: pointer to array
 * @size: number of element
 * Return: bubble sort algorithm
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t swap;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j + 1];
				array[j + 1] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
}
