#include <stdlib.h>

/**
* str_concat- Concatenate two arrays
* @s1: The first array
* @s2: The second array
*
* Return: A pointer.
* On error, retunr NULL.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, in, tam = sizeof(s1) + sizeof(s2);
	char *buff = malloc(tam);

	in = 0;
	if (buff == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			buff[i] = s1[i];
		}
		for (j = i; s2[in] != '\0'; j++)
		{
			buff[j] = s2[in];
			in++;
		}
		buff[j] = '\0';
		return (buff);
	}
}
