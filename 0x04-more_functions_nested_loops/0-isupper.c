#include "main.h"
/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Description: a function that checks for uppercase character.
 * Return:0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
