#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 *
 * @size: is the size of the triangle
 *
 * Return: triangle in #. If is 0 or less, only print \n.
 */
void print_triangle(int size)
{
	int current_num = 0;
	int more_squares;
	int space;

	while (current_num < size)
	{
		space = 0;
		while (space < size - current_num - 1)
		{
			_putchar(' ');
			space = space + 1;
		}
		more_squares = 0;
		while (more_squares <= current_num)
		{
			_putchar(35);
		more_squares = more_squares + 1;
		}
	_putchar('\n');
	current_num = current_num + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
