#include "dog.h"
#include <stddef.h>

/**
 * new_dog - check code
 * @name: input
 * @age: input
 * @owner: input
 * Return: check function declaration
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *dogP;

	dogP = &dog;
	if (dogP->name == NULL || &(dogP->age) == NULL || dogP->owner == NULL)
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
