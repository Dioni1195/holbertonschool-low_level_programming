#include "holberton.h"

/**
* print_rev - writes the character c to stdout
* @s: The pointer that has the array
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int wrd, i;

	i = 0;
	while (s[i])
	{
		++i;
	}
	wrd = i-1;
	while (wrd >= 0)
	{
		_putchar(s[wrd]);
		wrd--;
	}
	_putchar(10);
}
