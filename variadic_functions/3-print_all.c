#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function.
 * c: char, i: int, f: float, s: char *
 * @n: number of strings passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int cont_format, cont;
	char *s;
	int i;
	char c;
	float f;

	va_list args;

	va_start(args, format);

	cont_format = 0;
	while (format[cont_format] != '\0' )
	{
		cont_format = cont_format + 1;
	}
	while (cont < cont_format)
	{
		s = va_arg(args, char *);
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
