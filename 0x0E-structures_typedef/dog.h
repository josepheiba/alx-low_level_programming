#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - check the code
 * @name: variable
 * @age: variable
 * @owner: variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
