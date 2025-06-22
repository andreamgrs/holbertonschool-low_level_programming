#include "main.h"
/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59.
 *
 * / 10 imprime decena el 1 digito y % unidad el 2 digito
 * Return: void function jack_bauer.
 */
void jack_bauer(void)
{
	int current_hr = 0;
	int current_min;

	while (current_hr <= 23)
	{
		current_min = 0;

		while (current_min <= 59)
		{
			_putchar((current_hr / 10) + '0');
			_putchar((current_hr % 10) + '0');
			_putchar(58);
			_putchar((current_min / 10) + '0');
			_putchar((current_min % 10) + '0');
			_putchar('\n');
			current_min = current_min + 1;
		}
		current_hr = current_hr + 1;
	}
}
