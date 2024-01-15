#include "main.h"

/**
 * _isalpha - description
 * @c: character
 * Return: 1 0
*/

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	else
		return (0);
}
