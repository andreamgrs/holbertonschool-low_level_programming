#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: value of n in lines. If is 0 or less, only print \n.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
