#include "main.h"
/**
 * main - main Entry point
 * Description: a function that computes the absolute value of an integer.
 * Return: Always 0.
 */
	int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
