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
* puts_half - writes the character c to stdout
* @str: The array to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void puts_half(char *str)
{
	int tam, n, i;

	tam = _strlen(str);
	if (tam % 2 == 0)
	{
		n = tam / 2;
	}
	else
	{
		n = (tam - 1) / 2;
	}
	i = tam - n;
	for (; i < tam; i++)
	{
	_putchar(str[i]);
	}
	_putchar(10);
}
