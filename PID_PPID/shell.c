#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - first version of a super simple shell that can
 * run commands with their full path, without any argument.
 * line: pointer where the line will be store in the buffer.
 * size: pointer to the size of the buffer.
 * stdin: get the line from the user typing.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t read;
	pid_t child_pid;

	while (1)
	{
		child_pid = fork();

		printf("my_shell$");
		while ((read = getline(&line, &size, stdin)) != -1) 
		{
			printf("%s", line);
			if (execve(read, &size, NULL) == -1)
			{
				perror("Error:");
			}

		}
		free(line);
	}
	return (0); 
}
