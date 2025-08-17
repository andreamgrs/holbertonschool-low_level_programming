## 📁 Project Overview

This repository contains standalone programs and functions that demonstrate key components of a Unix-like shell. Each file focuses on a specific concept or system call.

---

## 🔧 Programs & Functions

| File | Description |
|------|-------------|
| `which.c` | Implementation of `which` — finds the full pathname of a command like `ls`. |
| `wait.c` | Suspends execution until one of the calling process's children terminates. |
| `strtok.c` | Splits a string into words using `strtok`, returns an array of tokens. |
| `stat.c` | Retrieves file status using `stat`. Returns `0` on success, `-1` on error. |
| `shell.c` | First version of a super simple shell. Runs commands with full path, no arguments. |
| `setenv.c` | Adds or modifies an environment variable using `setenv`. |
| `prompt.c` | Prints a shell prompt (`$ `), reads user input with `getline`, and echoes it. |
| `print_path.c` | Prints each directory in the `PATH` environment variable, one per line. |
| `path_linked_list.c` | Builds a linked list of `PATH` directories, appending each node at the end. |
| `getenv.c` | Custom implementation of `getenv` — returns value of an environment variable. |
| `fwd.c` | fork-wait-execve program that executes the command `ls -l /tmp` in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child |
| `fork.c` & `fork_child.c` | Demonstrates `fork()` — creates child processes and distinguishes parent/child using return value. |
| `exec.c` | Uses `execve()` to replace the current process with a new program. |
| `env.c` & `env_environ.c` | Prints addresses of `env` (from `main`) and `environ` (global variable). |

## 🛠️ Compilation & Execution
All the files compile this way:

	$ gcc -Wall -Werror -Wextra -pedantic file.c -o file

Then run the executable file:

	$ ./file

## Authors
Andrea M 

## End
