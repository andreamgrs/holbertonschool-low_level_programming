#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name.
 *
 * @argc: num of arguments.
 * @argv: vector of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s", argv[count]);
		count = count + 1;
	}
	printf("\n");
	return (0);
}
