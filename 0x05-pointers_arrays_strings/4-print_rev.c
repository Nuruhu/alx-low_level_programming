#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int i, n;

	int j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (n = (j - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
