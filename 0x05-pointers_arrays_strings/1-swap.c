#include "main.h"

/**
 * swap_int - check code
 * @a: input
 * @b: input
 * Return: check function declaration
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
