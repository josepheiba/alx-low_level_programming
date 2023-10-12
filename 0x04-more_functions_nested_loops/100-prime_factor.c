#include "main.h"
#include <stdio.h>

/**
 * isprime - check code.
 * @n: input
 * Return: 0 1;
 */

int isprime(long int n)
{
	long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - check code.
 * Return: 0
 */

int main(void)
{
	long int num, i;

	num = 612852475143;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			if (isprime(i))
			{
				num = num / i;
				i = 2;
			}
		}
	}
	printf("%li\n", num);
	return (0);
}
