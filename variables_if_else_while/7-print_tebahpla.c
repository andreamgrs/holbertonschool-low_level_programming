#include <stdio.h>
#include <string.h>
/**
 * main - Code that prints the alphabet in reverse in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int length = strlen(alph);
	int i;

	for (i = length; i >= 0; i--)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
