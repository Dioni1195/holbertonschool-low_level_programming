#include "holberton.h"

/**
* jack_bauer - Entry point
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int h, m, s, cs;

	for (h = 48; h <= 50; h++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (s = 48; s <= 53; s++)
			{
				for (cs = 48; cs <= 57; cs++)
				{
					if (h <= 49)
					{
						_putchar(h);
						_putchar(m);
						_putchar(58);
						_putchar(s);
						_putchar(cs);
						_putchar('\n');
					}
					if ((h == 50) && (m <= 51))
					{
						_putchar(h);
						_putchar(m);
						_putchar(58);
						_putchar(s);
						_putchar(cs);
						_putchar('\n');
					}
				}
			}
		}
	}
}


