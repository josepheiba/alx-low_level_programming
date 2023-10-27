#include "main.h"

/**
 * main - check the code
 * @argc: input
 * @argv: input
 * Return: check declaration
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", *(argv + i));
	i++;
	}
	return (0);
}
