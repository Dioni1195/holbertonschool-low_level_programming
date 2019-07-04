#include "holberton.h"

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
	int i, res;

	res = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}
return (res);
}


