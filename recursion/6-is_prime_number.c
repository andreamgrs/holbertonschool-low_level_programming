#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @n: number to evaluate.
 * @aux: number to interate.
 *
 * Return: 1 or 0.
 */
int aux_num(int n, int aux)
{
	if (aux > n)
	{
		return 0;
	}
	if (n % aux == 0)
	{
		return (1);
	}
	return (aux_num(n, aux + 1));

}
int is_prime_number(int n)
{
	if(n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	return (aux_num(n, 2));
}
