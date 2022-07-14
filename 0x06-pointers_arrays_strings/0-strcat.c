#include "main.h"
/**
 * _strncat - concatenates n bytes of two strings
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (dest[i] != '\0') 
	{ dest[a] = src[i];
		i++;
		a++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
	
