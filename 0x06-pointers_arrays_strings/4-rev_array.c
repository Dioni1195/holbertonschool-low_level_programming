#include "holberton.h"

/**
* reverse_array - writes the character c to stdout
* @a: The array to reverse
* @n: The lenght of array
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void reverse_array(int *a, int n)
{
	int i, u, l;

	u = n - 1;
	for (i = 0; i <= (n / 2); i++)
	{
		l = a[i];
		a[i] = a[u];
		a[u] = l;
		u--;
	}
}


