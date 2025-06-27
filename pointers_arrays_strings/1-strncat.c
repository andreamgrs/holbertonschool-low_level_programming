#include "main.h"
/**
 * _strncat -  concatenates two strings.
 *
 * @dest: pointer to the destination string.
 * @src: pointer to sorce string.
 * @n: amount of characters to be copy.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int cont;
	int cont_2;

	cont = 0;
	while (dest[cont] != '\0')
	{
		cont = cont + 1;
	}
	cont_2 = 0;
	while (src[cont_2] != '\0' && cont_2 < n)
	{
		dest[cont] = src[cont_2];
		cont = cont + 1;
		cont_2 = cont_2 + 1;
	}

	dest[cont] = '\0';
	return (dest);
}
