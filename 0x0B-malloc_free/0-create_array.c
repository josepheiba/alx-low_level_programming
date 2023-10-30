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
	char *array = malloc(sizeof(char) * size);

	i = 0;
	while (i < size)
	{
		*(array + i) = c;
	i++;
	}
	return (array);
}
