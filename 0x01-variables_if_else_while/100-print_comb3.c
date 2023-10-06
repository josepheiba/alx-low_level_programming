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
	int sum;
	int suminvert;
	int printed;

	printed = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
		sum = i * 10 + j;
		suminvert = i + j * 10;
		if (i != j && sum < suminvert)
		{
			if (printed == 1)
			{
			putchar(',');
			putchar(' ');
			}
			putchar(i + 48);
			putchar(j + 48);
			printed = 1;
		}
		}
	}
	putchar('\n');
	return (0);
}
