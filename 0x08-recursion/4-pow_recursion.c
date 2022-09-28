#include "main.h"
/**
 * _pow_recursion - a function that return the value of x
 * @x: the number to be powered
 * @y: the number to be raised
 *
 * Return: always zero (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
