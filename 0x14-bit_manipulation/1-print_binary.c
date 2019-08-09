#include "holberton.h"
/**
 * recur_bin - Function to convert recursively a decimal to binary
 * @n: The number
 *
 * Return: nothing
*/
void recur_bin(unsigned long int n)
{
	if ((n >> 1) < 1)
		_putchar((n & 1) + '0');
	else
	{
		recur_bin(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - Function to print a decimal number in binary
 * @n: The number
 *
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
		recur_bin(n);
}
