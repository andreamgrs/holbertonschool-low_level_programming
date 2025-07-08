#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: return pointer to a newly allocated space in memory
 * which contains the contents of s1 then s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int cont = 0;
	int cont2 = 0;
	int cont_s1;
	int cont2_s2;
	int sum = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[cont] != '\0')
	{
		cont = cont + 1;
	}
	while (s2[cont2] != '\0')
	{
		cont2 = cont2 + 1;
	}
	sum = cont + cont2 + 1;
	p = malloc(sum * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (cont_s1 = 0; cont_s1 < cont; cont_s1++)
	{
		p[cont_s1] = s1[cont_s1];
	}
	for (cont2_s2 = 0; cont2_s2 <= cont2; cont2_s2++)
	{
		p[cont_s1 + cont2_s2] = s2[cont2_s2];
	}
	return (p);
}
