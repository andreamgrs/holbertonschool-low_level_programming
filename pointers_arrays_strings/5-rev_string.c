#include "main.h"
/**
 * rev_string - function that reverses a string.
 *
 * @s: pointer that points to a string.
 *
 * Return: prints the reverse string.
 */
void rev_string(char *s)
{
	int cont = 0;
	int tmp;
	char tmp_print;

	while (s[cont] != 0)
	{
		cont = cont + 1;
	}
	tmp = cont - 1;
	cont = 0;
	while (cont < tmp)
	{
		tmp_print = s[cont];
		s[cont] = s[tmp];
		s[tmp] = tmp_print;
		tmp = tmp - 1;
		cont = cont + 1;
	}
}
