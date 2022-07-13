#include "holberton.h"
/**
 *
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	
	i++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
