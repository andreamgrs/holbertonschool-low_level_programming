#include <stdio.h>
/**
 * main - Code that prints the alphabet in lowercase and uppercase.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	char alph2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alph2[i]);
	}
	putchar('\n');
	return (0);
}
