#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: chaos numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int printed;

	printed = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
				if (i * 10 + j != k * 10 + l && i * 10 + j < k * 10 + l)
				{
					if (printed == 1)
					{
					putchar(',');
					putchar(' ');
					}
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(l + 48);
					printed = 1;
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
