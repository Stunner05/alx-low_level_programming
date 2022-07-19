#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: first string to be checked
 * @needle: paramater being searched for.
 * Return: a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}

		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
