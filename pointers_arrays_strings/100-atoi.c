 #include "main.h"
/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer that points to a string.
 *
 * Return: the string converted into an integer.
 */
int _atoi(char *s)
{
	int cont;
	int digit = 0;
	int digit_num = 0;
	int sign = 1;
	int stop_after_num = 0;
	unsigned int final_digit = 0;

	cont = 0;
	while (s[cont] != '\0')
	{
		digit = s[cont];
		if (digit >= 48 && digit <= 57 && stop_after_num == 0)
		{
			digit_num = 1;
			final_digit = final_digit * 10 + (digit - 48);
		}
		else
		{
			if (digit_num == 1)
			{
				stop_after_num = 1;
			}
		}

		if (digit_num == 0 && digit == '-')
		{
			sign = sign * -1;
		}
	cont = cont + 1;
	}

	return (final_digit * sign);

}
