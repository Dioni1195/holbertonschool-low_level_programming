#include "holberton.h"

/**
 * print_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
