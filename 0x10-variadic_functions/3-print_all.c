#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, k;
	char *ptr;
	const char arguments[] = "cifs";
	va_list myList;

	va_start(myList, format);
	while (format && format[i])
	{
		k = 0;
		while (arguments[k])
		{
			if (format[i] == arguments[k] && j)
			{
				printf(", ");
				break;
			} k++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(myList, int)), j = 1;
				break;
			case 'i':
				printf("%d", va_arg(myList, int)), j = 1;
				break;
			case 'f':
				printf("%f", va_arg(myList, double)), j = 1;
				break;
			case 's':
				ptr = va_arg(myList, char *), j = 1;
				if (!ptr)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
		} i++;
	}
	printf("\n"), va_end(myList);
}
