#include "holberton.h"

/**
* print_triangle - writes the character c to stdout
* @size: Size of triangle
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_triangle(int size)
{
	int i, j, num, esp;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			num = i + 1;
			for (j = size - 1; j < size; j++)
			{
				esp = size - num;
				while (esp > 0)
				{
					_putchar(32);
					esp--;
				}
				while (num > 0)
				{
					_putchar(35);
					num--;
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

