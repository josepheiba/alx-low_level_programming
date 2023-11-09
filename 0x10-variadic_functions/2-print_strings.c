#include "variadic_functions.h"

/**
 * print_strings - check code.
 * @separator : variable
 * @n : variable
 * Return: check declaration
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *string;

	va_start(ptr, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(ptr, char *);
		if (string != NULL)
			printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
