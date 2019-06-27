#include "holberton.h"

/**
* _isupper - writes the character c to stdout
* @c: The integer that indicates if the letter is Upper
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _isupper(int c)
{
	int up, r;

	r = 0;
	for (up = 65; up <= 90; up++)
	{
		if (c == up)
		{
			r = 1;
		}
	}
return (r);
}
