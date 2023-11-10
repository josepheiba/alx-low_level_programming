#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * struct type - Struct type_t
 *
 * @type: The operator
 * @f: The function associated
 */

struct type
{
	char *type;
	void (*f)(va_list ptr);
};

typedef struct type type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
