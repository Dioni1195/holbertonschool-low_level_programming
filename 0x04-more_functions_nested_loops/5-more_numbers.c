#include "holberton.h"

/**
* more_numbers - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void more_numbers(void)
{
	int p1, i;

	i = 0;
	while (i < 10)
	{
		for (p1 = 0; p1 <= 14; p1++)
		{
			if (p1 >= 10)
			{
				_putchar(p1 / 10 + '0');
			}
			_putchar(p1 % 10 + '0');
		}
	_putchar('\n');
	i++;
	}
}
