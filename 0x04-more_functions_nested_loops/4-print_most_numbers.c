#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return:0
 * Description:a function that prints the numbers, from 0 to 9
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
