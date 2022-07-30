#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: param 1
 * @s2:param 2
 * @n: param 3
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *sum;

	if (s == NULL)
	{
		s1 = ""
	}
	if (s2 == NULL)
	{
		s2 = ""
	}
	for ( index = 0; s1[index]; index++)
	{
		len++;
	}
	sum = (char *)malloc(sizeof(char) * len + 1);
	if (sum == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (index = 0; s1[index]; index++)
	{
		sum[len++] = s2[index];
	}
	sum[len] = '\0';
	return (sum);
}

