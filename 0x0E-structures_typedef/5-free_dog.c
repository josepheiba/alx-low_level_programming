#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - check code
 * @d: input
 * Return: check function declaration
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(1);

	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}
	free(d);
}
