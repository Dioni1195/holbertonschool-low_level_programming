#include "holberton.h"

/**
* _strlen - writes the character c to stdout
* @s: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
return (i);
}

/**
* _strcpy - writes the character c to stdout
* @dest: The new array
*@src: The array to be copied
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriate
*/
char *_strcpy(char *dest, char *src)
{
	int tam, i;

	tam = _strlen(src);
	i = 0;
	while (i <= tam)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
