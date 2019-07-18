#include <stdlib.h>

/**
  * _realloc - Realloc a memory
  * @ptr: The array
  * @old_size: Old size
  * @new_size: New size
  *
  * Return: A pointer.
  * On error, retunr NULL.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newArr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newArr = malloc(new_size + 1);
	if (newArr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (newArr);
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			newArr[i] = *((char *)ptr + i);
		free(ptr);
		newArr[i] = '\0';
	}
	else
	{
		for (i = 0; i < old_size; i++)
			newArr[i] = *((char *)ptr + i);
	}
	free(ptr);
	return (newArr);
}
