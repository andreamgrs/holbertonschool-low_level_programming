#include "main.h"
/**
 * _abs -  function that computes the absolute value of an integer.
 *
 * @i: the integer
 *
 * Return: value + of number.
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * (0 - 1));
	}
}
