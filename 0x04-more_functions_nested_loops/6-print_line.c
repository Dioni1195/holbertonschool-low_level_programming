#include "holberton.h"

/**
* print_line - writes the character c to stdout
* @n: Times to print -
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
