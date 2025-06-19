#include <stdio.h>
/**
 * main - Code that prints the alphabet in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alph[] = "abcdfghijklmnoprstuvwxyz";
	for (i = 0; i < 24; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
