#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to the 1 element of an array of intgers.
 * @n: num of elements to swap.
 *
 * Return: nothing is a void.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp = 0;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start = start + 1;
		end = end - 1;
	}
}
