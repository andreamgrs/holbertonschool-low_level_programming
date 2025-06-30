#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer to the string.
 * @c: character to find.
 *
 * Return: pointer that points to the string from the character or null.
 */
char *_strchr(char *s, char c)
{
	int cont = 0;


	while (s[cont] != '\0')
	{
		if (s[cont] == c)
		{
			return (s + cont);
		}
		cont = cont + 1;
	}
	return (0);
}
