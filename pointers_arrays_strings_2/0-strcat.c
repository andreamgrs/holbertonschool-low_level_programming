#include "main.h"
/**
 * _strcat -  concatenates two strings.
 *
 * @dest: pointer to a string where we src with a null character.
 * @src: pointer to a string that will be copy.
 *
 * Return: value the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int cont;
	int cont_2;

	cont = 0;
	while (dest[cont] != '\0')
	{
		cont = cont + 1;
	}
	cont_2 = 0;
	while (src[cont_2] != '\0')
	{
		dest[cont] = src[cont_2];
		cont = cont + 1;
		cont_2 = cont_2 + 1;
	}
	dest[cont] = '\0';
	return (dest);
}
