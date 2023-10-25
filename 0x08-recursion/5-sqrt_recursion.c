#include "main.h"

int bttr_sqrt(int n, int m);

/**
 * _sqrt_recursion - check code
 * @n: input
 * Return: check function declaration
 */

int _sqrt_recursion(int n)
{
	return (bttr_sqrt(n, 0));
}

/**
 * bttr_sqrt - check code
 * @n: input
 * @m: input
 * Return: check function declaration
 */

int bttr_sqrt(int n, int m)
{
	int pow;

	pow = _pow_recursion(m, 2);
	if (pow == n)
		return (m);
	else if (pow > n)
		return (-1);
	else
		return (bttr_sqrt(n, m + 1));
}

/**
 * _pow_recursion - check code
 * @x: input
 * @y: input
 * Return: check function declaration
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
