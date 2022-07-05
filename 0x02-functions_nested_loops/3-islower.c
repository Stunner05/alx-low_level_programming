#include "main.h"
/**
 * main - main block
 * Description:  a function that checks for lowercase character.
 * Return 0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{ return (1);
	}
	else 
	{
		return (0);
	}
}

