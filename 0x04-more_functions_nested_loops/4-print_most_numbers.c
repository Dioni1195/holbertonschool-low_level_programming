#include "holberton.h"

/**
* print_most_numbers - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if ((num != 50) && (num != 52))
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
