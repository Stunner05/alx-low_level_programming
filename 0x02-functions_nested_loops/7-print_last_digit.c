#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: pass in an integer
 *
 * Description: a function that prints the last digit of a number
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
	{
		ln = ln * -1;
	}
	_putchar(ln + '0');
	return (ln);
}
