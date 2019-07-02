#include "holberton.h"

/**
  * swap_int - swap two digits
  * @a: First digit
  * @b: Second digit
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
void swap_int(int *a, int *b)
{
	int pa = *a;
	int pb = *b;

	*a = pb;
	*b = pa;
}
