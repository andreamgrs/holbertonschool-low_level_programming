#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: pointer that points to a string.
 *
 * Return: prints the string.
 */
void _puts(char *str)
{
	int cont;

	while (str[cont] >= 0)
	{
		_putchar(str[cont]);
		cont = cont + 1;
	}
	_putchar('\n');
}
