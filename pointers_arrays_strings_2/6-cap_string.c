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
	int array[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int cont_array;

	if (s[cont] >= 'a' && s[cont] <= 'z')
	{
		s[cont] = s[cont] - 32;
	}

	while (s[cont] != '\0')
	{
		for (cont_array = 0; cont_array < 13; cont_array++)
		{
			if (s[cont] == array[cont_array])
			{
				aux = cont + 1;
				if (s[aux] >= 'a' && s[aux] <= 'z')
				{
					s[aux] = s[aux] - 32;
				}
			}
		}
		cont = cont + 1;
	}
	return (s);
}
