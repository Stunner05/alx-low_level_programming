#include "main.h"
#include <string.h>

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: parameter for string
 * Return: 0
 * */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
