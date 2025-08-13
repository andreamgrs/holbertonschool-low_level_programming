#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints "$ ", wait for the user to
 * enter a command, prints it on the next line. (getline)
 *
 * EOF (or Ctrl+D)
 *
 * Return: nothing.
 *
 */
int main(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t read;

	printf("$ ");
	while ((read = getline(&line, &size, stdin)) != -1) 
	{
		printf("%s", line);
	}
	free(line);
	return (0);
}
