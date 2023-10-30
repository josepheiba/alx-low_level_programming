#include "main.h"
#include <stdio.h>

/**
 * create_array - check the code.
 * @size : variable
 * @c : variable
 * Return: 0 1
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (0);

	i = 0;
	while (i < size)
	{
		*(array + i) = c;
	i++;
	}
	return (array);
}
