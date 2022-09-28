#include "main.h"
/**
 * _print_rev_recursion - print strings in reverse
 * @s: string to be printed
 *
 * Return: always zero (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return 0;
}
