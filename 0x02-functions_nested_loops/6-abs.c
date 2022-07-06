#include "main.h"
/**
 * _abs - Entry point
 * @n: pass in an integer
 * Description: a function that computes the absolute value of an integer.
 * Return:0
 */

	int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
