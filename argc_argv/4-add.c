#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 *
 * @argc: num of arguments.
 * @argv: vector of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int cont_arg;
	int cont_vec;
	int num = 0;

	if (argc == 1)
	{
		printf("%d\n", num);
		return (1);
	}
	
	for (cont_arg = 1; cont_arg < argc; cont_arg ++)
	{
		cont_vec = 0;
		while (argv[cont_arg][cont_vec] != '\0')
		{
			if (!isdigit(argv[cont_arg][cont_vec]))
			{
				printf("Error\n");
				return (1);
			}
			cont_vec = cont_vec + 1;
                }
                sum = sum + atoi(argv[cont_arg]);
        }
        printf("%d\n", sum);
        return (0);
}
