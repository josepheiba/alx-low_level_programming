#include "variadic_functions.h"

/**
 * sum_them_all - check code.
 * @n : variable
 * Return: check declaration
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int number, sum, i;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	sum = 0;
	i = 0;
	while (i < n)
	{
		number = va_arg(ptr, unsigned int);
		sum = sum + number;
		i++;
	}
	va_end(ptr);
	return (sum);
}
