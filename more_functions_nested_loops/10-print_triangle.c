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
	int current_num;
	int more_squares;

	for (current_num = 0; current_num < size; current_num++)
	{
		for (more_squares = 0; more_squares < size; more_squares++)
		{
			_putchar(35);
		}
		/*_putchar(35);*/
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
