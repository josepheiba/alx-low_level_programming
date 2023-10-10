#include "main.h"

/**
 * print_times_table - description
 * myfun - description
 * @i : int
 * @j : int
 * @n : int
 * Return: 1 0
*/
void myfun(int i, int j);

void print_times_table(int n)
{
	int i, j;

	if ((n * n) < 1000)
	{
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			myfun(i, j);
		}
		_putchar('\n');
	}
	}
}

void myfun(int i, int j)
{
	int k, l, m, times;

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
			else if (times > 99)
			{
				l = times % 10;
				k = ((times - l) / 10) % 10;
				m = (times - (10 * k) - l) / 100;
				if (j == 0)
				{
				_putchar('0' + l);
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m);
				_putchar('0' + k);
				_putchar('0' + l);
				}
			}
}
