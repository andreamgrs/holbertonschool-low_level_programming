#include <stdio.h>
#include <string.h>

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
