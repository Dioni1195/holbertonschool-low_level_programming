#include "holberton.h"

/**
  * print_last_digit - Entry point
  *@n: pass the parameter to review
  *
  * Return: Always 0 (Success)
  */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
return (n);
}
