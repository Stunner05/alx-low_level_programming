#include "main.h"
/**
 * _strcat - concatenates n bytes of two strings
 * @dest: pointer to be returned
 * @src: pointer source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, a = -1;

	for (i = 0; dest[i] != '\0'; i++)
	;

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
