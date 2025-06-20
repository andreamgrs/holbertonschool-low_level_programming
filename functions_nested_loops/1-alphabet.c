#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	char alph[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
