#include "main.h"
#include <stdio.h>

/**
 * _strdup - check the code.
 * @str : variable
 * Return: 0 1
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(str));
	if (array == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		*(array + i) = str[i];
	i++;
	}
	*(array + i) = '\0';
	return (array);
}
