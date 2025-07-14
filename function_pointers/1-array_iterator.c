#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: pointer to the array.
 * @size: size of the array.
 * @action: pointer to the function you need to use.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	cont = 0;
	while (cont < size)
	{
		action(array[cont]);
		cont = cont + 1;
	}
}
