#include "main.h"

/**
 * _strncat - check code
 * @dest: input
 * @src: input
 * @n: input
 * Return: check function declaration
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
	i++;
	}
	j = i;
	while (src[j - i] != '\0' && j - i < n)
	{
		dest[j] = src[j - i];
	j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
