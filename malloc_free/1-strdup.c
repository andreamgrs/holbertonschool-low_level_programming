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

	if (str == NULL)
	{
		return (NULL);
	}

	cont = 0;
	while (str[cont] != '\n')
	{
		cont = cont + 1;
	}
	p = malloc((cont + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (cont2 = 0; cont2 < (cont + 1); cont2++)
		{
			p[cont2] = str[cont2];
		}
	}
	return (p);
}
