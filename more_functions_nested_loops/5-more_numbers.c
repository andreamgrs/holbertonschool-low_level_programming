#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 *
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;
	int first_num;

	for (i = 0; i< 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			first_num = j / 10;
			if (first_num != 0)
			{
				_putchar(first_num + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
