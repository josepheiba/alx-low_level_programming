#include "function_pointers.h"

/**
 * print_name - check code.
 * @name : variable
 * @f : variable
 * Return: check declaration
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
