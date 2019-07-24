#include <stdlib.h>

/**
  * array_iterator - Function that applis an action in each element of an array
  *@array: Array to evaluate
  *@size: Size of the array
  *@action: Action to execute
  *
  * Return: Always 0 (Success)
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
