#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: input 1
 * @b: unput 2
 *
 * Return: intigers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
