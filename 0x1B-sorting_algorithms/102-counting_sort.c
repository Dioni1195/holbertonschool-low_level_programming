#include "sort.h"

/**
* counting_sort - Implementation of the counting sort algorithm
* @array: The array
* @size: Size of the array
*
*/
void counting_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, size_arr, *value_arr, value, idx;
	int min, max;

	min = array[0];
	max = array[0];
	while (i < size)
	{
		if (min > array[i])
			min = array[i];
		if (max < array[i])
			max = array[i];
		i++;
	}
	size_arr = max - min;
	value_arr = malloc(sizeof(int) * size_arr);
	if (!value_arr)
		return;
	while (j < size_arr)
	{
		value_arr[j] = 0;
		j++;
	}
	/* Counting the times of appareances */
	for (i = 0; i < size; i++)
	{
		value = array[i];
		value_arr[value] += 1;
	}
	/* Adding values */
	for(j = 1; j < size_arr; j++)
		value_arr[j] += value_arr[j - 1];
	/* Assignning new positions */
	for(i = 0; i < size; i++)
	{
		value = array[i];
		idx = value_arr[value];
		array[idx - 1] = value;
		value_arr[value] -= 1;
	}
	free(value_arr);
}
