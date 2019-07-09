#include "holberton.h"

/**
* print_chessboard - Print a chessboard
* @a: The matrix
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
