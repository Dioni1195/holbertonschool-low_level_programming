#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - sum a diag
  * @a: The array to be evaluated
  * @size: size of array
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */
void print_diagsums(int *a, int size)
{
	int i, j, leng, ord, max, sum1, sum2;

	leng = size * size;
	ord = size - 1;
	max = size + 1;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < leng; i += max)
	{
		sum1 += a[i];
	}
	for (j = ord; j < (leng - ord); j += ord)
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
