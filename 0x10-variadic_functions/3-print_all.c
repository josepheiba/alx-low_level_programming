#include "variadic_functions.h"

/**
 * p_char - code.
 * @ptr : variable
 * Return: check declaration
 */

void p_char(va_list ptr)
{
	char c;

	c = va_arg(ptr, int);
	printf("%c", c);
}

/**
 * p_int - code.
 * @ptr : variable
 * Return: check declaration
 */

void p_int(va_list ptr)
{
	int c;

	c = va_arg(ptr, int);
	printf("%i", c);
}

/**
 * p_float - check code.
 * @ptr : variable
 * Return: check declaration
 */

void p_float(va_list ptr)
{
	float c;

	c = va_arg(ptr, double);
	printf("%f", c);
}

/**
 * p_string - check code.
 * @ptr : variable
 * Return: check declaration
 */

void p_string(va_list ptr)
{
	char *c;

	c = va_arg(ptr, char *);
	if (c != NULL)
	{
		printf("%s", c);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - check code.
 * @format : variable
 * Return: check declaration
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i, j;
	char *why_2_if = "";
	type_t types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
	};

	va_start(ptr, format);

	i = j = 0;

	while (i < strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(types[j].type))
			{
				printf("%s", why_2_if);
				types[j].f(ptr);
				why_2_if = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
