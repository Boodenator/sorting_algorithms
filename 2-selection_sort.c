#include "sort.h"

/**
 * selection_sort - sorting array of integers to ascending order by the
 * sort algorithm selection
 * @array: Sorted Array
 * @size: Array Size
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			swap = array[i];
			array[i] = array[min];
			array[min] = swap;
			print_array(array, size);
		}
	}
}
