#include "sort.h"

/**
  * partition - the partition that will be done by our quicksort
  * @array: the array given
  * @low: the lowest number.
  * @highest: the highest number
  * @size: Size of the array
  * Return: the integer used for the partition
  */
int partition(int *array, int low, int highest, size_t size)
{
	int pivoter = array[highest], i = low, j, tmp;

	for (j = low; j < highest; j++)
	{
		if (array[j] < pivoter)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[highest];
	array[highest] = tmp;
	if (i != j)
		print_array(array, size);
	return (i);
}
/**
  * quicksort - implements the quicksort functions
  * @array: the array that will be sorted
  * @low: the lowest point in the array
  * @highest: the highest point of the array
  * @size: The size of the array
  */
void quicksort(int *array, int low, int highest, size_t size)
{
	int pivot;

	if (low < highest)
	{
		pivot = partition(array, low, highest, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, highest, size);
	}
}
/**
  * quick_sort - the base function in which we will call our quicksort
  * @array: the array given
  * @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array != NULL || size > 1)
		quicksort(array, 0, size - 1, size);
}
