#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination where we copy.
 * @src: source from where we copy.
 * @n: first n bytes of the memory area.
 *
 * Return: pointer that points the buffer with the copy.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		dest[cont] = src[cont];
	cont = cont + 1;
	}
	return (dest);
}
