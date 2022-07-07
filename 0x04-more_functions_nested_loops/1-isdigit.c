#include "main.h"
/** 
 * _isdigit - check for a digit
 * @c : character to check
 * Description:  a function that checks for a digit (0 through 9).
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c<= 9)
	{
		return (1); 
	}
	return (0);
}
