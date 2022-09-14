#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * from n to 98
 * @n: Number to operate
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		for (; n < 0; ++n)
		{
			printf("%d, ", n);
		}
		for (; n <= 98; ++n)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; --n)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	else
	{
		for (; n <= 98; ++n)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	printf("\n");
}

