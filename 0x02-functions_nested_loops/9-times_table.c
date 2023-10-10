#include "main.h"

/**
 * times_table - description
 * Return: 1 0
*/

void times_table(void)
{
	int i, j, k, l, times;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			times = i * j;
			l = times % 10;
			k = (times - l) / 10;
			if (j == 0)
			{
				_putchar('0' + l);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (k == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + k);
				}
				_putchar('0' + l);
			}
		}
		j = 0;
		_putchar('\n');
	}
}
