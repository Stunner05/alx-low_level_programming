#include <stdio.h>

/**
 * main - a functioin that prints iits name.
 * @argc: parameter 1
 * @argv: array ofcommand listed
 * Return: Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s/n", *argv);
	return (0);
}
