#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long nbr1, nbr2, nbrnew;
	int i;

	nbr1 = 0;
	nbr2 = 1;
	for (i = 0; i < 50; i++)
	{
		nbrnew = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = nbrnew;
		if (i < 49)
		{
		printf("%lu, ", nbrnew);
		}
		else
		printf("%lu", nbrnew);
	}
	printf("\n");
	return (0);
}
