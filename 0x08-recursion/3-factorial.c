#include "main.h"
/**
 * factorial - a function that return factorial of
 * of a given number
 * @n: is a number to be returned
 *
 * Return: if n is lower than 0 it return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
