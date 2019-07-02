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
	int length_of_the_string, n;

	length_of_the_string = _strlen(str);
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	while (str[n])
	{
	_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
