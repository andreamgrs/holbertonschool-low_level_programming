#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cont, num;
	va_list args;

	va_start(args, n);

	cont = 0;
	while (cont < n)
	{
		num = va_arg(args, int);
		if (cont > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", num);
		cont = cont + 1;
	}
	printf("\n");
	va_end(args);

}
