#include "holberton.h"

/**
* *_strcat - writes the character c to stdout
* @dest: The destination array
* @src: The source array
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
char *_strcat(char *dest, char *src)
{
	int tamS, tamD, i, tot, j;

	tamS = 0;
	j = 0;
	tamD = 0;
	while (dest[tamD] != '\0')
		++tamD;
	while (src[tamS] != '\0')
		++tamS;
	tot = tamD + tamS;
	for (i = tamD; i <= tot; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
