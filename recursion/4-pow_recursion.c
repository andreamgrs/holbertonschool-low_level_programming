#include "main.h"
/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y.
 *
 * @x: base.
 * @y: exponent.
 *
 * Return: returns the base number multiplied
 * by itself the number of times specified by the exponent.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
