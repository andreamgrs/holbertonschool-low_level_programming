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
	int fre;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(width * sizeof(int *));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	cont = 0;
	while (cont < width)
	{
		p[cont] = malloc(height * sizeof(int));
		if (p[cont] == NULL)
		{
			for (fre = cont - 1; fre >= 0; fre--)
			{
				free(p[cont]);
			}
			free(p);
			return (NULL);
		}
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
