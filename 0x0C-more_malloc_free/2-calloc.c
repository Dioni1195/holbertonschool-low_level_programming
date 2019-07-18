#include <stdlib.h>

/**
  * _calloc - Reserve a memory and set to 0
  * @nmemb: The number of elements
  * @size: Size of each element
  *
  * Return: A pointer.
  * On error, retunr NULL.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, sz = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sz);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sz; i++)
		p[i] = 0;
	return (p);
}
