#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98.
 *
 * @n: the start number
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int current_num;

	if (n < 98)
	{
		for (current_num = n; current_num < 98; current_num++)
		{
			printf("%d, ", current_num);
		}
	}
	else
	{
		for (current_num = n; current_num > 98; current_num--)
		{
			printf("%d, ", current_num);
		}
	}
	printf("98");
	printf("\n");
}
