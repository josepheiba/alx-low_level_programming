#include "main.h"

/**
 * _islower - description
 * _islower
 * c is character
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
