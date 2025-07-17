#include "3-calc.h"
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
	int result;
	int (*operation)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(a, b);

	printf("%d\n", result);

	return (0);
}
