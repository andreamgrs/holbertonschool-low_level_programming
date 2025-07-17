#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum of a and b.
 *
 * @a: the first int.
 * @b: the second int.
 *
 * Return: result of sum.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - difference of a and b
 *
 * @a: first int
 * @b: second int
 *
 * Return: result of difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b.
 *
 * @a: first int.
 * @b: second int.
 *
 * Return: result of product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - result of the division of a by b.
 *
 * @a: first int.
 * @b: second int.
 *
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of a by b.
 *
 * @a: first int.
 * @b: second int.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
