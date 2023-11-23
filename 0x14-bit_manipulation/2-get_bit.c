#include "main.h"

/**
 * get_bit - check code.
 * @n : variable
 * @index : variable
 * Return: check declaration
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int one, num;
	int bruh;

	one = 1;
	n = n >> index;
	num = n & one;
	bruh = num;
	return (bruh);
}
