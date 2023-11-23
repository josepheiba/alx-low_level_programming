#include "main.h"

/**
 * flip_bits - check code.
 * @n : variable
 * @m : variable
 * Return: check declaration
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int one, i;

	i = 0;
	one = 1;
	while (n != 0 || m != 0)
	{
		if ((n & one) != (m & one))
			i++;
		n = n - (n & one);
		m = m - (m & one);
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
