#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long nbr1, nbr2, nbrnew, n11, n12, n21, n22, ln, rn;
	int i;

	nbr1 = 0;
	nbr2 = 1;
	for (i = 0; i < 92; i++)
	{
		nbrnew = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = nbrnew;
		printf("%lu, ", nbrnew);
	}
	n11 = nbr1 / 10000000000;
	n21 = nbr2 / 10000000000;
	n12 = nbr1 % 10000000000;
	n22 = nbr2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		ln = n11 + n21;
		rn = n12 + n22;
		if (n12 + n22 > 9999999999)
		{
			ln++;
			rn = rn % 10000000000;
		}

		printf("%lu%lu", ln, rn);
		if (i != 98)
		printf(", ");
		n11 = n21;
		n12 = n22;
		n21 = ln;
		n22 = rn;
	}
	printf("\n");
	return (0);
}
