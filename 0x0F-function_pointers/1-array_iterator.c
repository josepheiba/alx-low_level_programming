#include "function_pointers.h"

/**
 * array_iterator - check code.
 * @array : variable
 * @size : variable
 * @action : variable
 * Return: check declaration
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
