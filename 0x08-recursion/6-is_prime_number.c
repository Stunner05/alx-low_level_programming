#include "main.h"
/**
 * is_prime_number - a function that checks if input integer is a prime
 * @n: parameter
 * Return: 1 0r 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - checks for even or prime
 * @n: prime number
 * @i: iterator
 * Return: 1 or 0
 */

int _prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{ return (0);
	}
	if ((n < i) < i)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
