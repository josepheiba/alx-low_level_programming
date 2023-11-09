#include "variadic_functions.h"

/**
 * print_numbers - check code.
 * @separator : variable
 * @n : variable
 * Return: check declaration
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int number, i;
	char *s = "";

	if (separator == NULL)
		separator = s;

	va_start(ptr, n);

	number = n;
	sum = 0;
	i = 0;
	while (i < n)
	{
		number = va_arg(ptr, unsigned int);
		sum = sum + number;
		i++;
	}
	return (sum);
}
