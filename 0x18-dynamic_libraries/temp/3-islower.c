#include "main.h"

/**
 * _islower - description
 * @c: character
 * Return: 1 0
*/

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
		return (0);
}
