#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;
/**
 * getenv - function searches the environment
 * list to find the environment variable name,
 * and returns a pointer to the corresponding value string.
 *
 * Return: returns a pointer to the value in the
 * environment, or NULL if there is no match.
 */
char *_getenv(const char *name)
{
	int cont;
	char *list;
	size_t name_len = strlen(name);
	int value;
	
	for (cont = 0; environ[cont] != NULL; cont++)
	{
		list = environ[cont];
		value = strncmp(list, name, name_len);

		if(value == 0 && list[name_len] == '=')
		{
			return (&list[name_len + 1]);
		}
	}
	return (NULL);
}

/**
 * main - implementation of which to look for the full pathname
 * of the program such as ls.
 *
 * Return: nothing.
 *
 */

int main(void)
{
	char *name = "PATH";
	char *value = _getenv(name);
	char *value_copy = strdup(value);
	char *token = strtok(value_copy, ":");
	char *command = "ls";
	char full_path[1024];

	while (token != NULL && value_copy != NULL)
	{
		snprintf(full_path, sizeof(full_path), "%s/%s", token, command);
		if (access(full_path, X_OK) == 0)
		{
			printf("Found %s in: %s\n", command, full_path);
			break;
		}
		token = strtok(NULL, ":");
	}
	free(value_copy);
	return (0);
}
