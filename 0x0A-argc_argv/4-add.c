#include "main.h"

/**
 * main - check the code
 * @argc: input
 * @argv: input
 * Return: check declaration
 */

int main(int argc, char **argv)
{
	unsigned int sum;
	int i;

	sum = 0;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (**(argv + i) >= 58 || **(argv + i) <= 47)
			{
				printf("Error\n");
				return (0);
			}
			else
				sum = sum + _atoi(*(argv + i));
		i++;
		}
		printf("%i\n", sum);
		return (0);
	}
	else
	{
		printf("%i\n", 0);
		return (0);
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
