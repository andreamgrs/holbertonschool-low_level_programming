#include "main.h"
/**
 * main - Code that prints the alphabet in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	char alph[] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
