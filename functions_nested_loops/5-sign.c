#include "main.h"
/**
 * print_sign - check if char in > = or < than 0.
 *
 * @n: the character to evaluate.
 *
 * Return: 1 if n > 0, 0 if n= 0, -1 of n < 0.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
