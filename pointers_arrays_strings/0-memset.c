#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: var that point where, is the array.
 * @b: contstant byte that we use to fill.
 * @n: first n bytes of the memory area that we will fill.
 *
 * Return: pointer that points the buffer with the new constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		s[cont] = b;
		cont = cont + 1;
	}
	return (s);
}
