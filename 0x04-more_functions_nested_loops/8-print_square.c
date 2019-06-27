#include "holberton.h"

/**
 * print_square - writes the character c to stdout
 * @size: Size of the square
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
