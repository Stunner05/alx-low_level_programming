#include "main.h"

/**
 * _strdup - a function that returns a pointer to an allocated space in memory
 * @str: string given
 * Return: success
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);

}
