#include "main.h"

/**
 * print_alphabet - description
*/

void print_alphabet(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
}
