#include "main.h"
/**
 * puts2 - prints every character of a string.
 *
 * @str: pointer that points to a string.
 *
 * Return: prints character.
 */
void puts2(char *str)
{
	int cont = 0;
	int tmp;

	while (str[cont] != 0)
	{
		cont = cont + 1;
	}
	tmp = 0;
	while (tmp <= cont)
	{
		_putchar(str[tmp]);
		tmp = tmp + 2;
	}
	_putchar('\n');
}
