#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to the array.
 * @size: number of elements in the array.
 * @cmp: pointer to the function you need to use to compare values.
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont, temp;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	cont = 0;
	temp = 0;
	while (cont < size)
	{
		temp = cmp(array[cont]);
		if (temp != 0)
		{
			return (cont);
		}
		cont = cont + 1;
	}
	return (-1);
}
