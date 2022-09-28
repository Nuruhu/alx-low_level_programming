#include "main.h"
/**
 * primeNum - check is the number prime?
 * @n: the number to checked
 * @i: itrator
 *
 * Return: 1 if the number is prime
 * 0 if number is not prime number
 */
int primeNum(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + primeNum(n, i + 1));
}
/**
 * is_prime_number - a function that return prime number
 * @n: number to be checked
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (primeNum(n, 2));
}
