#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int cont;
	int row;
	int column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}
	cont = 0;
	while (cont < width)
	{
		p[cont] = malloc(height * sizeof(int));
		cont = cont + 1;
	}
	for (row = 0; row < width; row++)
	{
		for (column = 0; column < height; column++)
		{
			p[row][column] = 0;
		}
	}
	return (p);
}
