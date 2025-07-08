#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: fill the array with that char c.
 *
 * Return: return a char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int cont = 0;
	char *p = malloc(size * sizeof(char));

        if (size == 0)
	{
		return (NULL);
	}
	
	while (cont < size)
	{
		p[cont] = c;
		cont = cont + 1;
	}
        return (p);
}
