#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c : variable
 * Return: 0 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
