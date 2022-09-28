#include "main.h"
/**
 * power_operation - return natural square root
 * @n: input number
 * @i: itrator
 *
 * Return: square root
 */
int power_operation(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power_operation(n, i + 1));
}
/**
 * _sqrt_recursion - a function that return square root
 * @n: a number to be squared
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
