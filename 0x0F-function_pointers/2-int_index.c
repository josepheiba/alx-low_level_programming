#include "function_pointers.h"

/**
 * int_index - check code.
 * @array : variable
 * @size : variable
 * @cmp : variable
 * Return: check declaration
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(*(array + i)) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
