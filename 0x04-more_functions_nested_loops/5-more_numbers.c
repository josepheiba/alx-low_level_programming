#include "main.h"

/**
 * more_numbers - check code.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
