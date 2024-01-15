#include "main.h"

/**
 * _strncpy - check code
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
	{
		while (i < n)
		{
			dest[i] = '\0';
		i++;
		}
	}
	return (dest);
}
