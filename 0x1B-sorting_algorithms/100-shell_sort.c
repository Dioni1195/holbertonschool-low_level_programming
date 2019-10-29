#include "sort.h"

/**
* shell_sort - Implementation of the shell algorithm
* @array: The array to be sorted
* @size: The size of the array
*
*/
void shell_sort(int *array, size_t size)
{
	size_t interval = 0, outer, inner;
	int value;

	if (!array || size <= 1)
		return;
	while (interval < (size))
		interval = interval * 3 + 1;
	interval = (interval - 1) / 3;
	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
		value = array[outer];
		inner = outer;
		while (inner > (interval - 1)  && (array[inner - interval] > value))
		{
			array[inner] = array[inner - interval];
			inner -= interval;
		}
		array[inner] = value;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
