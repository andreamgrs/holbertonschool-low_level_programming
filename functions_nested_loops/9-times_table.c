#include "main.h"
/**
 * times_table - function that prints the 9 times table.
 *
 *
 * Return: void.
 */
void times_table(void)
{
	int i;
	int j;
	int n = 9;
	int product;
	int first_num;
	int second_num;
	for (i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			product = i * j;
			first_num = product / 10;
			second_num = product % 10;
			_putchar(' ');

			if (first_num == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(first_num + '0');
			}
			_putchar(second_num + '0');
			_putchar(44);
		}
		_putchar('\n');
	}
}
