#include "main.h"

/**
 * str_concat -a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: string 1 + 2
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;

	str = (char *)malloc(l * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (k < l)
	{
		if (k < i)
		{
			str[k] = s1[k];
		}
		if (k > i)
		{
			str[k] = s2[j];
			j++;
		}
		k++;
	}
	str[j] = '\0';
	return (str);
}
