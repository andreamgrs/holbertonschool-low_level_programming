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
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			printf("%d", a[row][col]);
		}
		printf("\n");
	}
}
