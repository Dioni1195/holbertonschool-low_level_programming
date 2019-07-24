#include <stdlib.h>

/**
* int_index - Compare each element of an array
* @array: The array to be evaluated
* @size: Size of the array
* @cmp: The fucntion to be used
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
