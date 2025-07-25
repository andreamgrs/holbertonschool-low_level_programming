#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 *
 * @name: name of the person.
 * @f: fuction pointer.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
