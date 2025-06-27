#include "main.h"
/**
 * puts_half - prints half of a string.
 *
 * @str: pointer that points to a string.
 *
 * Return: no return because is void.
 */
void puts_half(char *str)
{
	int cont = 0;
	int tmp;

	while (str[cont] != 0)
	{
		cont = cont + 1;
	}
	if (cont % 2 == 0)
	{
		tmp = cont / 2;
	}
	else
	{
		tmp = (cont + 1) / 2;
	}
	while (tmp < cont)
	{
		_putchar(str[tmp]);
		tmp = tmp + 1;
	}
	_putchar('\n');
}
