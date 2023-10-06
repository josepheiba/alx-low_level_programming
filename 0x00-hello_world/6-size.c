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
	printf("Size of a char: %n byte(s)\n", sizeof(char));
	printf("Size of a int: %n byte(s)\n", sizeof(int));
	printf("Size of a long: %n byte(s)\n", sizeof(long));
	printf("Size of a long long: %n byte(s)\n", sizeof(long long));
	printf("Size of a float: %n byte(s)\n", sizeof(float));
	return (0);
}
