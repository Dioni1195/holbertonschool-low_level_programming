#include "holberton.h"

/**
* _strlen - Calculate the large of an array
* @s: The array to count
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
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
* _strcmp - writes the character c to stdout
* @s1: The first character to compare
* @s2: The second character to compare
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _strcmp(char *s1, char *s2)
{
	int tam1, tam2, i;

	tam1 = _strlen(s1);
	tam2 = _strlen(s2);
	if (tam1 > tam2)
	{
		i = 15;
	}
	else if (tam1 == tam2)
	{
		i = 0;
	}
	else
	{
		i = -15;
	}
return (i);
}


