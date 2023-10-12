#include "main.h"

/**
 * print_triangle - check code.
 *
 * @size : variable
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}
			for (k = size - i - 1; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
