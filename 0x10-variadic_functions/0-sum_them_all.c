#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: numbers of integers passed to the function
 *
 * Return: zero if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, addition = 0;
	va_list vaList;

	va_start(vaList, n);

	for (i = 0; i < n; i++)
		addition += va_arg(vaList, int);

	va_end(vaList);
	return (addition);
}
