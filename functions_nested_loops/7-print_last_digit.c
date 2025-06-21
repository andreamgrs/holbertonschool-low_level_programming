#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: the integer
 *
 * Return: last_num.
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num > 0)
	{
		last_num = last_num;
	}
	else
	{
		last_num = last_num * (0 - 1);
	}
	_putchar('0' + last_num);
	return (last_num);
}
