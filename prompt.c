#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prompts for user input
 *
 * Return:0
 */

int main(void)
{
	char *envp[] = {NULL};
	char *args[] = {"/bin/ls", "-l", NULL};

	if (execve(args[0], args, environ) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}

	return (0);
}
