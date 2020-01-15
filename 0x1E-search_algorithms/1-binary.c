#include "search_algos.h"

/**
  * print_array -  Print an array
  * @array: The array
  * @prev: The first pos
  * @next: The last pos
  * Return: The new array
   */
void print_array(int *array, int prev, int next)
{
	int i;

	printf("Searching in array: ");
	for (i = prev; i <= next; i++)
		if (i == next)
			printf("%d\n", array[i]);
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
	int prev, next, mid;

	if (!array)
		return (-1);
	prev = 0;
	next = (int)(size - 1);
	while (prev != next)
	{
		print_array(array, prev, next);
		mid = (prev + next) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			next = mid - 1;
		else
			prev = mid + 1;
	}
	print_array(array, prev, next);
	if (array[prev] == value)
		return (prev);
	return (-1);
}
