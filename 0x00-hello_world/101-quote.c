#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char *quote="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(quote , sizeof(char), sizeof(quote), stdout);
	return (1);
}
