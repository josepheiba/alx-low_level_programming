#include "main.h"

/**
 * main - check the code
 * @argc: input
 * @argv: input
 * Return: check declaration
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc == 3)
	{
		a = _atoi(*(argv + 1));
		b = _atoi(*(argv + 2));
		printf("%i\n", a * b);
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
		if (s[i + 1] >= 58 || s[i + 1] <= 47)
			break;
		}
		i++;
	}
	return (sign * number);
}
