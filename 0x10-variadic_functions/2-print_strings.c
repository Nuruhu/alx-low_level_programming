#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list myList;

	va_start(myList, n);

	for (i = 1; i <= n; i++)
	{
		ptr = va_arg(myList, char*);
		if (ptr)
		{
			printf("%s", ptr);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n && separator)
		{
			printf("%s", separator);
		}
		else
		{
			;
		}
	}
	printf("\n");
	va_end(myList);
}
