#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A-to-Z-Dragon Buster Cannon
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	n = 97;
	for (;n < 123; n++)
	{
	if (n != 101 && n != 113)
	{
		putchar(n);
	}
	}
	putchar('\n');
	return (0);
}
