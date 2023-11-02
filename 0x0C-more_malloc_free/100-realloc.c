#include "main.h"

/**
 * _realloc - check the code.
 * @old_size : variable
 * @new_size : variable
 * Return: 0 1
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *novoidp;

	novoidp = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	i = 0;
	if (new_size < old_size)
		old_size = new_size;

	while (i < old_size)
	{
		*(p + i) = *(novoidp + i);
		i++;
	}
	return (p);
}
