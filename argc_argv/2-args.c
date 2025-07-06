#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
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
		printf("%s\n", argv[count]);
		count = count + 1;
	}
	return (0);
}
