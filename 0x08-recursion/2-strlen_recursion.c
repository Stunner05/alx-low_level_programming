#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: parameter to be retuned.
 * Return: success
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	len += s;
	_strlen_recursion(s)
	return (len);
}

