#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print - check code
 * @s: input
 * Return: check function declaration
 */

void _print(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - check code
 * Return: check function declaration
 */

int main(void)
{
	_print(__FILE__);
	return (0);
}
