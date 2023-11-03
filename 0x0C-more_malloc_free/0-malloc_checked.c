#include "main.h"

/**
 * malloc_checked - check code.
 * @b : variable
 * Return: check declaration
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
