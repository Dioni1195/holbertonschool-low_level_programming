#include "holberton.h"

/**
* string_toupper - Change a character from an array
* @s: The array to be evaluated
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
return (s);
}
