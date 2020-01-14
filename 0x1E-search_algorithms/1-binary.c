#include "search_algos.h"

/**
  * cpyint -  Create a new array
  * @array: The array
  * @size: The size of the array
  * Return: The new array
   */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		if (i == size - 1)
			printf("%d\n",array[i]);
		else
			printf("%d, ", array[i]);
}

/**
  * binary_search -  Binary search algorithm
  * @array: The array
  * @size: The size of the array
  * @value: The value to compare
  * Return: The index finded or -1
   */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	int *nw_arr = NULL;

	if (!array)
		return (-1);
	print_array(array, size);
	if (size == 1 && value != array[mid])
		return (-1);
	if (value == array[mid])
	{
		return (mid);
	}
	else if (value < array[mid])
		nw_arr = array;
	else if (value > array[mid])
		nw_arr = &array[mid];
	return (binary_search(nw_arr, mid, value));
}
