#include "dog.h"

/**
 * init_dog - check code
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: check function declaration
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
