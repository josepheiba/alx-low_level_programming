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

	va_start(ptr, n);

	i = 0;
	while (i < n)
	{
		number = va_arg(ptr, unsigned int);
		printf("%u", number);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
