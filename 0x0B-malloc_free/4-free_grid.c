#include <stdlib.h>

/**
  * free_grid - Frees a grid
  * @grid: grid
  * @height: height of the array
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
