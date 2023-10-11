#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	int nbr1, nbr2, nbrnew, i;

	nbr1 = 0;
	nbr2 = 1;
	for (i = 0; i < 50; i++)
	{
		nbrnew = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = nbrnew;
		if (i < 49)
		{
		printf("%i, ", nbrnew);
		}
		else
		printf("%i", nbrnew);
	}
	printf("\n");
	return (0);
}
