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
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: pointer to the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	w = write(fd, text_content, len_string(text_content));
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
