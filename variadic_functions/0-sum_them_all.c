#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of
 * all its parameters.
 *
 * @n: amount of parameters.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int cont;
	int sum;
	va_list args;

	va_start(args, n);

	cont = 0;
	sum = 0;
	while (cont < n)
	{
		sum = sum + va_arg(args, int);
		cont = cont + 1;
	}

	va_end(args);
	return (sum);
}
