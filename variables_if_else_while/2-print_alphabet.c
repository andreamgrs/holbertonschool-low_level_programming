#include <stdio.h>
/**
 * main - Code that prints the alphabet in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[] = {"abcdefghijklmnopqrstuvwxyz"};
	for (int i = 0; i <= 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
