#include "main.h"

/**
 * _calloc - check code.
 * @nmemb : variable
 * @size : variable
 * Return: check declaration
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}
