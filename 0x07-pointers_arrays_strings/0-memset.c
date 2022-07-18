#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s:memory area
 * @b: constant byte
 * @n:integer to be passed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
	}

	return (s);
}
