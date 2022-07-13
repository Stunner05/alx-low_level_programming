#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: passes an argument
 *
 * Return: 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a])
			a++;
	}
	_putchar('\n')
}
