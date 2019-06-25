#include "holberton.h"

/**
  * print_last_digit - Entry point
  *@n: pass the parameter to review
  *
  * Return: Always 0 (Success)
  */

int print_last_digit(int n)
{
	int ult;

	if (n < 0)
	{
		n = n * -1;
	}
	ult = n % 10;
	_putchar(ult + '0');
return (ult);
}
