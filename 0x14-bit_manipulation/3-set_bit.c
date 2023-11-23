#include "main.h"

/**
 * set_bit - check code.
 * @n : variable
 * @index : variable
 * Return: check declaration
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one;

	if (index > sizeof(*n) * 8)
		return (-1);
	one = 1;
	one = one << index;
	*n = *n | one;
	return (*n);
}
