#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long nbr1, nbr2, nbrnew;
	int i, sum;

	sum = 0;
	nbr1 = 0;
	nbr2 = 1;
	for (i = 0; i < 50; i++)
	{
		nbrnew = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = nbrnew;
		if (nbrnew > 4000000)
			break;
		if (nbrnew % 2 == 0)
		{
			sum = sum + nbrnew;
		}
	}
	printf("%i\n", sum);
	return (0);
}
