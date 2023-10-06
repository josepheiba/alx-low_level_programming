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
	char c;

	n = 0;
	for (; n < 10; n++)
	{
	printf("%i", n);
	}

	c = 'a';
	for (; c < 'g'; c++)
	{
	printf("%c", c);
	}
	putchar('\n');
	return (0);
}
