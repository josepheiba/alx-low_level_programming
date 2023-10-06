#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A-to-Z-Dragon Buster Cannon
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
        int n;

        n = 0;
        for (; n < 10; n++)
        {
        putchar(n + 48);
        if (n < 9)
                {
                putchar(',');
                putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
