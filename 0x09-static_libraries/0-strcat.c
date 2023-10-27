#include "main.h"

/**
 * _strcat - check code
 * @dest: input
 * @src: input
 * Return: check function declaration
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
	i++;
	}
	j = i;
	while (src[j - i] != '\0')
	{
		dest[j] = src[j - i];
	j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
