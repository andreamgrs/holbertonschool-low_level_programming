#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: .
 * @height: height of the array.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int cont;

	if (grid != NULL && height > 0)
	{
		cont = 0;
		while (cont < height)
		{
			free(grid[cont]);
			cont = cont + 1;
		}
		free(grid);
	}
}
