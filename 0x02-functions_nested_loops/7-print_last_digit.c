#include "main.h"
/**
 * main - main Entry point
 * Description: a function that prints the last digit of a number
 * Returns the value of the last digit
 */
int print_last_digit(int)
{
	int ln = n% 10;

	if (n < 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
