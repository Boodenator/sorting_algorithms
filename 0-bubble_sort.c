#include "sort.h"

/**
 * bubble_sort - sorting the array of integers into ascending order by the
 * Bubble sort algorithm
 * @array: Sorted Array
 * @size: Array Size
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n, new_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new_n = i + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
