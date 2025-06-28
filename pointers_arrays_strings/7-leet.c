#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * @s: pointer to string to modified.
 *
 * Return: pointer to the beginning of the modified string.
 */
char *leet(char *s)
{
	int cont;
	int a_cont;
	int a_upper[] = {65, 69, 79, 84, 76};
	int a_lower[] = {97, 101, 111, 116, 108};
	int a_num[] = {52, 51, 48, 55, 49};

	cont = 0;
	while (s[cont] != '\0')
	{
		for (a_cont = 0; a_cont < 5; a_cont++)
		{
			if (s[cont] == a_upper[a_cont] || s[cont] == a_lower[a_cont])
			{
				s[cont] = a_num[a_cont];
			}
		}
		cont = cont + 1;
	}
	return (s);
}
