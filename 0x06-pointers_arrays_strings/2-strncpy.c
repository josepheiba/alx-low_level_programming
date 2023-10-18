#include "main.h"

/**
 * _strncopy - check code
 * @dest: input
 * @src: input
 * @n: input
 * Return: check function declaration
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
	i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
