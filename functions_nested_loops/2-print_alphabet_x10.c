#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int number = 1;
	int final_number = 10;

	while (number <= final_number)
	{
		int i;
		char alph[] = "abcdefghijklmnopqrstuvwxyz";

		for (i = 0; i < 26; i++)
		{
			_putchar(alph[i]);
		}
		number = number + 1;
		_putchar('\n');
	}
}
