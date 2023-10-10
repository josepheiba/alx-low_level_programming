#include "main.h"

/**
 * print_times_table - description
 * @n : number
 * Return: 1 0
*/

void print_times_table(int n)
{
	int i, j, k, l, m, times;

	if ((n * n) < 1000)
	{
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			times = i * j;
			l = times % 10;
			k = (times - l) / 10;
			m = (times - (k * 10) - l) / 100;
			if (j == 0)
			{
				_putchar('0' + l);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (m == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + m);
				}
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
}
