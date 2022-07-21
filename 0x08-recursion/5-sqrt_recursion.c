#include "main.h"

int square_root(int, int);
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: parameter to be squared
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
/**
 * square_root - to find square root
 * @n: para 1
 * @i: para 2
 * Return: success
 */
int square_root(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (i);
	}
	return (square_root(n, i + 1));

}
