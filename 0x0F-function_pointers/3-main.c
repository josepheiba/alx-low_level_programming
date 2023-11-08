#include "3-calc.h"

/**
 * main - main
 * @argc: input
 * @argv: input
 * Return: 0
*/

int main(int argc, char **argv)
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(*(argv + 1));
	n2 = atoi(*(argv + 3));
	op = *(argv + 2);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(op)(n1, n2));
	return (0);
}
