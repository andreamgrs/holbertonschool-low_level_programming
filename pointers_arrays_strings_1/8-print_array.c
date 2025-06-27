#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: pointer that points to an int array.
 * @n: is the number of elements of the array to be printed.
 *
 * Return: no return because is void.
 */
void print_array(int *a, int n)
{
	int cont;

	cont = 0;

	while (cont < n)
	{
		if (cont == n - 1)
		{
			printf("%d", a[cont]);
		}
		else
		{
			printf("%d, ", a[cont]);
		}
		cont = cont + 1;
	}
	printf("\n");
}
