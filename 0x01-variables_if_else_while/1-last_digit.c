#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: positive negative zero
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int rest;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rest = n%10;
	/* my code */
	if (n > 5)
        {
		printf("Last digit of %i is %i and is greater than 5", n, rest);
        }
        else if (n == 0)
        {
		printf("Last digit of %i is %i and is 0", n, rest);
        }
        else if (n < 6)
        {
		printf("Last digit of %i is %i and is less than 6 and not 0", n, rest);
        }
	return (0);
}
