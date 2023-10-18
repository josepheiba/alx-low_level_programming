#include "main.h"

/**
 * _strcmp - check code
 * @s1: input
 * @s2: input
 * Return: check function declaration
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	diff = 0;
	diff = s1[0] - s2[0];
	return (diff);
}
