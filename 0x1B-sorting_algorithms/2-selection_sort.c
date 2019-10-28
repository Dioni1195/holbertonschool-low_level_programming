#include "sort.h"

/**
 * selection_sort - Implementation of selection
 * @array: The arry to sort
 * @size: The size of the array
 *
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j, tmp, f_pos;

	if (!array || size > 1)
	{
		while (i < size - 1)
		{
			j = i + 1;
			f_pos = i;
			while (j < size)
			{
				if (array[j] < array[f_pos])
					f_pos = j;
				j++;
			}
			if (f_pos != i)
			{
				tmp = array[i];
				array[i] = array[f_pos];
				array[f_pos] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
}
