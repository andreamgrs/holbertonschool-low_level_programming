#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers, if the program
 * does not receive two arguments, your program should print Error.
 *
 * @argc: num of arguments.
 * @argv: vector of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
