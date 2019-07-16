#include <stdlib.h>

/**
  * create_array - Create an array of chars
  * @size: Size of the array
  * @c: The char to fill the array
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
char *create_array(unsigned int size, char c)
{
	char *buff = malloc(size);
	unsigned int i;

	if (size == 0 || buff == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			buff[i] = c;
		}
		buff[i] = '\0';
		return (buff);
	}
}

