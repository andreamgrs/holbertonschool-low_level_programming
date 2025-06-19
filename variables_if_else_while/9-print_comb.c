#include <stdio.h>
/**
 * main - Code prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	int final_number = 9;

	while (number <= final_number)
	{
		putchar('0' + number);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number = number + 1;
	}
	putchar('\n');

	return (0);
}
