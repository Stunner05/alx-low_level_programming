#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: arguments number
 * @argv: array of arguments
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}
