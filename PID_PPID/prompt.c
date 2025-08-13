#include <stdio.h>
#include <stdlib.h>

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
