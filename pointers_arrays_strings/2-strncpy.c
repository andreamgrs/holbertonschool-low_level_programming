#include "main.h"
/**
 * _strncpy -  copies a string.
 *
 * @dest: pointer to the destination string.
 * @src: pointer to sorce string.
 * @n: amount of characters to be copy.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	cont = 0;
	while (cont < n && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont = cont + 1;
	}
	while (n > cont)
	{
		dest[cont] = '\0';
		cont = cont + 1;
	}
	return (dest);
}
