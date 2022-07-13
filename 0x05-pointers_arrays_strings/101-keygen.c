#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generate password
 * Descrition: a program that generates random valid passwords
 * Return: Always 0
 */
int main(void)
{
	int r = 0;
	int v = 0;

	time_t t;
	srand((unsigned int) time(&t));
	
	while (v < 2772)
	{
		r = rand() % 128;
		if ((s + r) > 2772)
			break;
		v = v + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - v));
	return (0);
}

