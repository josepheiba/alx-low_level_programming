#include "variadic_functions.h"

struct type
{
	char *type;
	void (*f)(va_list ptr);
};

typedef struct type type_t;

void p_char(va_list ptr)
{
	char c;
	c = va_arg(ptr, int);
	printf("%c", c);
}
void p_int(va_list ptr)
{
	int c;
	c = va_arg(ptr, int);
	printf("%i", c);
}
void p_float(va_list ptr)
{
	float c;
	c = va_arg(ptr, double);
	printf("%f", c);
}
void p_string(va_list ptr)
{
	char *c;
	c = va_arg(ptr, char*);
	printf("%s", c);
}

/**
 * print_all - check code.
 * @format : variable
 * Return: check declaration
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j, l;
	type_t types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
	};

	va_start(ptr, format);

	l = strlen(format);
	i = j = 0;

	while (i < l)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(types[j].type))
			{
				types[j].f(ptr);
				if (i != l - 1)
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
