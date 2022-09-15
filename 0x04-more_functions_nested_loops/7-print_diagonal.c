#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 *
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= n)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
