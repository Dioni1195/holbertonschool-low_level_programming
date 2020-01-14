#include "search_algos.h"

/**
  * linear_search -  Search linear
  * @array: The array
  * @size: The size of the array
  * @value: The value to compare
  * Return: The index finded or NULL
   */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
