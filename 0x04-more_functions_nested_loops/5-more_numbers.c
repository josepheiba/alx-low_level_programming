#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 * Return: 0 1
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
		_putchar('0' + j);
		}
		putchar('\n');
	}
	return (0);
}
