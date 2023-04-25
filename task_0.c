#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	write(STDOUT_FILENO, "THE GATES OF SHELL\n", 19);
	return (0);
}
