#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: characters to be accepted in the string
 *
 * Return: number of bytes until the accept appears.
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont = 0;
	int cont2;
	unsigned int find_it;

	while (s[cont] != '\0')
	{
		cont2 = 0;
		find_it = 0;
		while (accept[cont2] != '\0')
		{
			if (s[cont] == accept[cont2])
			{
				find_it = 1;
			}
			cont2 = cont2 + 1;
		}
		if (find_it == 0)
		{
			return (cont);
		}
		cont = cont + 1;
	}
	return (0);
}
