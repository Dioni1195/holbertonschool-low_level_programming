#include <stdlib.h>

/**
  * array_range - Create an array range
  * @min: The minimun value
  * @max: The max value
  *
  * Return: A pointer.
  * On error, retunr NULL.
  */
int *array_range(int min, int max)
{
	int i, cont = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[cont] = i;
		cont++;
	}
	return (p);
}
