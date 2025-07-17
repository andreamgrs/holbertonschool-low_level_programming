#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that performs simple operations.
 *
 * @argc: num of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char op;
	int result;
	int (*operation)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	operation = get_op_func(op);
	result = operation(a, b);

	printf("%d\n", result);

	return (0);
}
