#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cont;
	char *string;
	va_list args;

	va_start(args, n);

	cont = 0;
	while (cont < n)
	{
		string = va_arg(args, char *);
		if (cont > 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		cont = cont + 1;
	}
	printf("\n");
	va_end(args);
}
