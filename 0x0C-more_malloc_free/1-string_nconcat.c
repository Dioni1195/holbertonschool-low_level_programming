#include <stdlib.h>

/**
  * _strlen - Calcualte the lenght of an array
  * @s: The array to be calculated
  *
  * Return: On success a pointer.
  * On error, NULL is returned.
  */

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * string_nconcat - Concatenate an array with the n bytes of the other array
  * @s1: The first array
  * @s2: The second array
  * @n: Number of bytes to concatenate
  *
  *
  * Return: On success a pointer.
  * On error, NULL is returned.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	int cont = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);
	p = malloc(sizeof(char) * _strlen(s1) + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[cont] = s1[i];
		cont++;
	}
	for (j = 0; j < n; j++)
	{
		p[cont] = s2[j];
		cont++;
	}
	p[cont] = '\0';
	return (p);
}
