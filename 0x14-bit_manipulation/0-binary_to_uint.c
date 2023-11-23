#include "main.h"

/**
 * binary_to_uint - check code.
 * @b : variable
 * Return: check declaration
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, n;
	unsigned int TwoPwX;

	if (!b)
		return (0);
	i = 0;
	while (*(b + i) != '\0')
		i++;
	i--;

	TwoPwX = 1;
	num = 0;
	while (i >= 0)
	{
		n = *(b + i) - '0';
		if (n != 0 && n != 1)
			return (0);
		num = num + n * TwoPwX;
		i--;
		TwoPwX = TwoPwX << 1;
	}
	return (num);
}
