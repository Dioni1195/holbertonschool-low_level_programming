#include <stdlib.h>

/**
* alloc_grid - Create a grid
* @width: width of the array
* @height: height of the array
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int **alloc_grid(int width, int height)
{
	int **p, i, j, ver = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int *) * width);
		if (*(p + i) == NULL)
		{
			while (ver < i)
			{
				free(*(p + ver));
				ver++;
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
