#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: pointer to an array.
 * @size: size of the array.
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int cont;
	int sum = 0;
	int sum2 = 0;

	for (cont = 0; cont < size; cont++)
	{
		sum = sum + *(a + cont * size + cont);
		sum2 = sum2 + *(a + cont * size + (size - 1 - cont));
	}
	printf("%d, %d\n", sum, sum2);
}
