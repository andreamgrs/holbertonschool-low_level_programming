#include "main.h"
/**
 * _strcpy - copies the string, including (\0), to the buffer.
 *
 * @dest: pointer to a buffer where we copy the value inside src.
 * @src: pointer to a string that will be copy.
 *
 * Return: value the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int cont;

	cont = 0;
	while (src[cont] != 0)
	{
		dest[cont] = src[cont];
		cont = cont + 1;
	}
	dest[cont] = '\0';
	return (dest);
}
