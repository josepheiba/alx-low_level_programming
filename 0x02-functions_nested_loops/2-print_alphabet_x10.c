#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet_x10(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	i = 0;
	
	for (j = 0; j < 10; j++)
	{
	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	i = 0;
	_putchar('\n');
	}
}
