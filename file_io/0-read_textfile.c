#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints 
 * it to the POSIX standard output.
 *
 * @filename: pointer to the file.
 * @letters: is the number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf = malloc(letters);

	if (buf == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	r = read(fd,buf,letters);
	w = write(STDOUT_FILENO,buf,r);
	
	free(buf);
	close(fd);
	return (w);
}
