#include <stdlib.h>
/**
  * malloc_checked- Check the reservation of the memory
  * @b: The memory to reserve
  *
  * Return: A pointer.
  * On error, retunr NULL.
  */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
