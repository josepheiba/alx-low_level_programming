#include "main.h"

/**
 * print_times_table - description
 * @n : int
 * Return: 1 0
*/

void print_times_table(int n)
{
	int i, j, k, l, times;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			times = i * j;
			if (times < 10)
			{
				l = times % 10;
				if (j == 0)
				{
				_putchar('0' + l);
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + l);
				}
			}
			else if (times < 100 && times > 9)
			{
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
				_putchar(' ');
				_putchar('0' + k);
				_putchar('0' + l);
				}
			}
		}
		_putchar('\n');
	}
}
