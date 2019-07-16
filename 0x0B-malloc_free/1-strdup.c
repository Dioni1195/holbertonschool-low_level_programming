#include <stdlib.h>

/**
* _strdup - Copy an array or return NULL
* @str: The string to be copied
*
* Return: On success a pointer.
* On error, NULL is returned.
*/
char *_strdup(char *str)
{
	int i;
	char *buff = malloc(sizeof(str));

	i = 0;
	if (buff == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			buff[i] = str[i];
			i++;
		}
		return (buff);
	}
}

