#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: string to be copy to the newly allocated memory.
 *
 * Return: return a char.
 */
char *_strdup(char *str)
{
	char *p;
	int cont;
	int cont2;

	p = malloc(sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont] != '\0'; cont++)
	{
		for (cont2 = 0; cont2 <= cont; cont2++)
		{
			p[cont2] = str[cont2];
		}
	}
	return (p);
}
