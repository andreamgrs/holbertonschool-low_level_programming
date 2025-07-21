#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * op - Struct option to print
 *
 * @op - option for the data type.
 * c: char, i: int, f: float, s: char *
 * @print: The function associated, which function to print.
 */
#include <stdarg.h>
typedef struct op
{
	char *op;
	void (*print)(va_list arg);
} op_list;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
