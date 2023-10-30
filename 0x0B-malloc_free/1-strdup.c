#include "main.h"
#include <stdio.h>

/**
 * _strdup - check the code.
 * @str : variable
 * Return: 0 1
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *array;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (0);

	j = 0;
	while (j <= i)
	{
		*(array + j) = str[j];
	j++;
	}
	return (array);
}
