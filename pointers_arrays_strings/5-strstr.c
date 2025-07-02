#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * @haystack: pointer to the string.
 * @needle: pointer to the substring.
 *
 * Return: pointer the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int cont = 0;
	int cont2;

	while (haystack[cont] != '\0')
	{
		cont2 = 0;
		while (needle[cont2] != '\0')
		{
			if (haystack[cont + cont2] != needle[cont2])
			{
				break;
			}
			cont2 = cont2 + 1;
		}
		if (needle[cont2] == '\0')
		{
			return (haystack + cont);
		}
		cont = cont + 1;
	}
	return (NULL);
}
