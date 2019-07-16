#include <stdlib.h>

/**
* _strlen - Calcualte the lenght of an array
* @s: The array to be calculated
*
* Return: On success a pointer.
* On error, NULL is returned.
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
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
	char *buff;

	i = 0;
	if (str == NULL)
		return (NULL);
	buff = malloc(_strlen(str) + 1);
	if (buff == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		buff[i] = str[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
