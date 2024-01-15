#include "main.h"

/**
 * _memcpy - check code
 * @dest: input
 * @src: input
 * @n: input
 * Return: check function declaration
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
