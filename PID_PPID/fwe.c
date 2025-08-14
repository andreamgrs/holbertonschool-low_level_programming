#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - program that executes the command ls -l /tmp
 * in 5 different child processes. Each child should be
 * created by the same process (the father). Wait for a
 * child to exit before creating a new child.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/ls", "-l", "/tmp", NULL};
    pid_t child_pid;
    int status;
    int cont = 1;

    while (cont <= 5)
    {
	    child_pid = fork();
	    if (child_pid == -1)
	    {
		    perror("Error on the fork");
		    return (1);
	    }
	    if (child_pid == 0)
	    {
		    printf("Hey I'm the child #%d with PID: %u going to execute ls -l /tmp\n", cont, getpid());
		    if (execve(argv[0], argv, NULL) == -1)
		    {
			    perror("Error:");
		    }
	    }
	    else
	    {
		    wait(&status);
		    printf("Finish process child. I'm the father with PID: %u\n", getpid());
	    }

	    cont = cont + 1;
    }
    return (0);
}
