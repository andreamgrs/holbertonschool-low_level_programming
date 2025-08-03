#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * len_string - function to calculate the length of the string.
 *
 * @text_content: string.
 *
 * Return: length of string.
 */
int len_string(char *text_content)
{
	int cont = 0;

	while (text_content[cont] != '\0')
	{
		cont = cont + 1;
	}
	return (cont);
}
/**
 * create_file - function that creates a file.
 *
 * @filename: pointer to the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	w = write(fd, text_content, len_string(text_content));

	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
