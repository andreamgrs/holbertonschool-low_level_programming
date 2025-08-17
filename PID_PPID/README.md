## About The Repository

Everything you need to know to start coding your own shell!

**Programs**

**which.c** implementation of which to look for the full pathname
 of the program such as ls.

**wait.c** suspends execution of the calling process until one of
its children terminates.

**strtok.c** function that splits a string and returns an array of
each word of the string.

**stat.c** function that gets the status of a file. On success, zero
is returned. On error, -1 is returned.

**shell.c** first version of a super simple shell that can run
commands with their full path, without any argument.

**setenv.c** function that changes or adds an environment variable.

**prompt.c** program that prints "$ ", wait for the user to enter
a command, prints it on the next line. (getline).

**print_path.c** function that prints each directory contained in the the environment variable PATH, one per line.

**path_linked_list.c** function that builds a linked list of the
PATH directories, each node added at the end.

**getenv.c** function searches the environment list to find the
environment variable name, and returns a pointer to the corresponding
value string.

**fwd.c** fork-wait-execve program that executes the command ls -l
/tmp in 5 different child processes. Each child should be created
by the same process (the father). Wait for a child to exit before
creating a new child.

**fork.c & fork_child.c** The system call fork (man 2 fork) creates
a new child process, almost identical to the parent (the process that
calls fork). Once fork successfully returns, two processes continue
to run the same program, but with different stacks, datas and heaps.

Using the return value of fork, it is possible to know if the current
process is the father or the child: fork will return 0 to the child,
and the PID of the child to the father.

**exec.c** Allows a process to execute another program, and the one
that was running stops. 

**env.c & env_environ.c** program that prints the address of env
(the third parameter of the main function) and environ (the global
variable).


## Compilation
All the files compile this way:

	$ gcc -Wall -Werror -Wextra -pedantic file.c -o file

Then run the executable file:

	$ ./file

## Authors
Andrea M G

## End
