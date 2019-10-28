#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t newn = 0, i, n = size;
	int tmp;

	do {
		newn = 0;
		for (i = 1; i <= n - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				newn = i;
				print_array(array, size);
			}
		}
		n = newn;
	} while (n > 1);
}
