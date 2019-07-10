#include "holberton.h"

/**
* _puts_recursion - Print a string
* @s: The array that have the string to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
}
