#include "holberton.h"

/**
  * reset_to_98 - writes the character c to stdout
  * @n: The pointer that link to the address of variable to be modified
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
void reset_to_98(int *n)
{
	*n = 98;
}
