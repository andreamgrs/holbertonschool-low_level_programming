#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * main - program that copies the content of a file to another file.
 *
 * Return: Always 0.
 */
int main(int cont_arg, char **av)
{
	int fd, fd2, r, w;
	char buf[1024];
	/**
	 * av[0] cp
	 * av[1] file from 
	 * av[2] file to
	 */
	if (cont_arg != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file: %s\n", av[1]);
                exit(98);
	}
	r = read(fd, buf, 1024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file: %s\n", av[1]);
                exit(98);
	}
		fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
		if (fd2 == -1)
		{
			dprintf(2, "Error: Can't write to: %s\n", av[2]);
                	exit(99);
		}
		w = write(fd2, buf, r);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to: %s\n", av[2]);
                	exit(99);
		}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd: %d\n", fd);
		exit(100);
        }
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd2: %d\n", fd2);
                exit(100);
	}
	return (0);
}
