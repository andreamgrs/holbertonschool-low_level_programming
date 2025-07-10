#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: value min included in the array.
 * @max: value max included in the array.
 *
 * Return: return the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int sum, cont;

	if (min > max)
	{
		return (NULL);
	}
	sum = (max - min) + 1;

	p = malloc(sum * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (cont = min; cont < sum; cont++)
	{
		p[cont] = min + cont;
	}
	return (p);
}
