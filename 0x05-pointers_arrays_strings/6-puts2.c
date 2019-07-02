#include "holberton.h"

/**
* puts2 - Print only the characters of 2
* @str: Array to be evaluated
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}
