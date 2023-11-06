#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - check code
 * @name: input
 * @age: input
 * @owner: input
 * Return: check function declaration
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogP;

	dogP = malloc(sizeof(dog_t));
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		dogP->name = name;
		dogP->age = age;
		dogP->owner = owner;
		return (dogP);
	}

}
