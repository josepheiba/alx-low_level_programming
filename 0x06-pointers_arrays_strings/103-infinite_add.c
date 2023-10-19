#include "main.h"

/**
 * strrev - check code
 * @s: input
 * Return: check function declaration
 */

void strrev(char *s)
{
	int i, n;
	char tmp;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}
}


/**
 * infinite_add - check code
 * @n1: input
 * @n2: input
 * @r: input
 * @size_r: input
 * Return: check function declaration
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, m, one, two, sum;

	i = j = m = sum = 0;
	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	while (i > 0 || j > 0 || sum != 0)
	{
		if (i - 1 >= 0)
			one = (int)n1[i - 1] - 48;
		else
			one = 0;
		if (j - 1 >= 0)
			two = (int)n2[j - 1] - 48;
		else
			two = 0;
		sum = sum + one + two;
		r[m] = sum % 10 + '0';
		if (sum > 9)
			sum = (sum - (sum % 10)) / 10;
		else
			sum = 0;
		m++;
		if (m == size_r)
			return (0);
		i--;
		j--;
	}
	r[m] = '\0';
	strrev(r);
	return (r);
}
