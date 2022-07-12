#include "main.h"
/**
 * swap_int(int *a, int *b)
 * @a: passes first argument
 * @b: passes second argument
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
