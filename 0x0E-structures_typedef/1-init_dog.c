#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct
 * @d: struct dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		return (0);
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
