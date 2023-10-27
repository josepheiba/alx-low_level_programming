#include "main.h"
#include <string.h>

/**
 * main - check the code
 * @argc: input
 * @argv: input
 * Return: check declaration
 */

int main(int argc, char **argv)
{
	int change;
	int sum;

	sum = 0;
	if (argc == 2)
	{
		change = _atoi(argv[1]);
		if (change < 0)
		{
			printf("%i\n", 0);
			return (0);
		}
		while (change >= 25)
		{
			sum++;
			change -= 25;
		}
		while (change >= 10)
		{
			sum++;
			change -= 10;
		}
		while (change >= 5)
		{
			sum++;
			change -= 5;
		}
		while (change >= 2)
		{
			sum++;
			change -= 2;
		}
		while (change >= 1)
		{
			sum++;
			change -= 1;
		}
		printf("%i\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * _atoi - check code
 * @s: input
 * Return: check function declaration
 */

int _atoi(char *s)
{
	unsigned int number;
	int i, n, sign;

	i = number = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		if (s[i] < 58 && s[i] > 47)
		{
			n = (int)s[i] - 48;
			number = number * 10 + n;
		if ((s[i + 1] >= 58 || s[i + 1] <= 47))
			break;
		}
		i++;
	}
	return (sign * number);
}
