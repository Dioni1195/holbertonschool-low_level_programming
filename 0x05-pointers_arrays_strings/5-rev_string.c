#include "holberton.h"
#include <stdio.h>

/**
  * _puts - writes the character c to stdout
  * @str: The pointer that has the array
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0' )
	{
		++i;
	}
return (i);
}

void rev_string(char *s)
{
	char m[9];
	int tam, i, j, rev;

	tam = _strlen(s);
	printf("%d\n",tam);
	for (i = 0; i <= tam; i++)
	{
		m[i] = s[i];
	}
	j = 0;
	for (rev = tam; rev >= 0; rev--)
	{
		s[j] = m[rev];
		++j;
	}
}
