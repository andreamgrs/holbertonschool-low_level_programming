#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 *
 * @s: pointer that points to a string.
 *
 * Return: prints the reverse string.
 */
void print_rev(char *s)
{
	int cont = 0;
	int tmp;

	while (s[cont] != 0)
	{
		cont = cont + 1;
	}
	tmp = cont - 1;
	while (tmp >= 0)
	{
		_putchar(s[tmp]);
		tmp = tmp - 1;
	}
	_putchar('\n');
}
