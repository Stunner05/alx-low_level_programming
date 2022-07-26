#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: arguments
 * @argv: an array of strings
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);  
}
