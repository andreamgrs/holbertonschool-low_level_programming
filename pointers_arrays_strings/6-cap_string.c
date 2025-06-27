#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @s: pointer to string to modified.
 *
 * Return: pointer to the beginning of the modified string.
 */
char *cap_string(char *s)
{
	int cont = 0;
	int aux = 0;

	if (s[cont] >= 'a' && s[cont] <= 'z')
	{
		s[cont] = s[cont] - 32;
	}

	while (s[cont] != '\0')
	{
		if (s[cont] == 32 || s[cont] == 9 || s[cont] == 10 || s[cont] == 44 || s[cont] == 59 || s[cont] == 46 || s[cont] == 33 || s[cont] == 63 || s[cont] == 34 || s[cont] == 40 || s[cont] == 41 || s[cont] == 123 || s[cont] == 125)
		{
			aux = cont + 1;
			if (s[aux] >= 'a' && s[aux] <= 'z')
			{
				s[aux] = s[aux] - 32;
			}
		}
		cont = cont + 1;
	}
	return (s);
}
