#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 *
 * @s: pointer to the string.
 * @accept: characters to find.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int cont = 0;
	int cont2;

	while (s[cont] != '\0')
	{
		cont2 = 0;
		while (accept[cont2] != '\0')
		{
			if (s[cont] == accept[cont2])
			{
				return (s + cont);
			}
			cont2 = cont2 + 1;
		}
		cont = cont + 1;
	}
	return (0);	
}
