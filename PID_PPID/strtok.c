#include <stdio.h>
#include <string.h>

/**
 * main - function that splits a string and
 * returns an array of each word of the string. (strtok)
 *
 * Return: nothing.
 *
 */
int main(void)
{
	char text[] = "Hello! How; are;you?";
	char *token = strtok(text, ";");

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, ";");
	}
	return (0);
}
