#include "holberton.h"

/**
* leet  - leet
* @s: The array to decifry
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
char *leet(char *s)
{
	char num[5] = {'4', '3', '0', '7', '1'};
	char let[5][2] = {
		{'a', 'A'}, { 'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}
	};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j][0] || s[i] == let[j][1])
			{
				s[i] = num[j];
			}
		}
	}
return (s);
}
