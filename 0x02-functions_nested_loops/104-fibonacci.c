#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	double nbr1, nbr2, nbrnew;
	int i;

	nbr1 = 0;
	nbr2 = 1;
	for (i = 0; i < 98; i++)
	{
		nbrnew = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = nbrnew;
		if (i < 97)
		{
		printf("%.0f, ", nbrnew);
		}
		else
		printf("%.0f", nbrnew);
	}
	printf("\n");
	return (0);
}
