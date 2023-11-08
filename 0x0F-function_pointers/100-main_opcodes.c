#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: input
 * @argv: input
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, n;
	char *p;

	p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(*(argv + 1));

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;

	while (i < n)
	{
		printf("%02x", *(p + i) & 0xFF);
		if (i != n - 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
