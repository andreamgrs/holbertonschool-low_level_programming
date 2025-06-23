#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: value of n in lines. If is 0 or less, only print \n.
 */
void print_diagonal(int n)
{
	int current_line_num;
	int num_spaces;

	for (current_line_num = 0; current_line_num < n; current_line_num++)
	{
		for (num_spaces = 0; num_spaces < current_line_num; num_spaces++)
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
