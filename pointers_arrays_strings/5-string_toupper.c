#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 *
 * @s: string to change.
 *
 * Return: pointer to change to uppercase string.
 */
char *string_toupper(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] >= 'a' && s[cont] <= 'z')
		{
			s[cont] = s[cont] - 32;
		}
		cont = cont + 1;
	}
	return (s);
}
