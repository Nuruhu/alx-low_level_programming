#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	_putchar('\n');
}
