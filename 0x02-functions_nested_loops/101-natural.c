#include <stdio.h>

int main(void)
{
	int sum, nbr;
	
	sum = 0;
	for(nbr = 0; nbr < 1024; nbr++)
	{
		if (nbr % 3 == 0 || nbr % 5 == 0)
		{
		sum = sum + nbr;
		}
	}
	printf("%i\n", sum);
	return (0);
}
