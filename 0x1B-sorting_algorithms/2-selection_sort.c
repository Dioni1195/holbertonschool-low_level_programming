#include "sort.h"

/**
 * selection_sort - Implementation of selection
 * @array: The arry to sort
 * @size: The size of the array
 *
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j, tmp, idx;
	int f_pos;

	if (!array || size > 1)
	{
		while (i < size - 1)
		{
			j = i;
			f_pos = array[i];
			while (j < size)
			{
				if (f_pos > array[j + 1] && (j + 1 != size))
				{
					idx = j + 1;
					f_pos = array[j + 1];
				}
				j++;
			}
			if (array[i] > array[idx])
			{
				tmp = array[i];
				array[i] = array[idx];
				array[idx] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
}
