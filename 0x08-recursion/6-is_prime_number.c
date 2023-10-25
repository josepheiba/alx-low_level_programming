#include "main.h"
#include <stdio.h>

int bttr_sprm(int n, int m);

/**
 * is_prime_number - check code
 * @n: input
 * Return: check function declaration
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (bttr_sprm(n, 2));
}

/**
 * bttr_sprm - check code
 * @n: input
 * @m: input
 * Return: check function declaration
 */

int bttr_sprm(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (bttr_sprm(n, m + 1));
}
