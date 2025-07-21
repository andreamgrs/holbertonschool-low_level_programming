#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_char - print a char.
 * @arg: A list of arguments.
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, char);
	printf("%c", c);
}

/**
 * print_int - print an integer.
 * @arg: A list of arguments.
 */
void print_int(va_list arg)
{
        int i;

        i = va_arg(arg, int);
        printf("%d", i);
}

/**
 * print_float - print a float
 * @arg: A list of arguments.
 */
void print_float(va_list arg)
{
        float f;

        f = va_arg(arg, double);
        printf("%f", f);
}

/**
 * print_string - print a string.
 * @arg: A list of arguments.
 */
void print_char(va_list arg)
{
        char *s;

	if (s == NULL)
	{
		printf("(nil)");
	}

        s = va_arg(arg, char *);
        printf("%s", s);
}
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
	va_list args;
	op_list ops[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
	};
	
	va_start(args, format);

	cont_format = 0;
	while (format[cont_format] != '\0' )
	{
		cont_format = cont_format + 1;
	}
	while (cont < cont_format)
	{
		ops[cont].list(args);
		cont = cont + 1;
	}
	printf("\n");
	va_end(args);
}
