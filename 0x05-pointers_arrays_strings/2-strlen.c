#include "main.h"
/**
 * _strlen - calculates string length
 * @s: passes argument
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}
