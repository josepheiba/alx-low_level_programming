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

	n = 0x0;
	for (; n < 0x10; n++)
	{
	printf("%X", n);
	}
	putchar('\n');
	return (0);
}
