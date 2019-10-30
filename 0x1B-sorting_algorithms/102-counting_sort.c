#include "sort.h"

/**
* counting_sort - Implementation of the counting sort algorithm
* @array: The array
* @size: Size of the array
*
*/
void counting_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, value, idx;
	int max, *value_arr, *tmp;

	if (array != NULL && size > 1)
	{
		max = array[0];
		tmp = malloc(sizeof(int) * size);
		if (!tmp)
			return;
		while (i < size)
		{
			tmp[i] = array[i];
			if (max < array[i])
				max = array[i];
			i++;
		}
		value_arr = malloc(sizeof(int) * (max + 1));
		if (!value_arr)
			return;
		while (j < (size_t)(max + 1))
		{
			value_arr[j] = 0;
			j++;
		}
		for (i = 0; i < size; i++)
		{
			value = array[i];
			value_arr[value] += 1;
		}
		for (j = 1; j < (size_t)(max + 1); j++)
			value_arr[j] += value_arr[j - 1];
		print_array(value_arr, max + 1);
		for (i = 0; i < size; i++)
		{idx = value_arr[tmp[i]];
			array[idx - 1] = tmp[i];
			value_arr[tmp[i]] -= 1;
		}
		free(tmp);
		free(value_arr);
	}}
