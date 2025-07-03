#include "main.h"
/**
 * _sqrt_aux - function to have an auxiliar num to guess the square number.
 *
 * @n: number.
 * @aux: the iterator.
 *
 * Return: natural square root of a number.
 */
int _sqrt_aux(int n, int aux)
{
	if (aux * aux == n)
	{
		return (aux);
	}
	else if (aux * aux > n)
	{
		return (-1);
	}
	return (_sqrt_aux(n, aux + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_aux(n, 0));
}
