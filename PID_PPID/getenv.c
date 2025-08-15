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

		if(value == 0)
		{
			return (&list[name_len + 1]);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(void)
{
	char *name = "PATH";
	char *value;
	
	value = _getenv(name);

    	if (value != NULL)
	{
		printf("PATH: %s\n", value);
	}
	else
	{
		printf("PATH not found\n");
	}
}
