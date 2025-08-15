#include <stdio.h>
extern char **environ;

int main(void)
{
	int cont;
	for (cont = 0; environ[cont] != NULL; cont++)
	{
		printf("%s\n", environ[cont]);
	}
	return (0);
}
