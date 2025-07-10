#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 *
 * @nmemb: amount of element in the array.
 * @size: type of size of the elements.
 *
 * Return:  returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int cont;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	cont = 0;
	while (cont < (nmemb * size))
	{
		p[cont] = 0;
		cont = cont + 1;
	}
	return (p);
}
