#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure definition of a dog
 * @name: character parameter
 * @age: floa parameter
 * @owner: character parameter 2
 */
typedef struct dog{
	char *name;
	float age;
	char *owner;
} dog_p;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
