#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: string one.
 * @s2: string two.
 * @n: num of bytes of s2 that should print after s1.
 *
 * Return: returns a pointer that point to a newly allocated space
 * in memory, which contains s1, followed by the first n bytes of s2, 
 * and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1;
	unsigned int len2;
	unsigned int sum;
	unsigned int cont;
	unsigned int cont2;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1 = len1 + 1;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2 = len2 + 1;
	}
	if (n >= len2)
	{
		n = len2;
	}
	sum = len1 + len2;

	p = malloc((sum + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (cont = 0; cont < len1; cont++)
	{
		p[cont] = s1[cont];
	}
	for (cont2 = 0; cont2 < n; cont2++)
	{
		p[cont + cont2] = s2[cont2];
	}
	p[cont + cont2] = '\0';
	return(p);
}
