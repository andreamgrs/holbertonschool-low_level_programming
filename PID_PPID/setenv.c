#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

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
			return (&list[name_len]);
		}
	}
	return (NULL);
}
/**
 * _setenv - function that changes or adds an environment variable.
 *
 * Return: 0 if the variable was created or modified correctly
 * -1 error (name cannot contain =).
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	size_t length_total;
	char *new_p; /*ptr to a newly allocated space in mem*/
	char *original_value = _getenv(name);

	if (name == NULL || *name == '\0' || strchr(name, '='))
	{
		return (-1);
	}

	if (original_value != NULL && overwrite == 0)
	{
		return (0);
	}

	length_total = strlen(name) + strlen(value) + 2; /* +2 (= & \0)*/
	new_p = malloc(length_total * sizeof(char));
	if (new_p == NULL)
	{
		return (-1);
	}

	snprintf(new_p, length_total, "%s=%s", name, value);
	putenv(new_p);
	return (0);
}

/**
 * main - prints original and new environment variable.
 *
 * Return: nothing.
 *
 */

int main(void)
{
	char *name = "PATH";
	char *value = _getenv(name);

	if (value != NULL)
	{
		printf("Original %s%s\n", name, value);
		_setenv(name, "/tmp", 1);
		printf("New %s%s\n", name, _getenv(name));
	}
	else
	{
		printf("%s not found\n", name);
	}
	return (0);
}
