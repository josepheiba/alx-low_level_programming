#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check code
 * 
 * Return: check function declaration
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand (time (NULL));
	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 1;
		sum += (pass[i] + '0');
		putchar ('0');
		if ((2772 - sum) - '0' < 1)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar (n + '0');
			break;
		}
	}
	return (0);
}
