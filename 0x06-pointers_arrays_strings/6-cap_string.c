#include "holberton.h"

/**
* _strlen - writes the character c to stdout
* @s: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == 32) ||
				(s[i - 1] == 9 ) ||
				(s[i - 1] == 10) ||
				(s[i -1] == ',') ||
				(s[i - 1] == ';')||
				(s[i -1] == '.') ||
				(s[i - 1] == '!') ||
				(s[i - 1] == '?') ||
				(s[i - 1] == '"') ||
				(s[i - 1] == '(') ||
				(s[i - 1] == ')') ||
				(s[i - 1] == '{') ||
				(s[i - 1] == '}') )
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
	}
return (s);
}
