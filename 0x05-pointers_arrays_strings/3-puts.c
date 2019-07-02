#include "holberton.h"

/**
* _puts - writes the character c to stdout
* @str: The pointer that has the array
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void _puts(char *str)
{
	int wrd;

	while (str[wrd])
	{
		_putchar(str[wrd]);
		wrd++;
	}
	_putchar(10);
}
