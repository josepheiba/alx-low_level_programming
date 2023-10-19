#include "main.h"

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
	int i, j, k, l, m, one, two, sum;

	i = j = k = m = sum = 0;
	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	if (i > j)
		l = i;
	else
		l = j;
	if (size_r > l + 1)
	{
	for (k = 0; k < size_r; k++)
	{
		if (i - k - 1 >= 0)
			one = (int)n1[i - k - 1] - 48;
		else
			one = 0;
		if (j - k - 1 >= 0)
			two = (int)n2[j - k - 1] - 48;
		else
			two = 0;
		sum = sum + one + two;
		r[l - k] = sum % 10 + '0';
		if (sum > 9)
			sum = (sum - (sum % 10)) / 10;
		else
			sum = 0;
	}
	r[l + 1] = '\0';
	if (r[0] == '0')
	{
		do {
		r[m] = r[m + 1];
		m++;
		} while (r[m] != '\0');
	}
	return (r);
	}
	else
		return (0);
}
