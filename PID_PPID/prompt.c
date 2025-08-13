#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL;
	size_t leng_buffer = 0;
	ssize_t read;
	
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		printf("Error\n");
	}

	while ((read = getline(&line, &size, stream)) != -1) 
	{
		fwrite(line, read, 1, stdout);
	}

	free(line);
	fclose(stream);
	return (0);
}
