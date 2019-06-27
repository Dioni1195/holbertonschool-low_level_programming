#include "holberton.h"

/**
* print_diagonal - writes the character c to stdout
* @n: The number of times to print /
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				j = i;
				while (j > 0)
				{
					_putchar(32);
					j--;
				}
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

