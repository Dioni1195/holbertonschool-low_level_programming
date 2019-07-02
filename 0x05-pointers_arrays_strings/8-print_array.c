#include "holberton.h"
#include <stdio.h>

/**
* print_array - print an array
* @a: The array to print
* @n: The lenght of array
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	putchar(10);
}
