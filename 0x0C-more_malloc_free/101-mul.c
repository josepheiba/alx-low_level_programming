#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _error - check code
 * Return: check function declaration
 */

void _error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * _strlen_recursion - check code
 * @s: input
 * Return: check function declaration
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _isdigit - check the code.
 * @c : variable
 * Return: 0 1
 */

int _isdigit(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] < '0' || c[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * _print - check the code.
 * @mul : variable
 * @l : variable
 * Return: 0 1
 */

void _print(int *mul, int l)
{
	int x;

	x = 0;
	while (mul[x] == 0 && x < l - 1)
		x++;
	if (x == l)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	for (; x < l; x++)
	{
		_putchar(mul[x] + '0');
	}

	_putchar('\n');
}

/**
 * main - check the code.
 * @argc : variable
 * @argv : variable
 * Return: 0 1
 */

int main(int argc, char **argv)
{
	int x, i, j, nl1, nl2, l, N1, N2, MLT, C;
	int *mul;
	char *n1 = *(argv + argc - 1);
	char *n2 = *(argv + argc - 2);

	x = 0;
	if (argc != 3 || _isdigit(n1) || _isdigit(n2))
		_error();
	nl1 = _strlen_recursion(n1);
	nl2 = _strlen_recursion(n2);

	l = nl1 + nl2;
	mul = malloc(sizeof(int) * (l + 1));
	if (mul == NULL)
		return (1);

	for (x = 0; x < l; x++)
		*(mul + x) = 0;

	for (i = nl1 - 1; i >= 0; i--)
	{
		N1 = n1[i] - '0';
		C = 0;
		for (j = nl2 - 1; j >= 0; j--)
		{
			N2 = n2[j] - '0';
			MLT = N1 * N2;
			C = C + mul[i + j + 1] + MLT;
			mul[i + j + 1] = C % 10;
			C = (C - (C % 10)) / 10;
		}
		mul[i + j + 1] += C;
	}
	_print(mul, l);
	free(mul);
	return (0);
}
