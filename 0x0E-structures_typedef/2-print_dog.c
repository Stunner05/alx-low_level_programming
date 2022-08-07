#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: variable for struct 
 * Return: success
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("age: %f\n", (*d).age);
		printf("Name: %s\n", (*d).owner);
	}
}
