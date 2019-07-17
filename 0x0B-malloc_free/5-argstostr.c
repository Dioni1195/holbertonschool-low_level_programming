#include <stdlib.h>
#include <stdio.h>
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
  * argstostr - Concatenate parameters
  * @av: Array of pointers to parameters
  * @ac: count of parameters
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, sum = 0, cont = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sum += _strlen(*(av + i));
	p = malloc(sizeof(char) * (sum + ac));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (i = 0; i < _strlen(*(av + j)); i++)
		{
			p[cont] = *(*(av + j) + i);
			cont++;
		}
		p[cont] = '\n';
		cont++;
	}
	p[cont] = '\0';
	return (p);
}

