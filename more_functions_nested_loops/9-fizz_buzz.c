#include "main.h"
#include <stdio.h>
/**
 * main - prints from 1 to 100..
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int current_num;
	int mult_three;
	int mult_five;

	for (current_num = 1; current_num <= 100; current_num++)
	{
		mult_three = current_num % 3;
		mult_five = current_num % 5;

		if ((mult_three == 0) && (mult_five == 0))
		{
			printf("FizzBuzz ");
		}
		else if (mult_three == 0)
		{
			printf("Fizz ");
		}
		else if (mult_five == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", current_num);
		}
	}
	printf("\n");
	return (0);
}
