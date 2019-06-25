#include "holberton.h"

/**
* print_sign - Entry point
*@n: pass the parameter to review
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		i = 0;
	}
	else
	{
		_putchar(45);
		i = -1;
	}
return (i);
}
