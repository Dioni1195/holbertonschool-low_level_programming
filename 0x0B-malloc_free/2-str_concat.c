#include <stdlib.h>

/**
* _strlen - Calculate lenght
* @s: The array
*
* Return: A pointer.
* On error, retunr NULL.
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
* str_concat- Concatenate two arrays
* @s1: The first array
* @s2: The second array
*
* Return: A pointer.
* On error, retunr NULL.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, in, tam;
	char *buff;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	tam = (_strlen(s1) + _strlen(s2));
	buff = malloc(tam + 1);
	in = 0;
	if (buff == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		buff[i] = s1[i];
	for (j = i; s2[in] != '\0'; j++)
	{
		buff[j] = s2[in];
		in++;
	}
	buff[j] = '\0';
	return (buff);
}
