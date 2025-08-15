#include <stdio.h>
extern char **environ;
/**
 * main - prints the env and environ
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    unsigned int i;
    int cont;

    i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
   
    for (cont = 0; environ[cont] != NULL; cont++)
    {
		printf("%s\n", environ[cont]);
    }
    return (0);
}
