#include "holberton.h"
#include <stdio.h>
/**
  * string_toupper - Change a character from an array
  * @s: The array to be evaluated
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */
void print_diagsums(int *a, int size)
{
	int i, j, sum, **p;

	sum = 0;
	p = &a;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = 0 + p[i][j];
			}
		}
	}
	putchar(sum + '0');
}
