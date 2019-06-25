#include "holberton.h"

/**
* times_table - Entry point
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m <= 9)
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(m + '0');
			}
			else if (m > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
		}
		_putchar('\n');
	}
}


