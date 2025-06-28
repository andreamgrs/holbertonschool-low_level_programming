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
	int array_cont;
	int array_upper[] = {65, 69, 79, 84, 76};
	int array_lower[] = {97, 101, 111, 116, 108};
	int array_num[] = {52, 51, 48, 55, 49};

	cont = 0;
	while (s[cont] != '\0')
	{
		for (array_cont = 0; array_cont < 5; array_cont++)
		{
			if (s[cont] == array_upper[array_cont] || s[cont] == array_lower[array_cont])
			{
				s[cont] = array_num[array_cont];
			}
		}
		cont = cont + 1;
	}
	return (s);
}
