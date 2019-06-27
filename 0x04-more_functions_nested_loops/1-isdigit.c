#include "holberton.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _isdigit(int c)
{
	int i, r;

	r = 0;
	for (i = 48; i <= 57; i++)
	{
		if ( c == i)
		{
			r = 1;
		}
	}
return (r);
}
