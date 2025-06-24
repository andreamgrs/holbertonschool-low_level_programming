#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @*a, *b: the var to be swap.
 *
 * Return: the swap value.
 */
void swap_int(int *a, int *b)
{
	int tmp_var;
	tmp_var = *a;
	*a = *b;
	*b = tmp_var;

}
