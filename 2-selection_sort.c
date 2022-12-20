#include "sort.h"

/**
 * selection_sort - sorts an array of numbers in selection sort algorithm
 * @array: input array of integers
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, p, m;

	for (i = 0; i < size; i++)
	{
		m = i;
		for (p = i + 1; p < size; p++)
		{
			if (array[m] > array[p])
				m = p;
		}

		if (i != m)
		{
			tmp = array[i];
			array[i] = array[m];
			array[m] = tmp;
			print_array(array, size);
		}
	}
}
