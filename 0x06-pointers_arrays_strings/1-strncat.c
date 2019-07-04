#include "holberton.h"


/**
* _strncat - writes the character c to stdout
* @dest: The destination array
* @src: The source array
* @n: numbers of bytes
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
char *_strncat(char *dest, char *src, int n)
{
	int tamD, i, j, tot;

	j = 0;
	while (dest[tamD] != '\0')
		++tamD;
	tot = tamD + n;
	for (i = tamD; i <= tot; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[tamD] = '\0';
return (dest);
}
